//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "tmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
SYSTEMTIME SystemTime;
unsigned long Count;
unsigned long KoeffUm;
unsigned long KoeffDel;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 if (BitBtn2->Caption=="Полная остановка времени") {
  GetLocalTime(&SystemTime);
  BitBtn2->Caption="Запуск времени";
  Timer1->Enabled=true;
 } else {
  BitBtn2->Caption="Полная остановка времени";
  Timer1->Enabled=false;
  SetLocalTime(&SystemTime);
 }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 SetLocalTime(&SystemTime);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 if (BitBtn1->Caption=="Ход с коэффициентом") {
  UpDown1->Enabled=false;
  UpDown2->Enabled=false;
  GetLocalTime(&SystemTime);
  BitBtn1->Caption="Нормальный ход";
  Count=0;
  if (StrToInt(StringWithoutSpace(Edit1->Text))==1){
   KoeffDel=(long)(StrToInt(StringWithoutSpace(Edit2->Text))/50);
   KoeffUm=1;
   Timer2->Interval=1;
  }
  else if (StrToInt(StringWithoutSpace(Edit2->Text))==1) {
   KoeffDel=1;
   KoeffUm=StrToInt(StringWithoutSpace(Edit1->Text));
   Timer2->Interval=1000;
  }
  Timer2->Enabled=true;
 } else {
  BitBtn1->Caption="Ход с коэффициентом";
  Timer2->Enabled=false;
  Timer1->Enabled=false;
  UpDown1->Enabled=true;
  UpDown2->Enabled=true;
  SetLocalTime(&SystemTime);
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
 if (KoeffDel>1) //Если занимаемся делением
  {
   Count++;
   if (Count==KoeffDel)
    {
     Count=0;
     if (Timer1->Enabled)
      {
       Timer1->Enabled=false;
       SetLocalTime(&SystemTime);
      }
     else
      {
       GetLocalTime(&SystemTime);
       Timer1->Enabled=true;
      }
    }
   }
  else //Иначе занимаемся умножением
   {
     GetLocalTime(&SystemTime);
     //---------Миллисекунды
     SystemTime.wMilliseconds+=KoeffUm;
     if (SystemTime.wMilliseconds>1000)
      {
       while (SystemTime.wMilliseconds>1000)
        {
         SystemTime.wMilliseconds-=1000;
         SystemTime.wSecond+=1;
        }
       //---------Cекунды
       if (SystemTime.wSecond>59)
        {
         while (SystemTime.wMilliseconds>1000)
          {
           SystemTime.wSecond-=59;
           SystemTime.wMinute+=1;
          }

        }
      }
     SetLocalTime(&SystemTime);
    }
}
//---------------------------------------------------------------------------
String __fastcall TForm1::StringWithoutSpace(String source)
{
  String tmp;
  String dest;

  tmp=source;
  dest="";
  
  for (int i=1; i<tmp.Length()+1; i++)
   if (tmp[i]>0x29 &&  tmp[i]<0x3A)
     dest+=tmp[i];

  return dest;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::UpDown1Changing(TObject *Sender, bool &AllowChange)
{
 Edit2->Text='1';         
}
//---------------------------------------------------------------------------
void __fastcall TForm1::UpDown2Changing(TObject *Sender, bool &AllowChange)
{
 Edit1->Text='1';         
}
//---------------------------------------------------------------------------

