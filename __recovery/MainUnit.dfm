object FMain: TFMain
  Left = 0
  Top = 0
  Caption = 'FMain'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object ActiveUser: TStaticText
    Left = 458
    Top = 8
    Width = 86
    Height = 25
    TabOrder = 0
    Transparent = False
  end
  object BtnLogut: TButton
    Left = 550
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Log out'
    TabOrder = 1
    OnClick = LogOut
  end
  object BtnSettings: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Settings'
    TabOrder = 2
    OnClick = OpenSettings
  end
end
