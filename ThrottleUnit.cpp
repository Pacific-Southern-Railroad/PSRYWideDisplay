//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ThrottleUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TThrottleForm *ThrottleForm;
//---------------------------------------------------------------------------
__fastcall TThrottleForm::TThrottleForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TThrottleForm::FormActivate(TObject *Sender)
{
//Load cab signals

	LoadCabSignals("ClearSignal.bmp");   		//0
	LoadCabSignals("ApproachMediumSignal.bmp"); //1
	LoadCabSignals("ApproachSignal.bmp");    	//2
	LoadCabSignals("StopSignal.bmp");    		//3
	LoadCabSignals("PRRClear.bmp");         	//4
	LoadCabSignals("PRRApproachMedium.bmp");    //5
	LoadCabSignals("PRRApproach.bmp");          //6
	LoadCabSignals("PRRRestricting.bmp");       //7
	CabSignals->Draw(CabSignal->Canvas, 0, 0, 3, true);

}
//---------------------------------------------------------------------------
void TThrottleForm::LoadCabSignals(String Name)
{
	CabSignals->FileLoad(rtBitmap,("BlackScreenTiles\\" + Name), clWhite);
}
//------------------------------------------------------------------------------
