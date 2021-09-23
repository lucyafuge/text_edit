procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.MainMenu := new System.Windows.Forms.MenuStrip();
        self.toolsStripMenuItem_file := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem_open := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem_save := new System.Windows.Forms.ToolStripMenuItem();
        self.openFileDialog := new System.Windows.Forms.OpenFileDialog();
        self.saveFileDialog := new System.Windows.Forms.SaveFileDialog();
        self.MainText := new System.Windows.Forms.RichTextBox();
        self.MainMenu.SuspendLayout();
        self.SuspendLayout();
        // 
        // MainMenu
        // 
        self.MainMenu.BackColor := System.Drawing.SystemColors.GrayText;
        self.MainMenu.BackgroundImage := (System.Drawing.Image(resources.GetObject('MainMenu.BackgroundImage')));
        self.MainMenu.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolsStripMenuItem_file));
        self.MainMenu.Location := new System.Drawing.Point(0, 0);
        self.MainMenu.Name := 'MainMenu';
        self.MainMenu.Size := new System.Drawing.Size(284, 24);
        self.MainMenu.TabIndex := 1;
        self.MainMenu.Text := 'menuStrip1';
        // 
        // toolsStripMenuItem_file
        // 
        self.toolsStripMenuItem_file.BackgroundImage := (System.Drawing.Image(resources.GetObject('toolsStripMenuItem_file.BackgroundImage')));
        self.toolsStripMenuItem_file.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem_open, self.toolStripMenuItem_save));
        self.toolsStripMenuItem_file.ForeColor := System.Drawing.SystemColors.AppWorkspace;
        self.toolsStripMenuItem_file.Image := (System.Drawing.Image(resources.GetObject('toolsStripMenuItem_file.Image')));
        self.toolsStripMenuItem_file.ImageTransparentColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(64)))), (System.Int32((System.Byte(64)))), (System.Int32((System.Byte(64)))));
        self.toolsStripMenuItem_file.Name := 'toolsStripMenuItem_file';
        self.toolsStripMenuItem_file.Size := new System.Drawing.Size(73, 20);
        self.toolsStripMenuItem_file.Text := 'Файлы';
        // 
        // toolStripMenuItem_open
        // 
        self.toolStripMenuItem_open.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem_open.ForeColor := System.Drawing.SystemColors.ControlLightLight;
        self.toolStripMenuItem_open.Name := 'toolStripMenuItem_open';
        self.toolStripMenuItem_open.Size := new System.Drawing.Size(152, 22);
        self.toolStripMenuItem_open.Text := 'Открыть';
        self.toolStripMenuItem_open.Click += toolStripMenuItem_open_Click;
        // 
        // toolStripMenuItem_save
        // 
        self.toolStripMenuItem_save.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem_save.ForeColor := System.Drawing.SystemColors.ControlLightLight;
        self.toolStripMenuItem_save.Name := 'toolStripMenuItem_save';
        self.toolStripMenuItem_save.Size := new System.Drawing.Size(152, 22);
        self.toolStripMenuItem_save.Text := 'Сохранить';
        self.toolStripMenuItem_save.Click += toolStripMenuItem_save_Click;
        // 
        // openFileDialog
        // 
        self.openFileDialog.FileName := 'openFileDialog1';
        self.openFileDialog.ValidateNames := false;
        // 
        // MainText
        // 
        self.MainText.BackColor := System.Drawing.Color.DimGray;
        self.MainText.Dock := System.Windows.Forms.DockStyle.Fill;
        self.MainText.ForeColor := System.Drawing.SystemColors.InactiveBorder;
        self.MainText.Location := new System.Drawing.Point(0, 24);
        self.MainText.Name := 'MainText';
        self.MainText.Size := new System.Drawing.Size(284, 237);
        self.MainText.TabIndex := 2;
        self.MainText.Text := '';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.MainText);
        self.Controls.Add(self.MainMenu);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.MainMenu;
        self.Name := 'Form1';
        self.Text := 'Редактор-Терминатор';
        self.MainMenu.ResumeLayout(false);
        self.MainMenu.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
