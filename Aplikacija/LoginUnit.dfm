object FLogin: TFLogin
  Left = 0
  Top = 0
  Caption = 'Login'
  ClientHeight = 305
  ClientWidth = 419
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = RememberMe
  TextHeight = 15
  object LUsername: TLabel
    Left = 160
    Top = 16
    Width = 56
    Height = 15
    Caption = 'Username:'
  end
  object LPassword: TLabel
    Left = 160
    Top = 72
    Width = 53
    Height = 15
    Caption = 'Password:'
  end
  object EUsernameLogin: TEdit
    Left = 160
    Top = 37
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object EPasswordLogin: TEdit
    Left = 160
    Top = 93
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object BtnLogin: TButton
    Left = 160
    Top = 168
    Width = 121
    Height = 25
    Caption = 'Login'
    Default = True
    TabOrder = 2
    OnClick = OpenMainForm
  end
  object BtnRegister: TButton
    Left = 160
    Top = 208
    Width = 121
    Height = 25
    Caption = 'Register'
    TabOrder = 3
    OnClick = OpenRegisterForm
  end
  object CBRememberMe: TCheckBox
    Left = 160
    Top = 130
    Width = 121
    Height = 17
    Caption = 'Remember Me'
    TabOrder = 4
  end
  object BtnForgotPass: TButton
    Left = 160
    Top = 248
    Width = 121
    Height = 25
    Caption = 'Forgot password'
    TabOrder = 5
    OnClick = BtnForgotPassClick
  end
end
