object FForgot: TFForgot
  Left = 0
  Top = 0
  Caption = 'Forgot password'
  ClientHeight = 264
  ClientWidth = 192
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object LUsername: TLabel
    Left = 40
    Top = 11
    Width = 56
    Height = 15
    Caption = 'Username:'
  end
  object LPassword: TLabel
    Left = 40
    Top = 64
    Width = 80
    Height = 15
    Caption = 'New password:'
  end
  object LConfirmation: TLabel
    Left = 40
    Top = 115
    Width = 95
    Height = 15
    Caption = 'Confirmation key:'
  end
  object BtnClose: TButton
    Left = 60
    Top = 216
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 0
    OnClick = BtnCloseClick
  end
  object EUsername: TEdit
    Left = 40
    Top = 32
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object EPassword: TEdit
    Left = 40
    Top = 85
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object EConfirmation: TEdit
    Left = 40
    Top = 136
    Width = 121
    Height = 23
    TabOrder = 3
  end
  object BtnConfirm: TButton
    Left = 60
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Confirm'
    Default = True
    TabOrder = 4
    OnClick = BtnConfirmClick
  end
end
