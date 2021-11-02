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
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.MainMenu.SuspendLayout();
        self.SuspendLayout();
        // 
        // MainMenu
        // 
        self.MainMenu.BackColor := System.Drawing.SystemColors.GrayText;
        self.MainMenu.BackgroundImage := (System.Drawing.Image(resources.GetObject('MainMenu.BackgroundImage')));
        self.MainMenu.ImageScalingSize := new System.Drawing.Size(20, 20);
        self.MainMenu.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolsStripMenuItem_file, self.toolStripMenuItem1));
        self.MainMenu.Location := new System.Drawing.Point(0, 0);
        self.MainMenu.Name := 'MainMenu';
        self.MainMenu.Size := new System.Drawing.Size(284, 28);
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
        self.toolsStripMenuItem_file.Size := new System.Drawing.Size(90, 24);
        self.toolsStripMenuItem_file.Text := 'Файлы';
        // 
        // toolStripMenuItem_open
        // 
        self.toolStripMenuItem_open.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem_open.ForeColor := System.Drawing.SystemColors.ControlLightLight;
        self.toolStripMenuItem_open.Name := 'toolStripMenuItem_open';
        self.toolStripMenuItem_open.Size := new System.Drawing.Size(189, 26);
        self.toolStripMenuItem_open.Text := 'Открыть';
        self.toolStripMenuItem_open.Click += toolStripMenuItem_open_Click;
        // 
        // toolStripMenuItem_save
        // 
        self.toolStripMenuItem_save.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.toolStripMenuItem_save.ForeColor := System.Drawing.SystemColors.ControlLightLight;
        self.toolStripMenuItem_save.Name := 'toolStripMenuItem_save';
        self.toolStripMenuItem_save.Size := new System.Drawing.Size(189, 26);
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
        self.MainText.Location := new System.Drawing.Point(0, 28);
        self.MainText.Name := 'MainText';
        self.MainText.Size := new System.Drawing.Size(284, 233);
        self.MainText.TabIndex := 2;
        self.MainText.Text := '';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.BackgroundImage := (System.Drawing.Image(resources.GetObject('toolStripMenuItem1.BackgroundImage')));
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem3, self.toolStripMenuItem4, self.toolStripMenuItem5, self.toolStripMenuItem6));
        self.toolStripMenuItem1.ForeColor := System.Drawing.SystemColors.AppWorkspace;
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(125, 24);
        self.toolStripMenuItem1.Text := 'Редактировать';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.BackColor := System.Drawing.SystemColors.GrayText;
        self.toolStripMenuItem3.ForeColor := System.Drawing.SystemColors.Control;
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(189, 26);
        self.toolStripMenuItem3.Text := 'Копировать';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.BackColor := System.Drawing.SystemColors.GrayText;
        self.toolStripMenuItem4.ForeColor := System.Drawing.SystemColors.Control;
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(189, 26);
        self.toolStripMenuItem4.Text := 'Вырезать';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.BackColor := System.Drawing.SystemColors.GrayText;
        self.toolStripMenuItem5.ForeColor := System.Drawing.SystemColors.Control;
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(189, 26);
        self.toolStripMenuItem5.Text := 'Вставить';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.BackColor := System.Drawing.SystemColors.GrayText;
        self.toolStripMenuItem6.ForeColor := System.Drawing.SystemColors.Control;
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(189, 26);
        self.toolStripMenuItem6.Text := 'Удалить';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
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
