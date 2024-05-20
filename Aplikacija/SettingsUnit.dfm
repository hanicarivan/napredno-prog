object FSettings: TFSettings
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = 'Settings'
  ClientHeight = 266
  ClientWidth = 194
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object TLanguage: TLabel
    Left = 32
    Top = 52
    Width = 55
    Height = 15
    Caption = 'Language:'
  end
  object LDateFormat: TLabel
    Left = 32
    Top = 102
    Width = 66
    Height = 15
    Caption = 'Date format:'
  end
  object BtnApplySettings: TButton
    Left = 32
    Top = 165
    Width = 145
    Height = 25
    Caption = 'Apply'
    Default = True
    TabOrder = 0
    OnClick = ApplySettings
  end
  object CBLanguage: TComboBox
    Left = 32
    Top = 73
    Width = 145
    Height = 23
    ItemIndex = 0
    ParentShowHint = False
    ShowHint = False
    TabOrder = 1
    Text = 'English'
    Items.Strings = (
      'English'
      'Hrvatski')
  end
  object CBDarkMode: TCheckBox
    Left = 32
    Top = 21
    Width = 145
    Height = 17
    Caption = 'Dark mode'
    TabOrder = 2
  end
  object BtnCloseSettings: TButton
    Left = 32
    Top = 208
    Width = 145
    Height = 25
    Cancel = True
    Caption = 'Close'
    TabOrder = 3
    OnClick = BtnCloseSettingsClick
  end
  object CBDateFormat: TComboBox
    Left = 32
    Top = 123
    Width = 145
    Height = 23
    TabOrder = 4
    Text = 'dd/mm/yyyy'
    Items.Strings = (
      'dd.mm.yyyy.'
      'dd. mmmm, yyyy.'
      'mm/dd/yyyy')
  end
end
