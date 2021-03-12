//---------------------------------------------------------------------------

#ifndef ClientUnitH
#define ClientUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//#include <ScktComp.hpp>
#include <ImgList.hpp>
#include <Graphics.hpp>
#include <System.ImageList.hpp>
#include <System.Win.ScktComp.hpp>
//---------------------------------------------------------------------------
const int HtWd = 16;

class TForm2 : public TForm
{
__published:	// IDE-managed Components
   TPanel *Panel1;
   TButton *Hyde;
   TButton *LathamDell;
   TButton *NassauBank;
   TImage *ImageHydeYardPort;
   TImage *ImageLathamKrulish;
   TImage *ImageNassauCliff;
   TImageList *Tiles;
   TClientSocket *ClientSocket;
   TPanel *Panel3;
   TEdit *Edit1;
   TButton *Connect;
   TMemo *ReceiveBuffer;
	TButton *Disconnect;
   TEdit *ErrorBox;
   TLabel *Label1;
   TEdit *Breakers;
   TLabel *Label2;
   TLabel *Label3;
   TEdit *Train;
   TLabel *Label4;
	TEdit *PSTime;
	TMemo *IPAddress;
	TTimer *Watchdog;
	TEdit *Disconnects;
	TLabel *Label5;
	TEdit *sCol;
	TEdit *sRow;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
   void __fastcall FormActivate(TObject *Sender);
   void __fastcall HydeClick(TObject *Sender);
   void __fastcall LathamDellClick(TObject *Sender);
   void __fastcall NassauBankClick(TObject *Sender);
   void __fastcall ClientSocketRead(TObject *Sender,
          TCustomWinSocket *Socket);
   void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
   void __fastcall ConnectClick(TObject *Sender);
   void __fastcall ClientSocketConnect(TObject *Sender,
          TCustomWinSocket *Socket);
   void __fastcall DisconnectClick(TObject *Sender);
   void __fastcall TrainClick(TObject *Sender);
   void __fastcall ImageHydeYardPortMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
   void __fastcall ImageLathamKrulishMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
   void __fastcall ImageNassauCliffMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
	void __fastcall WatchdogTimer(TObject *Sender);
	void __fastcall ImageNassauCliffMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall ImageLathamKrulishMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
	void __fastcall ImageHydeYardPortMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);

private:	// User declarations

   void LoadTile(String Name);
   void Process(String Message);
   void WriteServer(String Type, String ImageName, int Col, int Row, String Train);

   String Message, Frag;
   TImage * pImage;
   int Col, Row, Tile;
   int N, Errors;
   bool WatchdogSet, NoInitialMessage;
   int WatchdogDisconnects, ReconnectAttempts;

   //Origins for track diagrams to correct for offset of tile arrays



public:		// User declarations
   __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
