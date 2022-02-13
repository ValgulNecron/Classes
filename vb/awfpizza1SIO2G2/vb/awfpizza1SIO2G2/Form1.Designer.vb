<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.calcule = New System.Windows.Forms.Button()
        Me.RDgrand = New System.Windows.Forms.RadioButton()
        Me.RDpetit = New System.Windows.Forms.RadioButton()
        Me.RDmoyen = New System.Windows.Forms.RadioButton()
        Me.GBtaille = New System.Windows.Forms.GroupBox()
        Me.CBing01 = New System.Windows.Forms.CheckBox()
        Me.GBing = New System.Windows.Forms.GroupBox()
        Me.CBing08 = New System.Windows.Forms.CheckBox()
        Me.CBing07 = New System.Windows.Forms.CheckBox()
        Me.CBing06 = New System.Windows.Forms.CheckBox()
        Me.CBing05 = New System.Windows.Forms.CheckBox()
        Me.CBing04 = New System.Windows.Forms.CheckBox()
        Me.CBing03 = New System.Windows.Forms.CheckBox()
        Me.CBing02 = New System.Windows.Forms.CheckBox()
        Me.achpiz = New System.Windows.Forms.Button()
        Me.GBcroute = New System.Windows.Forms.GroupBox()
        Me.RDnormal = New System.Windows.Forms.RadioButton()
        Me.RDfine = New System.Windows.Forms.RadioButton()
        Me.RDepaisse = New System.Windows.Forms.RadioButton()
        Me.GBconso = New System.Windows.Forms.GroupBox()
        Me.RadioButton1 = New System.Windows.Forms.RadioButton()
        Me.RD = New System.Windows.Forms.RadioButton()
        Me.GBtaille.SuspendLayout()
        Me.GBing.SuspendLayout()
        Me.GBcroute.SuspendLayout()
        Me.GBconso.SuspendLayout()
        Me.SuspendLayout()
        '
        'calcule
        '
        Me.calcule.Location = New System.Drawing.Point(735, 414)
        Me.calcule.Name = "calcule"
        Me.calcule.Size = New System.Drawing.Size(53, 24)
        Me.calcule.TabIndex = 0
        Me.calcule.Text = "calcule"
        Me.calcule.UseVisualStyleBackColor = True
        '
        'RDgrand
        '
        Me.RDgrand.AutoSize = True
        Me.RDgrand.Location = New System.Drawing.Point(22, 72)
        Me.RDgrand.Name = "RDgrand"
        Me.RDgrand.Size = New System.Drawing.Size(62, 19)
        Me.RDgrand.TabIndex = 3
        Me.RDgrand.TabStop = True
        Me.RDgrand.Text = "grande"
        Me.RDgrand.UseVisualStyleBackColor = True
        '
        'RDpetit
        '
        Me.RDpetit.AutoSize = True
        Me.RDpetit.Location = New System.Drawing.Point(22, 22)
        Me.RDpetit.Name = "RDpetit"
        Me.RDpetit.Size = New System.Drawing.Size(55, 19)
        Me.RDpetit.TabIndex = 2
        Me.RDpetit.TabStop = True
        Me.RDpetit.Text = "petite"
        Me.RDpetit.UseVisualStyleBackColor = True
        '
        'RDmoyen
        '
        Me.RDmoyen.AutoSize = True
        Me.RDmoyen.Location = New System.Drawing.Point(22, 47)
        Me.RDmoyen.Name = "RDmoyen"
        Me.RDmoyen.Size = New System.Drawing.Size(75, 19)
        Me.RDmoyen.TabIndex = 4
        Me.RDmoyen.TabStop = True
        Me.RDmoyen.Text = "moyenne"
        Me.RDmoyen.UseVisualStyleBackColor = True
        '
        'GBtaille
        '
        Me.GBtaille.Controls.Add(Me.RDmoyen)
        Me.GBtaille.Controls.Add(Me.RDpetit)
        Me.GBtaille.Controls.Add(Me.RDgrand)
        Me.GBtaille.Location = New System.Drawing.Point(12, 12)
        Me.GBtaille.Name = "GBtaille"
        Me.GBtaille.Size = New System.Drawing.Size(200, 100)
        Me.GBtaille.TabIndex = 1
        Me.GBtaille.TabStop = False
        Me.GBtaille.Text = "taille"
        '
        'CBing01
        '
        Me.CBing01.AutoSize = True
        Me.CBing01.Location = New System.Drawing.Point(16, 22)
        Me.CBing01.Name = "CBing01"
        Me.CBing01.Size = New System.Drawing.Size(86, 19)
        Me.CBing01.TabIndex = 2
        Me.CBing01.Text = "ingrediant1"
        Me.CBing01.UseVisualStyleBackColor = True
        '
        'GBing
        '
        Me.GBing.Controls.Add(Me.CBing08)
        Me.GBing.Controls.Add(Me.CBing07)
        Me.GBing.Controls.Add(Me.CBing06)
        Me.GBing.Controls.Add(Me.CBing05)
        Me.GBing.Controls.Add(Me.CBing04)
        Me.GBing.Controls.Add(Me.CBing03)
        Me.GBing.Controls.Add(Me.CBing02)
        Me.GBing.Controls.Add(Me.CBing01)
        Me.GBing.Location = New System.Drawing.Point(232, 12)
        Me.GBing.Name = "GBing"
        Me.GBing.Size = New System.Drawing.Size(208, 129)
        Me.GBing.TabIndex = 10
        Me.GBing.TabStop = False
        Me.GBing.Text = "ingrediant"
        '
        'CBing08
        '
        Me.CBing08.AutoSize = True
        Me.CBing08.Location = New System.Drawing.Point(108, 98)
        Me.CBing08.Name = "CBing08"
        Me.CBing08.Size = New System.Drawing.Size(86, 19)
        Me.CBing08.TabIndex = 9
        Me.CBing08.Text = "ingrediant8"
        Me.CBing08.UseVisualStyleBackColor = True
        '
        'CBing07
        '
        Me.CBing07.AutoSize = True
        Me.CBing07.Location = New System.Drawing.Point(108, 73)
        Me.CBing07.Name = "CBing07"
        Me.CBing07.Size = New System.Drawing.Size(86, 19)
        Me.CBing07.TabIndex = 8
        Me.CBing07.Text = "ingrediant7"
        Me.CBing07.UseVisualStyleBackColor = True
        '
        'CBing06
        '
        Me.CBing06.AutoSize = True
        Me.CBing06.Location = New System.Drawing.Point(108, 47)
        Me.CBing06.Name = "CBing06"
        Me.CBing06.Size = New System.Drawing.Size(86, 19)
        Me.CBing06.TabIndex = 7
        Me.CBing06.Text = "ingrediant6"
        Me.CBing06.UseVisualStyleBackColor = True
        '
        'CBing05
        '
        Me.CBing05.AutoSize = True
        Me.CBing05.Location = New System.Drawing.Point(108, 22)
        Me.CBing05.Name = "CBing05"
        Me.CBing05.Size = New System.Drawing.Size(86, 19)
        Me.CBing05.TabIndex = 6
        Me.CBing05.Text = "ingrediant5"
        Me.CBing05.UseVisualStyleBackColor = True
        '
        'CBing04
        '
        Me.CBing04.AutoSize = True
        Me.CBing04.Location = New System.Drawing.Point(16, 98)
        Me.CBing04.Name = "CBing04"
        Me.CBing04.Size = New System.Drawing.Size(86, 19)
        Me.CBing04.TabIndex = 5
        Me.CBing04.Text = "ingrediant4"
        Me.CBing04.UseVisualStyleBackColor = True
        '
        'CBing03
        '
        Me.CBing03.AutoSize = True
        Me.CBing03.Location = New System.Drawing.Point(16, 73)
        Me.CBing03.Name = "CBing03"
        Me.CBing03.Size = New System.Drawing.Size(86, 19)
        Me.CBing03.TabIndex = 4
        Me.CBing03.Text = "ingrediant3"
        Me.CBing03.UseVisualStyleBackColor = True
        '
        'CBing02
        '
        Me.CBing02.AutoSize = True
        Me.CBing02.Location = New System.Drawing.Point(16, 47)
        Me.CBing02.Name = "CBing02"
        Me.CBing02.Size = New System.Drawing.Size(86, 19)
        Me.CBing02.TabIndex = 3
        Me.CBing02.Text = "ingrediant2"
        Me.CBing02.UseVisualStyleBackColor = True
        '
        'achpiz
        '
        Me.achpiz.Location = New System.Drawing.Point(14, 400)
        Me.achpiz.Name = "achpiz"
        Me.achpiz.Size = New System.Drawing.Size(129, 38)
        Me.achpiz.TabIndex = 11
        Me.achpiz.Text = "achat pizza"
        Me.achpiz.UseVisualStyleBackColor = True
        '
        'GBcroute
        '
        Me.GBcroute.Controls.Add(Me.RDnormal)
        Me.GBcroute.Controls.Add(Me.RDfine)
        Me.GBcroute.Controls.Add(Me.RDepaisse)
        Me.GBcroute.Location = New System.Drawing.Point(464, 12)
        Me.GBcroute.Name = "GBcroute"
        Me.GBcroute.Size = New System.Drawing.Size(200, 100)
        Me.GBcroute.TabIndex = 5
        Me.GBcroute.TabStop = False
        Me.GBcroute.Text = "croute"
        '
        'RDnormal
        '
        Me.RDnormal.AutoSize = True
        Me.RDnormal.Location = New System.Drawing.Point(22, 47)
        Me.RDnormal.Name = "RDnormal"
        Me.RDnormal.Size = New System.Drawing.Size(63, 19)
        Me.RDnormal.TabIndex = 4
        Me.RDnormal.TabStop = True
        Me.RDnormal.Text = "normal"
        Me.RDnormal.UseVisualStyleBackColor = True
        '
        'RDfine
        '
        Me.RDfine.AutoSize = True
        Me.RDfine.Location = New System.Drawing.Point(22, 22)
        Me.RDfine.Name = "RDfine"
        Me.RDfine.Size = New System.Drawing.Size(45, 19)
        Me.RDfine.TabIndex = 2
        Me.RDfine.TabStop = True
        Me.RDfine.Text = "fine"
        Me.RDfine.UseVisualStyleBackColor = True
        '
        'RDepaisse
        '
        Me.RDepaisse.AutoSize = True
        Me.RDepaisse.Location = New System.Drawing.Point(22, 72)
        Me.RDepaisse.Name = "RDepaisse"
        Me.RDepaisse.Size = New System.Drawing.Size(63, 19)
        Me.RDepaisse.TabIndex = 3
        Me.RDepaisse.TabStop = True
        Me.RDepaisse.Text = "epaisse"
        Me.RDepaisse.UseVisualStyleBackColor = True
        '
        'GBconso
        '
        Me.GBconso.Controls.Add(Me.RadioButton1)
        Me.GBconso.Controls.Add(Me.RD)
        Me.GBconso.Location = New System.Drawing.Point(12, 118)
        Me.GBconso.Name = "GBconso"
        Me.GBconso.Size = New System.Drawing.Size(200, 77)
        Me.GBconso.TabIndex = 6
        Me.GBconso.TabStop = False
        Me.GBconso.Text = "mode de consomation"
        '
        'RadioButton1
        '
        Me.RadioButton1.AutoSize = True
        Me.RadioButton1.Location = New System.Drawing.Point(22, 47)
        Me.RadioButton1.Name = "RadioButton1"
        Me.RadioButton1.Size = New System.Drawing.Size(63, 19)
        Me.RadioButton1.TabIndex = 4
        Me.RadioButton1.TabStop = True
        Me.RadioButton1.Text = "normal"
        Me.RadioButton1.UseVisualStyleBackColor = True
        '
        'RD
        '
        Me.RD.AutoSize = True
        Me.RD.Location = New System.Drawing.Point(22, 22)
        Me.RD.Name = "RD"
        Me.RD.Size = New System.Drawing.Size(45, 19)
        Me.RD.TabIndex = 2
        Me.RD.TabStop = True
        Me.RD.Text = "fine"
        Me.RD.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.GBconso)
        Me.Controls.Add(Me.GBcroute)
        Me.Controls.Add(Me.achpiz)
        Me.Controls.Add(Me.GBing)
        Me.Controls.Add(Me.GBtaille)
        Me.Controls.Add(Me.calcule)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.GBtaille.ResumeLayout(False)
        Me.GBtaille.PerformLayout()
        Me.GBing.ResumeLayout(False)
        Me.GBing.PerformLayout()
        Me.GBcroute.ResumeLayout(False)
        Me.GBcroute.PerformLayout()
        Me.GBconso.ResumeLayout(False)
        Me.GBconso.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents calcule As Button
    Friend WithEvents RDgrand As RadioButton
    Friend WithEvents RDpetit As RadioButton
    Friend WithEvents RDmoyen As RadioButton
    Friend WithEvents GBtaille As GroupBox
    Friend WithEvents CBing01 As CheckBox
    Friend WithEvents GBing As GroupBox
    Friend WithEvents CBing08 As CheckBox
    Friend WithEvents CBing07 As CheckBox
    Friend WithEvents CBing06 As CheckBox
    Friend WithEvents CBing05 As CheckBox
    Friend WithEvents CBing04 As CheckBox
    Friend WithEvents CBing03 As CheckBox
    Friend WithEvents CBing02 As CheckBox
    Friend WithEvents achpiz As Button
    Friend WithEvents GBcroute As GroupBox
    Friend WithEvents RDnormal As RadioButton
    Friend WithEvents RDfine As RadioButton
    Friend WithEvents RDepaisse As RadioButton
    Friend WithEvents GBconso As GroupBox
    Friend WithEvents RadioButton1 As RadioButton
    Friend WithEvents RD As RadioButton
End Class
