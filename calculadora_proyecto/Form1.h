#pragma once
#include "segundoForm.h"
#include <string>
#include <iostream>
// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"

struct Pila
{
    int numero[20];
    int tope;
    void iniciar() {
        tope = -1;
    }
    int vacia() {
        if (tope == -1) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int llena() {
        if (tope == 20) {
            return 1;
        }
        else
            return 0;
    }
    void insertar(int %resultado) {
        if (llena() == 1) {
            //cout << "Error, Pila llena\n";
        }
        else {
            tope++;
            numero[tope] = resultado;
        }
    }

    void eliminar() {
        if (vacia() == 0) {
            //cout << "La pila esta vacia";
        }
        else {
            //cout << numero[tope];
            tope = tope - 1;
        }
    }

    void mostrar() {
        if (vacia() == 1) {
            //cout << "Pila vacia!" << endl;
        }
        else {
            for (int i = 0; i < tope + 1; i++) {
                //cout << numero[i];
            }
        }
    }

};
Pila p1;


int numero1;
int numero2;
int operador;

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace std;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::Label^ titulo;
  protected:

  private: System::Windows::Forms::Button^ boton_mas;
  private: System::Windows::Forms::Button^ boton_menos;
  private: System::Windows::Forms::Button^ boton_dividir;



  private: System::Windows::Forms::Button^ boton_por;
  private: System::Windows::Forms::Button^ boton_igual;
  private: System::Windows::Forms::TextBox^ panel;
  private: System::Windows::Forms::Button^ memoria;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label7;





  protected:





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->titulo = (gcnew System::Windows::Forms::Label());
        this->boton_mas = (gcnew System::Windows::Forms::Button());
        this->boton_menos = (gcnew System::Windows::Forms::Button());
        this->boton_dividir = (gcnew System::Windows::Forms::Button());
        this->boton_por = (gcnew System::Windows::Forms::Button());
        this->boton_igual = (gcnew System::Windows::Forms::Button());
        this->panel = (gcnew System::Windows::Forms::TextBox());
        this->memoria = (gcnew System::Windows::Forms::Button());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // titulo
        // 
        this->titulo->AutoSize = true;
        this->titulo->Font = (gcnew System::Drawing::Font(L"Unispace", 50.24999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->titulo->Location = System::Drawing::Point(197, 9);
        this->titulo->Name = L"titulo";
        this->titulo->Size = System::Drawing::Size(485, 80);
        this->titulo->TabIndex = 0;
        this->titulo->Text = L"CALCULADORA";
        this->titulo->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // boton_mas
        // 
        this->boton_mas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->boton_mas->Location = System::Drawing::Point(12, 201);
        this->boton_mas->Name = L"boton_mas";
        this->boton_mas->Size = System::Drawing::Size(193, 96);
        this->boton_mas->TabIndex = 1;
        this->boton_mas->Text = L"+";
        this->boton_mas->UseVisualStyleBackColor = true;
        this->boton_mas->Click += gcnew System::EventHandler(this, &Form1::boton_mas_Click);
        // 
        // boton_menos
        // 
        this->boton_menos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->boton_menos->Location = System::Drawing::Point(211, 201);
        this->boton_menos->Name = L"boton_menos";
        this->boton_menos->Size = System::Drawing::Size(193, 96);
        this->boton_menos->TabIndex = 2;
        this->boton_menos->Text = L"-";
        this->boton_menos->UseVisualStyleBackColor = true;
        this->boton_menos->Click += gcnew System::EventHandler(this, &Form1::boton_menos_Click);
        // 
        // boton_dividir
        // 
        this->boton_dividir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->boton_dividir->Location = System::Drawing::Point(211, 303);
        this->boton_dividir->Name = L"boton_dividir";
        this->boton_dividir->Size = System::Drawing::Size(193, 96);
        this->boton_dividir->TabIndex = 3;
        this->boton_dividir->Text = L"/";
        this->boton_dividir->UseVisualStyleBackColor = true;
        this->boton_dividir->Click += gcnew System::EventHandler(this, &Form1::boton_dividir_Click);
        // 
        // boton_por
        // 
        this->boton_por->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->boton_por->Location = System::Drawing::Point(12, 303);
        this->boton_por->Name = L"boton_por";
        this->boton_por->Size = System::Drawing::Size(193, 96);
        this->boton_por->TabIndex = 4;
        this->boton_por->Text = L"*";
        this->boton_por->UseVisualStyleBackColor = true;
        this->boton_por->Click += gcnew System::EventHandler(this, &Form1::boton_por_Click);
        // 
        // boton_igual
        // 
        this->boton_igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->boton_igual->Location = System::Drawing::Point(449, 201);
        this->boton_igual->Name = L"boton_igual";
        this->boton_igual->Size = System::Drawing::Size(287, 198);
        this->boton_igual->TabIndex = 5;
        this->boton_igual->Text = L"=";
        this->boton_igual->UseVisualStyleBackColor = true;
        this->boton_igual->Click += gcnew System::EventHandler(this, &Form1::boton_igual_Click);
        // 
        // panel
        // 
        this->panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->panel->Location = System::Drawing::Point(12, 119);
        this->panel->Multiline = true;
        this->panel->Name = L"panel";
        this->panel->Size = System::Drawing::Size(724, 64);
        this->panel->TabIndex = 6;
        this->panel->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        this->panel->TextChanged += gcnew System::EventHandler(this, &Form1::panel_TextChanged);
        // 
        // memoria
        // 
        this->memoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->memoria->Location = System::Drawing::Point(12, 427);
        this->memoria->Name = L"memoria";
        this->memoria->Size = System::Drawing::Size(392, 88);
        this->memoria->TabIndex = 7;
        this->memoria->Text = L"Memoria";
        this->memoria->UseVisualStyleBackColor = true;
        this->memoria->Click += gcnew System::EventHandler(this, &Form1::memoria_Click);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::DarkGray;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(812, 43);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(0, 46);
        this->label1->TabIndex = 8;
        this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
        // 
        // button1
        // 
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(449, 427);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(287, 88);
        this->button1->TabIndex = 9;
        this->button1->Text = L"C";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::DarkGray;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->Location = System::Drawing::Point(812, 109);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(0, 46);
        this->label2->TabIndex = 10;
        this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->BackColor = System::Drawing::Color::DarkGray;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(812, 173);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(0, 46);
        this->label3->TabIndex = 11;
        this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->BackColor = System::Drawing::Color::DarkGray;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(812, 236);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(0, 46);
        this->label4->TabIndex = 12;
        this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->BackColor = System::Drawing::Color::DarkGray;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(812, 303);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(0, 46);
        this->label5->TabIndex = 13;
        this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->BackColor = System::Drawing::Color::DarkGray;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->Location = System::Drawing::Point(812, 372);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(0, 46);
        this->label6->TabIndex = 14;
        this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->BackColor = System::Drawing::Color::DarkGray;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label7->Location = System::Drawing::Point(812, 444);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(0, 46);
        this->label7->TabIndex = 15;
        this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(255)));
        this->ClientSize = System::Drawing::Size(974, 543);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->label5);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->memoria);
        this->Controls->Add(this->panel);
        this->Controls->Add(this->boton_igual);
        this->Controls->Add(this->boton_por);
        this->Controls->Add(this->boton_dividir);
        this->Controls->Add(this->boton_menos);
        this->Controls->Add(this->boton_mas);
        this->Controls->Add(this->titulo);
        this->Name = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion



  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
      MessageBox::Show(L"HOLA MUNDO");
  }
  private: System::Void boton_igual_Click(System::Object^ sender, System::EventArgs^ e) {
      numero2 = System::Convert::ToInt32(this->panel->Text);
      if (operador == 1) {
          int resultado;
          resultado = numero1 + numero2;
          p1.insertar(resultado);
          System::String^ str = System::Convert::ToString(resultado);
          panel->Text = str;
          
          
      }
      if (operador == 2) {
          int resultado;
          resultado = numero1 - numero2;
          p1.insertar(resultado);
          System::String^ str = System::Convert::ToString(resultado);
          panel->Text = str;
      }
      if (operador == 3) {
          int resultado;
          resultado = numero1 * numero2;
          p1.insertar(resultado);
          System::String^ str = System::Convert::ToString(resultado);
          panel->Text = str;
      }
      if (operador == 4) {
          if (numero2 == 0) {
              panel->Text = "No se puede dividir entre 0.";
          }
          else {
              int resultado;
              resultado = numero1 / numero2;
              p1.insertar(resultado);
              System::String^ str = System::Convert::ToString(resultado);
              panel->Text = str;
          }
      }
      
}
private: System::Void boton_mas_Click(System::Object^ sender, System::EventArgs^ e) {
    
    numero1 = System::Convert::ToInt32(this->panel->Text);
    this->panel->Text = " ";
    operador = 1;
    
}
private: System::Void panel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void boton_menos_Click(System::Object^ sender, System::EventArgs^ e) {
    numero1 = System::Convert::ToInt32(this->panel->Text);
    this->panel->Text = " ";
    operador = 2;
}
private: System::Void boton_por_Click(System::Object^ sender, System::EventArgs^ e) {
    numero1 = System::Convert::ToInt32(this->panel->Text);
    this->panel->Text = " ";
    operador = 3;
}
private: System::Void boton_dividir_Click(System::Object^ sender, System::EventArgs^ e) {
    numero1 = System::Convert::ToInt32(this->panel->Text);
    this->panel->Text = " ";
    operador = 4;
}
private: System::Void memoria_Click(System::Object^ sender, System::EventArgs^ e) {
     //1
     System::String^ str1 = System::Convert::ToString(p1.numero[1]);
     label1->Text = str1;
     //2
     System::String^ str2 = System::Convert::ToString(p1.numero[2]);
     label2->Text = str2;
     //3
     System::String^ str3 = System::Convert::ToString(p1.numero[3]);
     label3->Text = str3;
     //4
     System::String^ str4 = System::Convert::ToString(p1.numero[4]);
     label4->Text = str4;
     //5
     System::String^ str5 = System::Convert::ToString(p1.numero[5]);
     label5->Text = str5;
     //6
     System::String^ str6 = System::Convert::ToString(p1.numero[6]);
     label6->Text = str6;
     //7
     System::String^ str7 = System::Convert::ToString(p1.numero[7]);
     label7->Text = str7;

}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    numero1 = 0;
    numero2 = 0;
    this->panel->Text = " ";
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

