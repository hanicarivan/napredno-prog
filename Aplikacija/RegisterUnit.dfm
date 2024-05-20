object FRegister: TFRegister
  Left = 0
  Top = 0
  Caption = 'Register'
  ClientHeight = 384
  ClientWidth = 580
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object LUsername: TLabel
    Left = 232
    Top = 56
    Width = 56
    Height = 15
    Caption = 'Username:'
  end
  object LPassword: TLabel
    Left = 232
    Top = 128
    Width = 53
    Height = 15
    Caption = 'Password:'
  end
  object EUsernameInput: TEdit
    Left = 232
    Top = 88
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object EPasswordInput: TEdit
    Left = 232
    Top = 160
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object BtnRegister: TButton
    Left = 232
    Top = 208
    Width = 121
    Height = 33
    Caption = 'Register'
    Default = True
    TabOrder = 2
    OnClick = RegisterUser
  end
  object BtnCloseRegister: TButton
    Left = 232
    Top = 256
    Width = 121
    Height = 33
    Cancel = True
    Caption = 'Cancel'
    TabOrder = 3
    OnClick = BtnCloseRegisterClick
  end
end
