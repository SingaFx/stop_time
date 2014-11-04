object Form1: TForm1
  Left = 295
  Top = 212
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Time Master'
  ClientHeight = 130
  ClientWidth = 264
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 155
    Height = 13
    Caption = #1059#1074#1077#1083#1077#1095#1077#1085#1080#1077' '#1089#1082#1086#1088#1086#1089#1090#1080', '#1084#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 32
    Width = 98
    Height = 13
    Caption = #1047#1072#1084#1077#1076#1083#1077#1085#1080#1077', '#1084#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 168
    Top = 8
    Width = 73
    Height = 21
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
    Text = '1'
  end
  object UpDown1: TUpDown
    Left = 241
    Top = 8
    Width = 15
    Height = 21
    Associate = Edit1
    Min = 1
    Max = 10000
    Increment = 100
    Position = 1
    TabOrder = 1
    Wrap = False
    OnChanging = UpDown1Changing
  end
  object Edit2: TEdit
    Left = 168
    Top = 32
    Width = 73
    Height = 21
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    ReadOnly = True
    TabOrder = 2
    Text = '1'
  end
  object UpDown2: TUpDown
    Left = 241
    Top = 32
    Width = 15
    Height = 21
    Associate = Edit2
    Min = 1
    Max = 10000
    Increment = 100
    Position = 1
    TabOrder = 3
    Wrap = False
    OnChanging = UpDown2Changing
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 64
    Width = 249
    Height = 25
    Caption = #1061#1086#1076' '#1089' '#1082#1086#1101#1092#1092#1080#1094#1080#1077#1085#1090#1086#1084
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 8
    Top = 96
    Width = 249
    Height = 25
    Caption = #1055#1086#1083#1085#1072#1103' '#1086#1089#1090#1072#1085#1086#1074#1082#1072' '#1074#1088#1077#1084#1077#1085#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = BitBtn2Click
    Kind = bkAll
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer1Timer
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer2Timer
    Left = 32
  end
end
