object FSettings: TFSettings
  Left = 0
  Top = 0
  Caption = 'Settings'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object BtnChangeFont: TButton
    Left = 40
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Change font'
    TabOrder = 0
    OnClick = ChangeFontFun
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    Left = 576
    Top = 16
  end
end
