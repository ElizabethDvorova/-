#pragma once

namespace physicheskayazadacha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàðòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòîïToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxCd;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxtmax;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxdt;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxV0;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxX0;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxh;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxR;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxRe1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartEk;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartEp;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartEmex;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxRe2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxRe3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxRe4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBoxRe5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxRe6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxRe7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBoxRe8;
	private: System::Windows::Forms::TextBox^ textBoxRe9;
	private: System::Windows::Forms::TextBox^ textBoxRe10;
	private: System::Windows::Forms::TextBox^ textBoxRe11;
	private: System::Windows::Forms::TextBox^ textBoxRe12;
	private: System::Windows::Forms::TextBox^ textBoxRe13;
	private: System::Windows::Forms::TextBox^ textBoxRe14;


	private: System::Windows::Forms::TextBox^ textBoxRe15;










	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBoxRe16;
	private: System::Windows::Forms::TextBox^ textBoxRe17;
	private: System::Windows::Forms::TextBox^ textBoxRe18;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartv;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartd;
private: System::Windows::Forms::GroupBox^ groupBox3;








	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñòàðòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòîïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxCd = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxtmax = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxdt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxV0 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxX0 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxh = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxR = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe1 = (gcnew System::Windows::Forms::TextBox());
			this->chartEk = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartEp = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartEmex = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe11 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe12 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe13 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe14 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe15 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBoxRe16 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe17 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRe18 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chartv = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartd = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEmex))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartd))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea13->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea13->AxisX->MajorGrid->Enabled = false;
			chartArea13->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea13->AxisX->MajorTickMark->TickMarkStyle = System::Windows::Forms::DataVisualization::Charting::TickMarkStyle::None;
			chartArea13->AxisY->MajorGrid->Interval = 0;
			chartArea13->AxisY->MajorTickMark->Interval = 0;
			chartArea13->AxisY->MajorTickMark->IntervalOffset = 0;
			chartArea13->AxisY->MinorGrid->Enabled = true;
			chartArea13->AxisY->MinorGrid->LineColor = System::Drawing::Color::DimGray;
			chartArea13->AxisY->MinorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea13->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea13);
			legend13->Enabled = false;
			legend13->Name = L"Legend1";
			this->chart->Legends->Add(legend13);
			this->chart->Location = System::Drawing::Point(12, 31);
			this->chart->Name = L"chart";
			series13->BorderWidth = 3;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Color = System::Drawing::SystemColors::MenuHighlight;
			series13->Legend = L"Legend1";
			series13->Name = L"Series1";
			series13->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series13->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart->Series->Add(series13);
			this->chart->Size = System::Drawing::Size(800, 600);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñòàðòToolStripMenuItem,
					this->ñòîïToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñòàðòToolStripMenuItem
			// 
			this->ñòàðòToolStripMenuItem->Name = L"ñòàðòToolStripMenuItem";
			this->ñòàðòToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->ñòàðòToolStripMenuItem->Text = L"Ñòàðò";
			this->ñòàðòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòàðòToolStripMenuItem_Click);
			// 
			// ñòîïToolStripMenuItem
			// 
			this->ñòîïToolStripMenuItem->Name = L"ñòîïToolStripMenuItem";
			this->ñòîïToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->ñòîïToolStripMenuItem->Text = L"Ñòîï";
			this->ñòîïToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòîïToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(745, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cd = ";
			// 
			// textBoxCd
			// 
			this->textBoxCd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxCd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCd->Location = System::Drawing::Point(819, 27);
			this->textBoxCd->Name = L"textBoxCd";
			this->textBoxCd->Size = System::Drawing::Size(82, 27);
			this->textBoxCd->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(157, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"t max  = ";
			// 
			// textBoxtmax
			// 
			this->textBoxtmax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxtmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxtmax->Location = System::Drawing::Point(265, 26);
			this->textBoxtmax->Name = L"textBoxtmax";
			this->textBoxtmax->Size = System::Drawing::Size(88, 27);
			this->textBoxtmax->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"dt  = ";
			// 
			// textBoxdt
			// 
			this->textBoxdt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxdt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxdt->Location = System::Drawing::Point(79, 27);
			this->textBoxdt->Name = L"textBoxdt";
			this->textBoxdt->Size = System::Drawing::Size(72, 27);
			this->textBoxdt->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(561, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Vo  = ";
			// 
			// textBoxV0
			// 
			this->textBoxV0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxV0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV0->Location = System::Drawing::Point(637, 27);
			this->textBoxV0->Name = L"textBoxV0";
			this->textBoxV0->Size = System::Drawing::Size(93, 27);
			this->textBoxV0->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(363, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Xo  = ";
			// 
			// textBoxX0
			// 
			this->textBoxX0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxX0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxX0->Location = System::Drawing::Point(439, 25);
			this->textBoxX0->Name = L"textBoxX0";
			this->textBoxX0->Size = System::Drawing::Size(92, 27);
			this->textBoxX0->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1086, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"h = ";
			// 
			// textBoxh
			// 
			this->textBoxh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxh->Location = System::Drawing::Point(1141, 27);
			this->textBoxh->Name = L"textBoxh";
			this->textBoxh->Size = System::Drawing::Size(148, 27);
			this->textBoxh->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(932, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"R = ";
			// 
			// textBoxR
			// 
			this->textBoxR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxR->Location = System::Drawing::Point(984, 27);
			this->textBoxR->Name = L"textBoxR";
			this->textBoxR->Size = System::Drawing::Size(76, 27);
			this->textBoxR->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(27, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 25);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Re 1 =";
			// 
			// textBoxRe1
			// 
			this->textBoxRe1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe1->Location = System::Drawing::Point(108, 3);
			this->textBoxRe1->Name = L"textBoxRe1";
			this->textBoxRe1->Size = System::Drawing::Size(99, 27);
			this->textBoxRe1->TabIndex = 17;
			// 
			// chartEk
			// 
			chartArea14->Name = L"ChartArea1";
			this->chartEk->ChartAreas->Add(chartArea14);
			legend14->Enabled = false;
			legend14->Name = L"Legend1";
			this->chartEk->Legends->Add(legend14);
			this->chartEk->Location = System::Drawing::Point(12, 21);
			this->chartEk->Name = L"chartEk";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Color = System::Drawing::SystemColors::MenuHighlight;
			series14->Legend = L"Legend1";
			series14->Name = L"Series1";
			series14->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series14->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartEk->Series->Add(series14);
			this->chartEk->Size = System::Drawing::Size(552, 293);
			this->chartEk->TabIndex = 18;
			this->chartEk->Text = L"chart1";
			title11->Name = L"Title1";
			title11->Text = L"Êèíåòè÷åñêàÿ ýíåðãèÿ";
			this->chartEk->Titles->Add(title11);
			// 
			// chartEp
			// 
			chartArea15->Name = L"ChartArea1";
			this->chartEp->ChartAreas->Add(chartArea15);
			legend15->Enabled = false;
			legend15->Name = L"Legend1";
			this->chartEp->Legends->Add(legend15);
			this->chartEp->Location = System::Drawing::Point(12, 323);
			this->chartEp->Name = L"chartEp";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series15->Color = System::Drawing::SystemColors::MenuHighlight;
			series15->Legend = L"Legend1";
			series15->Name = L"Series1";
			series15->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series15->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartEp->Series->Add(series15);
			this->chartEp->Size = System::Drawing::Size(552, 302);
			this->chartEp->TabIndex = 19;
			this->chartEp->Text = L"chart1";
			title12->Name = L"Title1";
			title12->Text = L"Ïîòåíöèàëüíàÿ ýíåðãèÿ";
			this->chartEp->Titles->Add(title12);
			// 
			// chartEmex
			// 
			chartArea16->Name = L"ChartArea1";
			this->chartEmex->ChartAreas->Add(chartArea16);
			legend16->Enabled = false;
			legend16->Name = L"Legend1";
			this->chartEmex->Legends->Add(legend16);
			this->chartEmex->Location = System::Drawing::Point(12, 631);
			this->chartEmex->Name = L"chartEmex";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series16->Color = System::Drawing::SystemColors::MenuHighlight;
			series16->Legend = L"Legend1";
			series16->Name = L"Series1";
			series16->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series16->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartEmex->Series->Add(series16);
			this->chartEmex->Size = System::Drawing::Size(552, 295);
			this->chartEmex->TabIndex = 20;
			this->chartEmex->Text = L"chart1";
			title13->Name = L"Title1";
			title13->Text = L"Ïîëíàÿ ýíåðãèÿ";
			this->chartEmex->Titles->Add(title13);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(235, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 25);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Re 2 =";
			// 
			// textBoxRe2
			// 
			this->textBoxRe2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe2->Location = System::Drawing::Point(316, 3);
			this->textBoxRe2->Name = L"textBoxRe2";
			this->textBoxRe2->Size = System::Drawing::Size(100, 27);
			this->textBoxRe2->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(444, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 25);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Re 3 =";
			// 
			// textBoxRe3
			// 
			this->textBoxRe3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe3->Location = System::Drawing::Point(525, 3);
			this->textBoxRe3->Name = L"textBoxRe3";
			this->textBoxRe3->Size = System::Drawing::Size(100, 27);
			this->textBoxRe3->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(652, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Re 4 =";
			// 
			// textBoxRe4
			// 
			this->textBoxRe4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe4->Location = System::Drawing::Point(733, 3);
			this->textBoxRe4->Name = L"textBoxRe4";
			this->textBoxRe4->Size = System::Drawing::Size(100, 27);
			this->textBoxRe4->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(862, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 25);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Re 5 =";
			// 
			// textBoxRe5
			// 
			this->textBoxRe5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe5->Location = System::Drawing::Point(943, 3);
			this->textBoxRe5->Name = L"textBoxRe5";
			this->textBoxRe5->Size = System::Drawing::Size(100, 27);
			this->textBoxRe5->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label13->Location = System::Drawing::Point(1069, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 25);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Re 6 =";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// textBoxRe6
			// 
			this->textBoxRe6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe6->Location = System::Drawing::Point(1150, 3);
			this->textBoxRe6->Name = L"textBoxRe6";
			this->textBoxRe6->Size = System::Drawing::Size(100, 27);
			this->textBoxRe6->TabIndex = 30;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(21, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(81, 25);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Re 7 = ";
			// 
			// textBoxRe7
			// 
			this->textBoxRe7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe7->Location = System::Drawing::Point(108, 60);
			this->textBoxRe7->Name = L"textBoxRe7";
			this->textBoxRe7->Size = System::Drawing::Size(99, 27);
			this->textBoxRe7->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(850, 57);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(87, 25);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Re 11 =";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(235, 57);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 25);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Re 8 =";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(444, 57);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 25);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Re 9 =";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(640, 57);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 25);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Re 10 =";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(1057, 57);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 25);
			this->label19->TabIndex = 36;
			this->label19->Text = L"Re 12 =";
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(432, 114);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(87, 25);
			this->label20->TabIndex = 37;
			this->label20->Text = L"Re 15 =";
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(9, 114);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 25);
			this->label21->TabIndex = 37;
			this->label21->Text = L"Re 13 = ";
			// 
			// label22
			// 
			this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(223, 114);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(87, 25);
			this->label22->TabIndex = 38;
			this->label22->Text = L"Re 14 =";
			// 
			// textBoxRe8
			// 
			this->textBoxRe8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe8->Location = System::Drawing::Point(316, 60);
			this->textBoxRe8->Name = L"textBoxRe8";
			this->textBoxRe8->Size = System::Drawing::Size(100, 27);
			this->textBoxRe8->TabIndex = 39;
			// 
			// textBoxRe9
			// 
			this->textBoxRe9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe9->Location = System::Drawing::Point(525, 60);
			this->textBoxRe9->Name = L"textBoxRe9";
			this->textBoxRe9->Size = System::Drawing::Size(100, 27);
			this->textBoxRe9->TabIndex = 40;
			// 
			// textBoxRe10
			// 
			this->textBoxRe10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe10->Location = System::Drawing::Point(733, 60);
			this->textBoxRe10->Name = L"textBoxRe10";
			this->textBoxRe10->Size = System::Drawing::Size(100, 27);
			this->textBoxRe10->TabIndex = 41;
			// 
			// textBoxRe11
			// 
			this->textBoxRe11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe11->Location = System::Drawing::Point(943, 60);
			this->textBoxRe11->Name = L"textBoxRe11";
			this->textBoxRe11->Size = System::Drawing::Size(100, 27);
			this->textBoxRe11->TabIndex = 42;
			// 
			// textBoxRe12
			// 
			this->textBoxRe12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe12->Location = System::Drawing::Point(1150, 60);
			this->textBoxRe12->Name = L"textBoxRe12";
			this->textBoxRe12->Size = System::Drawing::Size(100, 27);
			this->textBoxRe12->TabIndex = 43;
			// 
			// textBoxRe13
			// 
			this->textBoxRe13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe13->Location = System::Drawing::Point(108, 117);
			this->textBoxRe13->Name = L"textBoxRe13";
			this->textBoxRe13->Size = System::Drawing::Size(99, 27);
			this->textBoxRe13->TabIndex = 44;
			// 
			// textBoxRe14
			// 
			this->textBoxRe14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe14->Location = System::Drawing::Point(316, 117);
			this->textBoxRe14->Name = L"textBoxRe14";
			this->textBoxRe14->Size = System::Drawing::Size(100, 27);
			this->textBoxRe14->TabIndex = 45;
			// 
			// textBoxRe15
			// 
			this->textBoxRe15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe15->Location = System::Drawing::Point(525, 117);
			this->textBoxRe15->Name = L"textBoxRe15";
			this->textBoxRe15->Size = System::Drawing::Size(100, 27);
			this->textBoxRe15->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(640, 114);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(87, 25);
			this->label23->TabIndex = 47;
			this->label23->Text = L"Re 16 =";
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(850, 114);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(87, 25);
			this->label24->TabIndex = 48;
			this->label24->Text = L"Re 17 =";
			// 
			// label25
			// 
			this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(1057, 114);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(87, 25);
			this->label25->TabIndex = 49;
			this->label25->Text = L"Re 18 =";
			// 
			// textBoxRe16
			// 
			this->textBoxRe16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe16->Location = System::Drawing::Point(733, 117);
			this->textBoxRe16->Name = L"textBoxRe16";
			this->textBoxRe16->Size = System::Drawing::Size(100, 27);
			this->textBoxRe16->TabIndex = 50;
			// 
			// textBoxRe17
			// 
			this->textBoxRe17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe17->Location = System::Drawing::Point(943, 117);
			this->textBoxRe17->Name = L"textBoxRe17";
			this->textBoxRe17->Size = System::Drawing::Size(100, 27);
			this->textBoxRe17->TabIndex = 51;
			// 
			// textBoxRe18
			// 
			this->textBoxRe18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRe18->Location = System::Drawing::Point(1150, 117);
			this->textBoxRe18->Name = L"textBoxRe18";
			this->textBoxRe18->Size = System::Drawing::Size(100, 27);
			this->textBoxRe18->TabIndex = 52;
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleName = L"";
			this->groupBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 762);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1321, 217);
			this->groupBox1->TabIndex = 53;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"×èñëà Ðåéíîëüäñà äî 16 000ì";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 12;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				103)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				101)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				102)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				104)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				101)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				115)));
			this->tableLayoutPanel1->Controls->Add(this->label9, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe18, 11, 2);
			this->tableLayoutPanel1->Controls->Add(this->label21, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label25, 10, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe17, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe5, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe16, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->label24, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->label12, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe4, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label23, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe3, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe15, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->label10, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label20, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe14, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label22, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe13, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe12, 11, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe11, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe6, 11, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe10, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->label19, 10, 1);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe9, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe7, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label15, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label16, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label18, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->label17, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label13, 10, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxRe2, 3, 0);
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::AddColumns;
			this->tableLayoutPanel1->Location = System::Drawing::Point(24, 26);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 58)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1263, 172);
			this->tableLayoutPanel1->TabIndex = 54;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox2->Controls->Add(this->chartEk);
			this->groupBox2->Controls->Add(this->chartEp);
			this->groupBox2->Controls->Add(this->chartEmex);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(1400, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(576, 932);
			this->groupBox2->TabIndex = 54;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ãðàôèêè ýíåðãèé";
			// 
			// chartv
			// 
			chartArea17->Name = L"ChartArea1";
			this->chartv->ChartAreas->Add(chartArea17);
			legend17->Enabled = false;
			legend17->Name = L"Legend1";
			this->chartv->Legends->Add(legend17);
			this->chartv->Location = System::Drawing::Point(827, 52);
			this->chartv->Name = L"chartv";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series17->Color = System::Drawing::SystemColors::MenuHighlight;
			series17->Legend = L"Legend1";
			series17->Name = L"Series1";
			series17->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series17->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartv->Series->Add(series17);
			this->chartv->Size = System::Drawing::Size(552, 293);
			this->chartv->TabIndex = 21;
			this->chartv->Text = L"chart1";
			title14->Name = L"Title1";
			title14->Text = L"Ñêîðîñòü";
			this->chartv->Titles->Add(title14);
			// 
			// chartd
			// 
			chartArea18->Name = L"ChartArea1";
			this->chartd->ChartAreas->Add(chartArea18);
			legend18->Enabled = false;
			legend18->Name = L"Legend1";
			this->chartd->Legends->Add(legend18);
			this->chartd->Location = System::Drawing::Point(827, 354);
			this->chartd->Name = L"chartd";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series18->Color = System::Drawing::SystemColors::MenuHighlight;
			series18->Legend = L"Legend1";
			series18->Name = L"Series1";
			series18->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series18->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chartd->Series->Add(series18);
			this->chartd->Size = System::Drawing::Size(552, 293);
			this->chartd->TabIndex = 57;
			this->chartd->Text = L"chart2";
			title15->Name = L"Title1";
			title15->Text = L"Äèàìåòð";
			this->chartd->Titles->Add(title15);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBoxV0);
			this->groupBox3->Controls->Add(this->textBoxR);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBoxh);
			this->groupBox3->Controls->Add(this->textBoxdt);
			this->groupBox3->Controls->Add(this->textBoxCd);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBoxtmax);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBoxX0);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(12, 662);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1326, 84);
			this->groupBox3->TabIndex = 58;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ïàðàìåòðû";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->chartd);
			this->Controls->Add(this->chartv);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartEmex))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartd))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ñòàðòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñòîïToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		   int N;
		   double angle, xsh, ysh, g, Cd, mH2, n, pi, P0, T0, a, M, R, yMK, St, tmax, dt, x0, v0;
		   double Ek, Ep, Emex;
		   bool stop;
		   double* v;
		   double* x;
		   double* radius;
		   double f(double x, double v);
		   double pVozd(double x);
		   void RungeKutta();
		   void Default();




};
}
