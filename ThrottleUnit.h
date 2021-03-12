//---------------------------------------------------------------------------

#ifndef ThrottleUnitH
#define ThrottleUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TThrottleForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Train;
	TEdit *Loco;
	TEdit *Speed;
	TButton *ForwardBtn;
	TButton *ReverseBtn;
	TButton *FastBtn;
	TButton *SlowBtn;
	TButton *StopBtn;
	TButton *HornBtn;
	TButton *HeadlightBtn;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TImageList *CabSignals;
	TImage *CabSignal;
	void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
	void TThrottleForm::LoadCabSignals(String Name);

public:		// User declarations
	__fastcall TThrottleForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TThrottleForm *ThrottleForm;
//---------------------------------------------------------------------------
#endif
