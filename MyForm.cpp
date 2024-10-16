#include "MyForm.h"
#include<cmath>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //Атрибут для main
int main(array<String^>^ args) //^ - вместо delete
{
    Application::SetCompatibleTextRenderingDefault(false); //Обработа текста
    Application::EnableVisualStyles(); //Обработка визуальных стилей 
    physicheskayazadacha::MyForm form; //Обращение к классу и создание элемента form
    Application::Run(% form); // Обращение к методу Run, передача по ссылке form
}

void physicheskayazadacha::MyForm::RungeKutta()
{
    stop = false;
    g = 9.81, pi = 4 * atan(1), P0 = 1.013 * 1e5, T0 = 288, a = 6.5 * 1e-3, M = 29 * 1e-3, R = 8.31441, mH2 = 2.24;
    n = mH2 / 0.002;
    St = ((M * g) / (a * R)) - 1;
    yMK = (P0 * M) / (R * pow(T0, St + 1));
    Cd = Cd * pi * pow(0.75 * n / pi, 2. / 3.);
    N = int(tmax / dt) + 2;
    x = new double[N + 1];
    v = new double[N + 1];
    radius = new double[N + 1];
    v[0] = v0;
    x[0] = x0;

  
    double vyaz[] = {1.46*1e-5, 1.52*1e-5, 1.58*1e-5, 1.65*1e-5, 1.71*1e-5, 1.79*1e-5, 1.86*1e-5, 2.03 * 1e-5, 2.21 * 1e-5, 2.42 * 1e-5,
        2.65 * 1e-5, 2.9 * 1e-5, 3.2 * 1e-5, 3.53 * 1e-5,3.9 * 1e-5, 4.56 * 1e-5, 6.24 * 1e-5, 8.54 * 1e-5 };   //массив для вязкости
    double Re[18]; //массив для числа Рейнольдса


    double k[4];
    int i = 0; 
    double t = 0;
    do
    {
        this->chart->Series[0]->Points->Clear();
        radius[i] = pow((0.75*8.17/pi), 1. / 3.) * pow(((T0-a*x[i])/T0), -St / 3.);

        t = i * dt;
        k[0] = f(x[i], v[i]) * dt;
        k[1] = f(x[i]+v[i]*dt/2, v[i] + k[0]/2) * dt;
        k[2] = f(x[i]+ v[i] * dt/2. + k[0]*dt/4., v[i] + k[1] / 2.) * dt;
        k[3] = f(x[i] + v[i] * dt + k[1]* dt / 2., v[i]+k[2]) * dt;

        x[i + 1] = x[i] + v[i] * dt + (1. / 6.) * (k[0] + k[1] + k[2]) * dt;
        v[i + 1] = v[i] + (1. / 6.) * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);
        Ek = 3.24 *v[i] * v[i] / 2.;
        Ep = 3.24 *g*x[i];
        Emex = Ek +Ep;
        if (i % 1000 == 0) {
            this->chartEk->Series[0]->Points->AddXY(t, Ek);
            this->chartEp->Series[0]->Points->AddXY(t, Ep);
            this->chartEmex->Series[0]->Points->AddXY(t, Emex);
            this->chartv->Series[0]->Points->AddXY(t, v[i]);
            this->chartd->Series[0]->Points->AddXY(t, 2*radius[i]);
       }

        textBoxR->Text = Convert::ToString((round(radius[i] * 100) / 100.));
        textBoxh->Text = Convert::ToString((round(x[i] * 100) / 100.));

        if(i%1000==0)
        {
        for (int j = 0; j <= 360; j += 20)
        {
            angle = j * pi / 180;
            xsh = radius[i] * 1000 * cos(angle) + 12500; 
            ysh = radius[i] * sin(angle) * 1000 + x[i];
            
            this->chart->Series[0]->Points->AddXY(xsh, ysh);
           
        }

       
        Application::DoEvents();
        if (textBoxRe1->Text == "" && x[i] >= 0) { Re[0] = 2 * radius[i] * v[i] / vyaz[0];  textBoxRe1->Text = Convert::ToString(round(Re[0]*100)/100.);}  
        if (textBoxRe2->Text == "" && x[i] >= 500) { Re[1] = 2*radius[i] * v[i] / vyaz[1]; textBoxRe2->Text = Convert::ToString(round(Re[1] * 100) / 100.);}
        if (textBoxRe3->Text == "" && x[i] >= 1000) { Re[2] = 2*radius[i] * v[i] / vyaz[2]; textBoxRe3->Text = Convert::ToString(round(Re[2] * 100) / 100.);}
        if (textBoxRe4->Text == "" && x[i] >= 1500) { Re[3] = 2*radius[i] * v[i] / vyaz[3]; textBoxRe4->Text = Convert::ToString(round(Re[3] * 100) / 100.);}
        if (textBoxRe5->Text == "" && x[i] >= 2000) { Re[4] = 2*radius[i] * v[i] / vyaz[4]; textBoxRe5->Text = Convert::ToString(round(Re[4] * 100) / 100.);}
        if (textBoxRe6->Text == "" && x[i] >= 2500) { Re[5] = 2*radius[i] * v[i] / vyaz[5]; textBoxRe6->Text = Convert::ToString(round(Re[5] * 100) / 100.);}
        if (textBoxRe7->Text == "" && x[i] >= 3000) { Re[6] = 2*radius[i] * v[i] / vyaz[6]; textBoxRe7->Text = Convert::ToString(round(Re[6] * 100) / 100.);}
        if (textBoxRe8->Text == "" && x[i] >= 4000) { Re[7] = 2 * radius[i] * v[i] / vyaz[7]; textBoxRe8->Text = Convert::ToString(round(Re[7] * 100) / 100.);}
        if (textBoxRe9->Text == "" && x[i] >= 5000) { Re[8] = 2 * radius[i] * v[i] / vyaz[8]; textBoxRe9->Text = Convert::ToString(round(Re[8] * 100) / 100.);}
        if (textBoxRe10->Text == "" && x[i] >= 6000) { Re[9] = 2 * radius[i] * v[i] / vyaz[9]; textBoxRe10->Text = Convert::ToString(round(Re[9] * 100) / 100.);}
        if (textBoxRe11->Text == "" && x[i] >= 7000) { Re[10] = 2 * radius[i] * v[i] / vyaz[10]; textBoxRe11->Text = Convert::ToString(round(Re[10] * 100) / 100.);}
        if (textBoxRe12->Text == "" && x[i] >= 8000) { Re[11] = 2 * radius[i] * v[i] / vyaz[11]; textBoxRe12->Text = Convert::ToString(round(Re[11] * 100) / 100.);}
        if (textBoxRe13->Text == "" && x[i] >= 9000) { Re[12] = 2 * radius[i] * v[i] / vyaz[12]; textBoxRe13->Text = Convert::ToString(round(Re[12] * 100) / 100.);}
        if (textBoxRe14->Text == "" && x[i] >= 10000) { Re[13] = 2 * radius[i] * v[i] / vyaz[13]; textBoxRe14->Text = Convert::ToString(round(Re[13] * 100) / 100.);}
        if (textBoxRe15->Text == "" && x[i] >= 11000) { Re[14] = 2 * radius[i] * v[i] / vyaz[14]; textBoxRe15->Text = Convert::ToString(round(Re[14] * 100) / 100.);}
        if (textBoxRe16->Text == "" && x[i] >= 12000) { Re[15] = 2 * radius[i] * v[i] / vyaz[15]; textBoxRe16->Text = Convert::ToString(round(Re[15] * 100) / 100.);}
        if (textBoxRe17->Text == "" && x[i] >= 14000) { Re[16] = 2 * radius[i] * v[i] / vyaz[16]; textBoxRe17->Text = Convert::ToString(round(Re[16] * 100) / 100.);}
        if (textBoxRe18->Text == "" && x[i] >= 16000) { Re[17] = 2 * radius[i] * v[i] / vyaz[17]; textBoxRe18->Text = Convert::ToString(round(Re[17] * 100) / 100.);}

        if (t >= tmax) break;
        if (stop) break;
        if (radius[i] >= 2* radius[0]) 
        {
            MessageBox::Show("Шар взорвался на высоте "+ x[i]);
            break;
        }
       
        }
        i++;
     
        
    } while (t <= tmax && !stop && i <= N);

    


 }

double physicheskayazadacha::MyForm:: pVozd(double x)
{
     return yMK * pow(T0 - a * x,St);
}
double physicheskayazadacha::MyForm::f(double x, double v)
{ 
    return  (M*n*g/(1+mH2) - g - Cd * pow(pVozd(x), 1 / 3) * v * v) / (2 + 2 * mH2);
}

System::Void physicheskayazadacha::MyForm::стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCd->Text == "" || textBoxtmax->Text == "" || textBoxdt->Text == "" ||
        textBoxX0->Text == "" || textBoxV0->Text == "") 
    {
        Default();
        textBoxCd->Text = Convert::ToString(Cd);
        textBoxtmax->Text = Convert::ToString(tmax);
        textBoxdt->Text = Convert::ToString(dt);
        textBoxV0->Text = Convert::ToString(v0);
        textBoxX0->Text = Convert::ToString(x0);

    }
    else
    {  
    Cd = Convert::ToDouble(textBoxCd->Text);
    tmax = Convert::ToDouble(textBoxtmax->Text);
    dt = Convert::ToDouble(textBoxdt->Text);
    v0 = Convert::ToDouble(textBoxV0->Text);
    x0 = Convert::ToDouble(textBoxX0->Text);
    }
  
    this->chart->Series[0]->Points->Clear();
    this->chartEk->Series[0]->Points->Clear();
    this->chartEp->Series[0]->Points->Clear();
    this->chartEmex->Series[0]->Points->Clear();
    this->chartd->Series[0]->Points->Clear();
    this->chartv->Series[0]->Points->Clear();

    textBoxRe1->Text = "";
    textBoxRe2->Text = "";
    textBoxRe3->Text = "";
    textBoxRe4->Text = "";
    textBoxRe5->Text = "";
    textBoxRe6->Text = "";
    textBoxRe7->Text = "";
    textBoxRe8->Text = "";
    textBoxRe9->Text = "";
    textBoxRe10->Text = "";
    textBoxRe11->Text = "";
    textBoxRe12->Text = "";
    textBoxRe13->Text = "";
    textBoxRe14->Text = "";
    textBoxRe15->Text = "";
    textBoxRe16->Text = "";
    textBoxRe17->Text = "";
    textBoxRe18->Text = "";

    chart->ChartAreas[0]->AxisX->Maximum = 25000;
    chart->ChartAreas[0]->AxisX->Minimum = 0;

    chart->ChartAreas[0]->AxisY->Maximum = 22000;
    chart->ChartAreas[0]->AxisY->Minimum = 0;

    chartd->ChartAreas[0]->AxisY->Maximum = 5.5;
    chartd->ChartAreas[0]->AxisY->Minimum = 2;

    delete[] x;
    delete[] v;
    delete[] radius;

    RungeKutta();
}

System::Void physicheskayazadacha::MyForm::стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    stop = true;
}

void physicheskayazadacha::MyForm::Default()
{
    x0 = 0;
    v0 = 0;
    Cd = 0.4;
    tmax = 20000;
    dt = 0.02;
}
