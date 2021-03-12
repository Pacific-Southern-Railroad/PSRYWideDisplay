object ThrottleForm: TThrottleForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'PSRY Throttle'
  ClientHeight = 369
  ClientWidth = 234
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 32
    Width = 24
    Height = 13
    Caption = 'Train'
  end
  object Label2: TLabel
    Left = 24
    Top = 80
    Width = 22
    Height = 13
    Caption = 'Loco'
  end
  object Label3: TLabel
    Left = 24
    Top = 125
    Width = 30
    Height = 13
    Caption = 'Speed'
  end
  object CabSignal: TImage
    Left = 192
    Top = 27
    Width = 20
    Height = 100
    ParentShowHint = False
    ShowHint = False
  end
  object Train: TEdit
    Left = 88
    Top = 27
    Width = 51
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Loco: TEdit
    Left = 88
    Top = 75
    Width = 51
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Speed: TEdit
    Left = 88
    Top = 120
    Width = 51
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object ForwardBtn: TButton
    Left = 24
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Forward'
    TabOrder = 3
  end
  object ReverseBtn: TButton
    Left = 137
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Reverse'
    TabOrder = 4
  end
  object FastBtn: TButton
    Left = 80
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Faster'
    TabOrder = 5
  end
  object SlowBtn: TButton
    Left = 80
    Top = 239
    Width = 75
    Height = 25
    Caption = 'Slower'
    TabOrder = 6
  end
  object StopBtn: TButton
    Left = 80
    Top = 278
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 7
  end
  object HornBtn: TButton
    Left = 24
    Top = 309
    Width = 75
    Height = 25
    Caption = 'Horn'
    TabOrder = 8
  end
  object HeadlightBtn: TButton
    Left = 137
    Top = 309
    Width = 75
    Height = 25
    Caption = 'Headlight'
    TabOrder = 9
  end
  object CabSignals: TImageList
    BkColor = clWhite
    Height = 100
    Width = 20
    Left = 24
    Top = 224
  end
end
