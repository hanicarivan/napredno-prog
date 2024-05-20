object FMain: TFMain
  Left = 0
  Top = 0
  Anchors = [akRight, akBottom]
  Caption = 'FMain'
  ClientHeight = 666
  ClientWidth = 1097
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object LCurrentDate: TLabel
    Left = 899
    Top = 0
    Width = 96
    Height = 25
    Align = alCustom
    Alignment = taCenter
  end
  object LActiveUser: TLabel
    Left = 1001
    Top = 0
    Width = 96
    Height = 25
    Align = alCustom
    Alignment = taCenter
  end
  object BtnLogut: TButton
    Left = 0
    Top = 0
    Width = 73
    Height = 25
    Caption = 'Log out'
    TabOrder = 0
    OnClick = LogOut
  end
  object BtnSettings: TButton
    Left = 79
    Top = 0
    Width = 73
    Height = 25
    Caption = 'Settings'
    TabOrder = 1
    OnClick = OpenSettings
  end
end
