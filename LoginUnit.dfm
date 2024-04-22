object FLogin: TFLogin
  Left = 0
  Top = 0
  Caption = 'Login'
  ClientHeight = 210
  ClientWidth = 163
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 56
    Height = 15
    Caption = 'Username:'
  end
  object Label2: TLabel
    Left = 24
    Top = 72
    Width = 53
    Height = 15
    Caption = 'Password:'
  end
  object EUsernameLogin: TEdit
    Left = 24
    Top = 37
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object EPasswordLogin: TEdit
    Left = 24
    Top = 93
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object BtnLogin: TButton
    Left = 24
    Top = 128
    Width = 121
    Height = 25
    Caption = 'Login'
    TabOrder = 2
    OnClick = OpenMainForm
  end
  object BtnRegister: TButton
    Left = 24
    Top = 168
    Width = 121
    Height = 25
    Caption = 'Register'
    TabOrder = 3
    OnClick = OpenRegisterForm
  end
end
