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

procedure Form1.toolStripMenuItem_open_Click(sender: Object; e: EventArgs);
begin
  ///openFileDialog.ShowDialog;
  openFileDialog.FileName := '';
  if openFileDialog.ShowDialog() = System.Windows.Forms.DialogResult.OK then
  MainText.LoadFile(openFileDialog.FileName, RichTextBoxStreamType.PlainText)
end;

procedure Form1.toolStripMenuItem_save_Click(sender: Object; e: EventArgs);
begin
  saveFileDialog.DefaultExt := 'txt';
  saveFileDialog.Filter := 'Text files (*.txt)|*.txt|All files (*.*)|*.*';
  saveFileDialog.FileName := 'Без названия';
  saveFileDialog.ShowDialog;
  MainText.SaveFile(saveFileDialog.FileName, RichTextBoxStreamType.PlainText)
end;

end.
