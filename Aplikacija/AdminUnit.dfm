object FAdmin: TFAdmin
  Left = 0
  Top = 0
  Caption = 'Admin'
  ClientHeight = 445
  ClientWidth = 626
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object BtnLogOut: TButton
    Left = 488
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Log out'
    TabOrder = 0
    OnClick = BtnLogOutClick
  end
end
