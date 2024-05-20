object DMUsers: TDMUsers
  Height = 528
  Width = 829
  PixelsPerInch = 120
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=users.mdb;Persist S' +
      'ecurity Info=False'
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 176
    Top = 208
  end
  object TUsers: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'users'
    Left = 520
    Top = 168
  end
  object DataSource1: TDataSource
    DataSet = TUsers
    Left = 392
    Top = 320
  end
end
