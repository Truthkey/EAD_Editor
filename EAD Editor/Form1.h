#pragma once


namespace EADEditor {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

			 unsigned char red;
			 unsigned char blue;
			 unsigned char green;
			 unsigned char alpha;
			 int CLR;
			 int amount;
			 String ^EAD_file;
	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(91, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load EAD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(142, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 39);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Save EAD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"RGBA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Stick\r\nSize";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(53, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(162, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(63, 90);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(107, 90);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(151, 90);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(38, 20);
			this->textBox7->TabIndex = 2;
			this->textBox7->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(221, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 48);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(193, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 39);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Current for all";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(12, 31);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(73, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(249, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 118);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"EAD Editor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {				 
				 String ^source = "";
				 OpenFileDialog ^f1 = gcnew OpenFileDialog();
				 String ^anim = "";
				 int offset = 0;
				 int noffset = 0;
				 amount = 0;

				 if(f1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 button2->Enabled = true;
					 button2->Enabled = true;
					 numericUpDown1->Enabled = true;
					 EAD_file = f1->FileName;
					 FileStream ^f = gcnew FileStream(EAD_file,FileMode::Open);
					 BinaryReader ^r = gcnew BinaryReader(f);
					 r->BaseStream->Seek(4,SeekOrigin::Begin);
					 amount = r->ReadByte();
					 numericUpDown1->Maximum = amount;

					 //Read source file.
					 r->BaseStream->Seek(0x10,SeekOrigin::Begin);
					 offset = r->ReadUInt32();
					 r->BaseStream->Seek(0x14,SeekOrigin::Begin);
					 for(short b=0;b<=2;++b)
					 {
						 anim += r->ReadChar();
					 }
					 r->BaseStream->Seek(offset+4,SeekOrigin::Begin);
					 noffset = r->ReadUInt32();
					 r->BaseStream->Seek(noffset,SeekOrigin::Begin);

					 for(int a=0;;++a)
					 {
						 source += r->ReadChar();
						 r->BaseStream->Seek(-1,SeekOrigin::Current);
						 if(r->ReadChar() == 0)
						 {
							 break;
						 }
					 }
					 label3->Text = source;
					 label4->Text = "Animation: " + anim;

					 r->BaseStream->Seek(offset+0x22,SeekOrigin::Begin);
					 textBox5->Text = r->ReadUInt16().ToString();
					 textBox6->Text = r->ReadUInt16().ToString();
					 textBox7->Text = r->ReadUInt16().ToString();
					 textBox1->Text = r->ReadByte().ToString();
					 textBox3->Text = r->ReadByte().ToString();
					 textBox2->Text = r->ReadByte().ToString();
					 textBox4->Text = r->ReadByte().ToString();

					 r->Close();
					 f->Close();
				 }
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int offset = 0;
			 String ^anim = "";
			 int num = (int)numericUpDown1->Value;
			 FileStream ^f = gcnew FileStream(EAD_file,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(f);
			 r->BaseStream->Seek(0x10*num,SeekOrigin::Begin);
			 offset = r->ReadUInt32();
			 r->BaseStream->Seek((0x10*num)+4,SeekOrigin::Begin);

			 for(short b=0;b<=2;++b)
			 {
				 anim += r->ReadChar();
			 }
			 label4->Text = "Animation: " + anim;

			 r->BaseStream->Seek(offset+0x22,SeekOrigin::Begin);
			 textBox5->Text = r->ReadUInt16().ToString();
			 textBox6->Text = r->ReadUInt16().ToString();
			 textBox7->Text = r->ReadUInt16().ToString();
			 textBox1->Text = r->ReadByte().ToString();
			 textBox3->Text = r->ReadByte().ToString();
			 textBox2->Text = r->ReadByte().ToString();
			 textBox4->Text = r->ReadByte().ToString();

			 f->Close();
			 r->Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int num = (int)numericUpDown1->Value;
			 int offset = (0x10*num);
			 int noffset = 0;
			 short size1 = 0;short size2 = 0;short size3 = 0;
			 //Get sizes.
			 size1 = size1.Parse(textBox5->Text);
			 size2 = size2.Parse(textBox6->Text);
			 size3 = size3.Parse(textBox7->Text);
			 //Get colors.
			 red = red.Parse(textBox1->Text);
			 green = green.Parse(textBox2->Text);
			 blue = blue.Parse(textBox3->Text);
			 alpha = alpha.Parse(textBox4->Text);

			 FileStream ^f = gcnew FileStream(EAD_file,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(f);
			 BinaryWriter ^w = gcnew BinaryWriter(f);

			 r->BaseStream->Seek(offset,SeekOrigin::Begin);
			 noffset = r->ReadUInt32();
			 r->BaseStream->Seek(noffset+0x22,SeekOrigin::Begin);
			 w->Write(size1);
			 w->Write(size2);
			 w->Write(size3);
			 w->Write(red);
			 w->Write(blue);
			 w->Write(green);
			 w->Write(alpha);

			 f->Close();
			 r->Close();
			 w->Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int offset = 0;
			 int noffset = 0;
			 short size1 = 0;short size2 = 0;short size3 = 0;
			 //Get sizes.
			 size1 = size1.Parse(textBox5->Text);
			 size2 = size2.Parse(textBox6->Text);
			 size3 = size3.Parse(textBox7->Text);
			 //Get colors.
			 red = red.Parse(textBox1->Text);
			 green = green.Parse(textBox2->Text);
			 blue = blue.Parse(textBox3->Text);
			 alpha = alpha.Parse(textBox4->Text);

			 FileStream ^f = gcnew FileStream(EAD_file,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(f);
			 BinaryWriter ^w = gcnew BinaryWriter(f);

			 for(int c=1; c<=amount;)
			 {
				 r->BaseStream->Seek(0x10*c,SeekOrigin::Begin);
				 noffset = r->ReadUInt32();
				 r->BaseStream->Seek(noffset+0x22,SeekOrigin::Begin);
				 w->Write(size1);
				 w->Write(size2);
				 w->Write(size3);
				 w->Write(red);
				 w->Write(blue);
				 w->Write(green);
				 w->Write(alpha);
				 ++c;
			 }

			 f->Close();
			 r->Close();
			 w->Close();

		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 red = red.Parse(textBox1->Text);
			 green = green.Parse(textBox2->Text);
			 blue = blue.Parse(textBox3->Text);
			 alpha = alpha.Parse(textBox4->Text);
			 CLR = (alpha*0x1000000)+(red*0x10000)+(green*0x100)+(blue);
			 pictureBox1->BackColor = Color::FromArgb(CLR);
		 }
};
}

