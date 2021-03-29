object Form2: TForm2
  Left = 698
  Top = 233
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  Caption = 'PSRY Remote Display    8/15/20'
  ClientHeight = 845
  ClientWidth = 2052
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  WindowState = wsMaximized
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 770
    Width = 2052
    Height = 75
    Align = alBottom
    TabOrder = 0
    object Label6: TLabel
      Left = 24
      Top = 32
      Width = 15
      Height = 13
      Caption = 'Col'
    end
    object Label7: TLabel
      Left = 120
      Top = 32
      Width = 22
      Height = 13
      Caption = 'Row'
    end
    object Label8: TLabel
      Left = 236
      Top = 32
      Width = 51
      Height = 13
      Caption = 'IP Address'
    end
    object btnHyYdPt: TSpeedButton
      Left = 816
      Top = 16
      Width = 121
      Height = 38
      GroupIndex = 5
      Down = True
      Caption = 'Hyde/Yard/Port'
      OnClick = btnHyYdPtClick
    end
    object btnLaKr: TSpeedButton
      Left = 992
      Top = 16
      Width = 153
      Height = 38
      GroupIndex = 5
      Caption = 'Latham/Dell/Shore/Krulish'
      OnClick = btnLaKrClick
    end
    object btnNaCf: TSpeedButton
      Left = 1200
      Top = 16
      Width = 138
      Height = 38
      GroupIndex = 5
      Caption = 'Nassau/Bank/Cliff'
      OnClick = btnNaCfClick
    end
    object IPAddress: TMemo
      Left = 304
      Top = 30
      Width = 105
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Lines.Strings = (
        '98.110.124.243')
      ParentFont = False
      TabOrder = 0
    end
    object sCol: TEdit
      Left = 56
      Top = 32
      Width = 41
      Height = 21
      TabOrder = 1
    end
    object sRow: TEdit
      Left = 160
      Top = 32
      Width = 49
      Height = 21
      TabOrder = 2
    end
  end
  object PanelX: TPanel
    Left = 0
    Top = 106
    Width = 2052
    Height = 664
    Align = alClient
    TabOrder = 1
    object ImageHydeYardPort: TImage
      Left = 0
      Top = 0
      Width = 2542
      Height = 876
      AutoSize = True
      OnMouseDown = ImageHydeYardPortMouseDown
      OnMouseMove = ImageHydeYardPortMouseMove
    end
    object ImageLathamKrulish: TImage
      Left = 0
      Top = 0
      Width = 1278
      Height = 129
      AutoSize = True
      Visible = False
      OnMouseDown = ImageLathamKrulishMouseDown
      OnMouseMove = ImageLathamKrulishMouseMove
    end
    object ImageNassauCliff: TImage
      Left = 0
      Top = 0
      Width = 1278
      Height = 153
      AutoSize = True
      Visible = False
      OnMouseDown = ImageNassauCliffMouseDown
      OnMouseMove = ImageNassauCliffMouseMove
    end
    object ReceiveBuffer: TMemo
      Left = 408
      Top = 232
      Width = 281
      Height = 249
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Courier New'
      Font.Style = []
      Lines.Strings = (
        '')
      ParentFont = False
      TabOrder = 0
      Visible = False
      WordWrap = False
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 0
    Width = 2052
    Height = 106
    Align = alTop
    TabOrder = 2
    object Label1: TLabel
      Left = 136
      Top = 58
      Width = 27
      Height = 13
      Caption = 'Errors'
    end
    object Label2: TLabel
      Left = 351
      Top = 18
      Width = 67
      Height = 13
      Caption = 'DCC Breakers'
    end
    object Label3: TLabel
      Left = 136
      Top = 18
      Width = 30
      Height = 13
      Caption = 'Status'
    end
    object Label4: TLabel
      Left = 377
      Top = 58
      Width = 24
      Height = 13
      Caption = 'Train'
    end
    object Label5: TLabel
      Left = 228
      Top = 58
      Width = 59
      Height = 13
      Caption = 'Disconnects'
    end
    object Edit1: TEdit
      Left = 188
      Top = 15
      Width = 129
      Height = 22
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Courier New'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object Connect: TButton
      Left = 24
      Top = 13
      Width = 73
      Height = 25
      Caption = 'Connect'
      TabOrder = 2
      OnClick = ConnectClick
    end
    object Disconnect: TButton
      Left = 22
      Top = 53
      Width = 75
      Height = 25
      Caption = 'Disconnect'
      TabOrder = 3
      OnClick = DisconnectClick
    end
    object ErrorBox: TEdit
      Left = 177
      Top = 55
      Width = 32
      Height = 21
      TabOrder = 4
      Text = '0'
    end
    object Breakers: TEdit
      Left = 440
      Top = 15
      Width = 201
      Height = 21
      Color = clGreen
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
    end
    object Train: TEdit
      Left = 416
      Top = 55
      Width = 57
      Height = 21
      CharCase = ecUpperCase
      TabOrder = 0
      OnClick = TrainClick
    end
    object PSTime: TEdit
      Left = 824
      Top = 2
      Width = 89
      Height = 45
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -32
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      Text = '12:00'
    end
    object Disconnects: TEdit
      Left = 304
      Top = 55
      Width = 34
      Height = 21
      TabOrder = 7
      Text = '0'
    end
  end
  object Tiles: TImageList
    BkColor = clWhite
    Left = 192
    Top = 272
  end
  object ClientSocket: TClientSocket
    Active = False
    Address = '192.168.2.0'
    ClientType = ctNonBlocking
    Port = 5204
    OnConnect = ClientSocketConnect
    OnRead = ClientSocketRead
    Left = 272
    Top = 272
  end
  object Watchdog: TTimer
    Enabled = False
    Interval = 5000
    OnTimer = WatchdogTimer
    Left = 112
    Top = 272
  end
end
