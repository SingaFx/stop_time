//---------------------------------------------------------------------------

#ifndef tmuH
#define tmuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TEdit *Edit1;
        TUpDown *UpDown1;
        TLabel *Label2;
        TEdit *Edit2;
        TUpDown *UpDown2;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TTimer *Timer1;
        TTimer *Timer2;
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall UpDown1Changing(TObject *Sender,
          bool &AllowChange);
        void __fastcall UpDown2Changing(TObject *Sender,
          bool &AllowChange);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        String __fastcall StringWithoutSpace(String source);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
