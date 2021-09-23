Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure toolStripMenuItem_open_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem_save_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    MainMenu: MenuStrip;
    toolsStripMenuItem_file: ToolStripMenuItem;
    toolStripMenuItem_open: ToolStripMenuItem;
    toolStripMenuItem_save: ToolStripMenuItem;
    openFileDialog: OpenFileDialog;
    MainText: RichTextBox;
    saveFileDialog: SaveFileDialog;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

///Процедура вызывается когда мы нажимаем на кнопку "Открыть" в меню
///Она вызывает событие открытия окна выбора файла
procedure Form1.toolStripMenuItem_open_Click(sender: Object; e: EventArgs);
begin
  ///Дефолтное имя в диалоговом окне
  openFileDialog.FileName := '';
  ///Проверка на то,что пользователь нажал Ок и последующая загрузка файла в бокс
  if openFileDialog.ShowDialog() = System.Windows.Forms.DialogResult.OK then
  MainText.LoadFile(openFileDialog.FileName, RichTextBoxStreamType.PlainText)
end;

///Процедура вызывается когда мы нажимаем на кнопку "Сохранить" в меню
///Она вызывает событие открытия окна сохранения файла
procedure Form1.toolStripMenuItem_save_Click(sender: Object; e: EventArgs);
begin
  ///Дефолтное расширение, фильтр и название файла
  saveFileDialog.DefaultExt := 'txt';
  saveFileDialog.Filter := 'Text files (*.txt)|*.txt|All files (*.*)|*.*';
  saveFileDialog.FileName := 'Без названия';
  ///Вызываем диалог 
  saveFileDialog.ShowDialog;
  ///Сохраняем файл
  MainText.SaveFile(saveFileDialog.FileName, RichTextBoxStreamType.PlainText)
end;

end.
