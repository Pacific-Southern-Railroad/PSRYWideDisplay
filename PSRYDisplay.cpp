//---------------------------------------------------------------------------

#include <vcl.h>
#include <Jpeg.hpp>

#pragma hdrstop

#include "PSRYDisplay.h"
#include "ThrottleUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
//Load tile bitmaps

	LoadTile("blank.bmp");		//0
	LoadTile("crossingX.bmp");	//1
	LoadTile("trackH.bmp");		//2
	LoadTile("trackV.bmp");		//3
	LoadTile("blockHR.bmp");	//4
	LoadTile("blockHL.bmp");	//5
	LoadTile("diagonalDU.bmp");	//6
	LoadTile("diagonalUD.bmp");	//7
	LoadTile("angleDL.bmp");	//8
	LoadTile("angleDR.bmp");	//9
	LoadTile("angleUL.bmp");	//10
	LoadTile("angleUR.bmp");	//11
	LoadTile("angleVUR.bmp");	//12
	LoadTile("angleVUL.bmp");	//13
	LoadTile("angleVDR.bmp");	//14
	LoadTile("angleVDL.bmp");	//15
	LoadTile("hsignalR.bmp");	//16
	LoadTile("hsignalL.bmp");	//17
	LoadTile("dsignalR.bmp");	//18
	LoadTile("dsignalL.bmp");	//19
	LoadTile("switchMKR.bmp");	//20
	LoadTile("trackRHL.bmp");	//21
	LoadTile("trackRHR.bmp");	//22
	LoadTile("stopR.bmp");		//23
	LoadTile("buttonUP.bmp");  	//24
	LoadTile("buttonDN.bmp");  	//25
	LoadTile("hSwUW.bmp");		//26
	LoadTile("hSwUR.bmp");		//27
	LoadTile("hSwDW.bmp");		//28
	LoadTile("hSwDR.bmp");		//29
	LoadTile("blank.bmp");		//30
	LoadTile("trackYD.bmp");	//31
	LoadTile("trackRH.bmp");	//32
	LoadTile("trackRV.bmp");	//33
	LoadTile("blockRHR.bmp");	//34
	LoadTile("blockRHL.bmp");	//35
	LoadTile("diagonalRDU.bmp");	//36
	LoadTile("diagonalRUD.bmp");	//37
	LoadTile("angleRDL.bmp");	//38
	LoadTile("angleRDR.bmp");	//39
	LoadTile("angleRUL.bmp");	//40
	LoadTile("angleRUR.bmp");	//41
	LoadTile("angleRVUR.bmp");	//42
	LoadTile("angleRVUL.bmp");	//43
	LoadTile("angleRVDR.bmp"); 	//44
	LoadTile("angleRVDL.bmp");	//45
	LoadTile("hsignalRG.bmp");	//46
	LoadTile("hsignalLG.bmp");	//47
	LoadTile("dsignalRY.bmp");	//48
	LoadTile("dsignalLY.bmp");	//49
	LoadTile("trackGHL.bmp");	//50
	LoadTile("trackGHR.bmp");	//51
	LoadTile("trackYD.bmp");    //52
	LoadTile("blank.bmp");      //53
	LoadTile("blank.bmp");      //54
	LoadTile("blank.bmp");      //55
	LoadTile("hsignalRW.bmp");  //56
	LoadTile("hsignalLW.bmp");	//57
	LoadTile("dsignalRW.bmp");	//58
	LoadTile("dsignalLW.bmp");	//59
	LoadTile("blank.bmp");      //60
	LoadTile("trackRYD.bmp");   //61
	LoadTile("trackGH.bmp");	//62
	LoadTile("trackGV.bmp");	//63
	LoadTile("blockGHR.bmp");	//64
	LoadTile("blockGHL.bmp");	//65
	LoadTile("diagonalGDU.bmp");	//66
	LoadTile("diagonalGUD.bmp");	//67
	LoadTile("angleGDL.bmp");	//68
	LoadTile("angleGDR.bmp");	//69
	LoadTile("angleGUL.bmp");  	//70
	LoadTile("angleGUR.bmp");  	//71
	LoadTile("angleGVUR.bmp");	//72
	LoadTile("angleGVUL.bmp");	//73
	LoadTile("angleGVDR.bmp");	//74
	LoadTile("angleGVDL.bmp");	//75
	LoadTile("hsignalRC.bmp");	//76
	LoadTile("hsignalLC.bmp");	//77
	LoadTile("fleetL.bmp");		//78
	LoadTile("fleetR.bmp");		//79
	LoadTile("stopA.bmp");		//80
	LoadTile("stopL.bmp");		//81
	LoadTile("indicatorR.bmp");	//82
	LoadTile("indicatorG.bmp");	//83
	LoadTile("indicatorOut.bmp");	//84
	LoadTile("resetL.bmp");		//85
	LoadTile("resetR.bmp");		//86
	for(int i=0; i<4; i++)		//87-90
	{
		LoadTile("blank.bmp");
	}
	LoadTile("trackGYD.bmp");   //91

//Load diagram bitmaps

	ImageHydeYardPort->Picture->LoadFromFile("HydeYardPort2019.bmp");
	ImageHydeYardPort->Canvas->Font->Color = clRed;
	ImageHydeYardPort->Canvas->Font->Size = 8;

	ImageLathamKrulish->Picture->LoadFromFile("LathamKrulish2019.bmp");
	ImageLathamKrulish->Canvas->Font->Color = clRed;
	ImageLathamKrulish->Canvas->Font->Size = 8;

	ImageNassauCliff->Picture->LoadFromFile("NassauCliff2019.bmp");
	ImageNassauCliff->Canvas->Font->Color = clRed;
	ImageNassauCliff->Canvas->Font->Size = 8;

//Load IP address

    IPAddress->Lines->LoadFromFile("IP Address.txt");

	N = 0;
	Errors = WatchdogDisconnects = ReconnectAttempts = 0;
	Frag = "";
	Train->SetFocus();

//End of constructor
}
//---------------------------------------------------------------------------

void __fastcall TForm2::YardPortClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = true;
	ImageLathamKrulish->Visible = false;
	ImageNassauCliff->Visible = false;
	ImageHydeYardPort->Left = -1280;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::HydeClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = true;
	ImageLathamKrulish->Visible = false;
	ImageNassauCliff->Visible = false;
	ImageHydeYardPort->Left = 0;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::LathamDellClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = false;
	ImageLathamKrulish->Visible = true;
	ImageNassauCliff->Visible = false;
	ImageLathamKrulish->Left = 0;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ShoreKrulishClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = false;
	ImageLathamKrulish->Visible = true;
	ImageNassauCliff->Visible = false;
	ImageLathamKrulish->Left = -1280;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::NassauBankClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = false;
	ImageLathamKrulish->Visible = false;
	ImageNassauCliff->Visible = true;
	ImageNassauCliff->Left = 0;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CliffClick(TObject *Sender)
{
	ImageHydeYardPort->Visible = false;
	ImageLathamKrulish->Visible = false;
	ImageNassauCliff->Visible = true;
	ImageNassauCliff->Left = -1280;
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ClientSocketRead(TObject *Sender,
	  TCustomWinSocket *Socket)
{
	WatchdogSet = false;
	String Test;
	if(NoInitialMessage)
	{
		NoInitialMessage = false;

		ImageHydeYardPort->Picture->LoadFromFile("HydeYardPort2019.bmp");
		ImageHydeYardPort->Canvas->Font->Color = clRed;
		ImageHydeYardPort->Canvas->Font->Size = 8;

		ImageLathamKrulish->Picture->LoadFromFile("LathamKrulish2019.bmp");
		ImageLathamKrulish->Canvas->Font->Color = clRed;
		ImageLathamKrulish->Canvas->Font->Size = 8;

		ImageNassauCliff->Picture->LoadFromFile("NassauCliff2019.bmp");
		ImageNassauCliff->Canvas->Font->Color = clRed;
		ImageNassauCliff->Canvas->Font->Size = 8;
	}

	ReceiveBuffer->Lines->Text = Socket->ReceiveText();
	int C = ReceiveBuffer->Lines->Count;
	int i = 0;

	if(Frag != "")                      //if fragment left from last packet
	{
		String N = ReceiveBuffer->Lines->Strings[0];
		Message = Frag + N;              //add remainder of packet
		i = 1;
		Test = Message.SubString(40, 2);
		if(Test == "##")
			Process(Message);
		else
		{
			Message.Trim();            //get rid of spaces
			if(Message != "")
			Errors++;               //if some text still there
		}
	}
	for(i = 0; i < C; i++)
	{
		Message = ReceiveBuffer->Lines->Strings[i];
		Test = Message.SubString(40, 2);
		if(Test == "##")
		{
			Process(Message);
			Frag = "";
		}
		else
			Frag = Message;
	}
	ErrorBox->Text = Errors;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	ClientSocket->Active = false;
	IPAddress->Lines->SaveToFile("IP Address.txt");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConnectClick(TObject *Sender)
{
	NoInitialMessage = true;
	ClientSocket->Address = IPAddress->Lines->Text;
	ClientSocket->Active = true;
	Train->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::WatchdogTimer(TObject *Sender)
{
	if(WatchdogSet)
	{
		ClientSocket->Active = false;
		WatchdogDisconnects++;
		Disconnects->Text = WatchdogDisconnects;
		if(ReconnectAttempts < 3)
		{
			ConnectClick(this);
			ReconnectAttempts ++;
		}
	else
		DisconnectClick(this);
	}

	WatchdogSet = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ClientSocketConnect(TObject *Sender,
	  TCustomWinSocket *Socket)
{
	Edit1->Text = "Connected";
	Watchdog->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DisconnectClick(TObject *Sender)
{
	Edit1->Text = "Disconnected";
    ClientSocket->Active = false;
	Watchdog->Enabled = false;
	ReconnectAttempts = 0;
	Application->MessageBox(L"Disconnected from server", L"Pacific Southern", MB_OK);
}
//---------------------------------------------------------------------------
void TForm2::LoadTile(String Name)      //Load tiles into image list
{
	Tiles->FileLoad(rtBitmap,("BlackScreenTiles\\" + Name), clWhite);
}
//---------------------------------------------------------------------------

void TForm2::Process(String Message)
{
	String Type;
	String ImageName;
	String ID;
	int XOrigin, YOrigin, TXOrigin, TYOrigin;

	Type = Message.SubString(1, 8).TrimRight();
	if(Type == "Tile" || Type == "TrainID")
	{
		ImageName = Message.SubString(10, 8).TrimRight();
		if(ImageName == "HyYdPt")
		{
			pImage = ImageHydeYardPort;    //Set pointer to image
			XOrigin = 12;
			YOrigin = 4;
			TXOrigin = -20;
			TYOrigin = 20;
		}
		else if(ImageName == "LaKr")
		{
			pImage = ImageLathamKrulish;
			XOrigin = 0;
			YOrigin = 4;
			TXOrigin = 0;
			TYOrigin = 20;
		}
		else
		{
			pImage = ImageNassauCliff;
			XOrigin = 0;
			YOrigin = 4;
			TXOrigin = 0;
			TYOrigin = 20;
		}
		Col = StrToInt(Message.SubString(20, 4).TrimRight());
		Row = StrToInt(Message.SubString(25, 4 ).TrimRight());
	}
	if(Type == "Tile")
	{
		Tile = StrToInt(Message.SubString(30, 4).TrimRight());       //Draw tile
		Tiles->Draw(pImage->Canvas, XOrigin + Col*HtWd, YOrigin + Row*HtWd, Tile, true);
		pImage->Invalidate();
	}
	else if(Type == "TrainID")
	{
		ID = Message.SubString(30, 6).TrimRight();                   //Write train ID
		pImage->Canvas->TextOut(TXOrigin +2 + Col*HtWd, TYOrigin + Row*HtWd, ID);
	}
	else if(Type == "CktBkr")
	{
		String Text = Message.SubString(10, 28).TrimRight();       //Circuit breaker status
		if(Text == "All OK")
		{
			Breakers->Color = clGreen;
			Breakers->Text = "      All OK";
		}
		else if(Text == "DCCPowerOff")
		{
			Breakers->Color = clNavy;
			Breakers->Text = "   DCC Power Off";
		}
		else
		{
			Breakers->Color = clRed;
            Breakers->Text = Text;
		}
	}
	else if(Type == "PSClock")
	{                                      //Time
		String NewTime = Message.SubString(10, 6).TrimRight();
		PSTime->Text = NewTime;
    }
}

//---------------------------------------------------------------------------
//Train ID functions

void __fastcall TForm2::TrainClick(TObject *Sender)
{
	Train->Text = "";
	Train->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageHydeYardPortMouseDown(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	int DX = X + 12;
	int DY = Y ;
	int Col = (DX - DX%HtWd)/HtWd;
	int Row = (DY - DY%HtWd)/HtWd;
	if(Button == mbLeft && ClientSocket->Active && Train->Text != "")
	{
		WriteServer("TrainID", "HyYdPt", Col, Row, Train->Text);
		Train->Text = "";
		Train->SetFocus();
	}
	else if(Button == mbRight && ClientSocket->Active)
	{
		WriteServer("RtClick", "HyYdPt", Col, Row, "");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageLathamKrulishMouseDown(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	int DX = X;
	int DY = Y - 20;
	int Col = (DX - DX%HtWd)/HtWd;
	int Row = (DY - DY%HtWd)/HtWd;

	if(Button == mbLeft && ClientSocket->Active == true && Train->Text != "")
	{
		WriteServer("TrainID", "LaKr", Col, Row, Train->Text);
		Train->Text = "";
		Train->SetFocus();
	}
	else if(Button == mbRight && ClientSocket->Active)
	{
		WriteServer("RtClick", "LaKr", Col, Row, "");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageNassauCliffMouseDown(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	int DX = X;
	int DY = Y - 20;
	int Col = (DX - DX%HtWd)/HtWd;
	int Row = (DY - DY%HtWd)/HtWd;
	if(Button == mbLeft && ClientSocket->Active == true && Train->Text != "")
	{
		WriteServer("TrainID", "NaCf", Col, Row, Train->Text);
		Train->Text = "";
		Train->SetFocus();
	}
	else if(Button == mbRight && ClientSocket->Active)
	{
		WriteServer("RtClick", "NaCf", Col, Row, "");
	}
}
//---------------------------------------------------------------------------

void TForm2::WriteServer(String Type, String ImageName, int Col, int Row, String Train)
{
	String Message = AnsiString::StringOfChar(' ', 45);
	Message.Insert(Type, 1);
	Message.Insert(ImageName, 10);
	Message.Insert(Col, 20);
	Message.Insert(Row, 25);
	Message.Insert(Train, 30);
	Message.Insert("##", 40);
	Message = Message.TrimRight();

	ClientSocket->Socket->SendText(Message);
}
//---------------------------------------------------------------------------




