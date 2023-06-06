#pragma once
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ optionsPanel;
	private: System::Windows::Forms::Panel^ menuPanel;
	private: System::Windows::Forms::Panel^ logoPanel;
	private: System::Windows::Forms::PictureBox^ logoPictureB;
	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Panel^ separationPanel;
	private: System::Windows::Forms::Panel^ mainPanel;
	private: System::Windows::Forms::Button^ mainButton;
	private: System::Windows::Forms::Button^ readBtn;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->optionsPanel = (gcnew System::Windows::Forms::Panel());
			this->menuPanel = (gcnew System::Windows::Forms::Panel());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->logoPictureB = (gcnew System::Windows::Forms::PictureBox());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->separationPanel = (gcnew System::Windows::Forms::Panel());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->mainButton = (gcnew System::Windows::Forms::Button());
			this->readBtn = (gcnew System::Windows::Forms::Button());
			this->menuPanel->SuspendLayout();
			this->logoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPictureB))->BeginInit();
			this->SuspendLayout();
			// 
			// optionsPanel
			// 
			this->optionsPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->optionsPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->optionsPanel->Location = System::Drawing::Point(0, 0);
			this->optionsPanel->Name = L"optionsPanel";
			this->optionsPanel->Size = System::Drawing::Size(960, 20);
			this->optionsPanel->TabIndex = 0;
			// 
			// menuPanel
			// 
			this->menuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->menuPanel->Controls->Add(this->readBtn);
			this->menuPanel->Controls->Add(this->mainButton);
			this->menuPanel->Controls->Add(this->logoPanel);
			this->menuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuPanel->Location = System::Drawing::Point(0, 20);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(220, 580);
			this->menuPanel->TabIndex = 1;
			// 
			// logoPanel
			// 
			this->logoPanel->Controls->Add(this->logoPictureB);
			this->logoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->logoPanel->Location = System::Drawing::Point(0, 0);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(220, 110);
			this->logoPanel->TabIndex = 0;
			// 
			// logoPictureB
			// 
			this->logoPictureB->Location = System::Drawing::Point(3, 6);
			this->logoPictureB->Name = L"logoPictureB";
			this->logoPictureB->Size = System::Drawing::Size(214, 94);
			this->logoPictureB->TabIndex = 0;
			this->logoPictureB->TabStop = false;
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(220, 20);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(740, 100);
			this->topPanel->TabIndex = 2;
			// 
			// separationPanel
			// 
			this->separationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->separationPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->separationPanel->Location = System::Drawing::Point(220, 120);
			this->separationPanel->Name = L"separationPanel";
			this->separationPanel->Size = System::Drawing::Size(740, 10);
			this->separationPanel->TabIndex = 3;
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainPanel->Location = System::Drawing::Point(220, 130);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(740, 470);
			this->mainPanel->TabIndex = 4;
			// 
			// mainButton
			// 
			this->mainButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mainButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->mainButton->FlatAppearance->BorderSize = 0;
			this->mainButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mainButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->mainButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->mainButton->Location = System::Drawing::Point(0, 110);
			this->mainButton->Name = L"mainButton";
			this->mainButton->Size = System::Drawing::Size(220, 60);
			this->mainButton->TabIndex = 1;
			this->mainButton->Text = L"Home";
			this->mainButton->UseVisualStyleBackColor = true;
			// 
			// readBtn
			// 
			this->readBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->readBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->readBtn->FlatAppearance->BorderSize = 0;
			this->readBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->readBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->readBtn->Location = System::Drawing::Point(0, 170);
			this->readBtn->Name = L"readBtn";
			this->readBtn->Size = System::Drawing::Size(220, 60);
			this->readBtn->TabIndex = 2;
			this->readBtn->Text = L"Consultas";
			this->readBtn->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 600);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->separationPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->menuPanel);
			this->Controls->Add(this->optionsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(960, 600);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuPanel->ResumeLayout(false);
			this->logoPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoPictureB))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
