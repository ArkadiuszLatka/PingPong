//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *ball;
        TImage *paddleLeft;
        TImage *paddleRight;
        TTimer *Timer_ball;
        TTimer *paddleLeftUp;
        TTimer *paddleLeftDown;
        TTimer *paddleRightUp;
        TTimer *paddleRightDown;
        TButton *winner1;
        TButton *winner2;
        TButton *scoreTable;
        TLabel *info1;
        TButton *nextRound;
        TButton *newGame;
        TButton *Button1;
        void __fastcall Timer_ballTimer(TObject *Sender);
        void __fastcall paddleLeftUpTimerUp(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall paddleLeftDownTimer(TObject *Sender);
        void __fastcall paddleRightUpTimer(TObject *Sender);
        void __fastcall paddleRightDownTimer(TObject *Sender);
        void __fastcall nextRoundClick(TObject *Sender);
        void __fastcall newGameClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
