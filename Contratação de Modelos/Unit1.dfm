object Form1: TForm1
  Left = 192
  Top = 115
  Width = 696
  Height = 479
  Caption = ','
  Color = 14135039
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lblnome: TLabel
    Left = 176
    Top = 88
    Width = 35
    Height = 19
    Caption = 'Nome'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblsexo: TLabel
    Left = 176
    Top = 128
    Width = 31
    Height = 19
    Caption = 'Sexo'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblaltura: TLabel
    Left = 176
    Top = 160
    Width = 40
    Height = 19
    Caption = 'Altura'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblcabelo: TLabel
    Left = 176
    Top = 192
    Width = 41
    Height = 19
    Caption = 'Cabelo'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblcurso: TLabel
    Left = 144
    Top = 224
    Width = 97
    Height = 19
    Caption = 'Curso superior'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 176
    Top = 32
    Width = 281
    Height = 26
    Caption = 'Informa'#231#245'es do candidato'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -24
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblr: TLabel
    Left = 259
    Top = 344
    Width = 6
    Height = 19
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object lblsa: TLabel
    Left = 144
    Top = 344
    Width = 96
    Height = 19
    Caption = 'Sal'#225'rio Inicial:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object lblr2: TLabel
    Left = 256
    Top = 312
    Width = 6
    Height = 19
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object lblno: TLabel
    Left = 200
    Top = 312
    Width = 41
    Height = 19
    Caption = 'Nome:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Label1: TLabel
    Left = 376
    Top = 128
    Width = 93
    Height = 19
    Caption = '*Digite f ou m'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 376
    Top = 192
    Width = 90
    Height = 19
    Caption = '*Digite l ou m'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 376
    Top = 216
    Width = 89
    Height = 19
    Caption = '*Digite s ou n'
    Font.Charset = ANSI_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object txtnome: TEdit
    Left = 248
    Top = 88
    Width = 121
    Height = 23
    Color = 16744703
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    MaxLength = 30
    ParentFont = False
    TabOrder = 0
  end
  object txtsex: TEdit
    Left = 248
    Top = 120
    Width = 121
    Height = 23
    Color = 16744703
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    MaxLength = 1
    ParentFont = False
    TabOrder = 1
    OnChange = txtsexChange
  end
  object txtalt: TEdit
    Left = 248
    Top = 152
    Width = 121
    Height = 23
    Color = 16744703
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    MaxLength = 4
    ParentFont = False
    TabOrder = 2
  end
  object txtcab: TEdit
    Left = 248
    Top = 184
    Width = 121
    Height = 23
    Color = 16744703
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    MaxLength = 1
    ParentFont = False
    TabOrder = 3
    OnChange = txtcabChange
  end
  object txtcur: TEdit
    Left = 248
    Top = 216
    Width = 121
    Height = 23
    Color = 16744703
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    MaxLength = 1
    ParentFont = False
    TabOrder = 4
    OnChange = txtcurChange
  end
  object cmdok: TButton
    Left = 272
    Top = 272
    Width = 75
    Height = 25
    Caption = 'OK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = cmdokClick
  end
end
