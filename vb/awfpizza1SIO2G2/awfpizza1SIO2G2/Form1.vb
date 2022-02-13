Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles calcule.Click
        Dim i As Integer
        Dim radio As RadioButton
        'If (RDpetit.Checked) Thene
        '    taille = RDpetit.Text
        'ElseIf (RDmoyen.Checked) Then
        '    taille = RDmoyen.Text
        'Else
        '    taille = RDgrand.Text
        'For i = 0 To GBtaille.Controls.Count - 1
        '    radio = GBtaille.Controls(i)
        '    If radio.Checked Then
        '        taille = radio.Text
        '    End If
        'Next
        i = 0
        radio = GBtaille.Controls(i)
        Do While radio.Checked = False
            i += 1
            radio = GBtaille.Controls(i)
        Loop
        'MsgBox(taille)
        MsgBox(GBtaille.Controls(i).Text)
    End Sub

    Private Sub achpiz_Click(sender As Object, e As EventArgs) Handles achpiz.Click
        Dim i As Integer
        Dim radio As RadioButton
        Dim affichage As String
        i = 0
        radio = GBtaille.Controls(i)
        Do While radio.Checked = False
            i += 1
            radio = GBtaille.Controls(i)
        Loop
        affichage = GBtaille.Controls(i).Text



        Dim cbing As CheckBox
        Dim R As Integer
        R = 0
        For i = 0 To GBing.Controls.Count - 1
            cbing = GBing.Controls(i)
            If cbing.Checked Then
                affichage += vbCrLf & cbing.Text
                R += 1
            End If
        Next



        i = 0
        radio = GBcroute.Controls(i)
        Do While radio.Checked = False
            i += 1
            radio = GBcroute.Controls(i)
        Loop
        affichage += vbCrLf & GBcroute.Controls(i).Text

        If rdemporter.Checked = True Then
            affichage += vbCrLf & rdemporter.Text
        ElseIf RDplace.Checked = True Then
            affichage += vbCrLf & RDplace.Text
        End If



        Dim suplement As CheckedListBox
        suplement = CLBsuplement
        For i = 0 To suplement.Items.Count - 1
            If suplement.GetItemChecked(i) Then
                affichage += vbCrLf & suplement.Items(i)
            End If
        Next



        If R >= 5 Then
            MsgBox("trop d'ingrediant maximun de 4")
        ElseIf R = 0 Then
            MsgBox("pizza pauvre")
        Else
            MsgBox(affichage)
        End If

    End Sub

    Private Sub BTreset_Click(sender As Object, e As EventArgs) Handles BTreset.Click
        Me.Controls.Clear()
        Me.InitializeComponent()
    End Sub

    Private Sub btexit_Click(sender As Object, e As EventArgs) Handles btexit.Click
        Me.Close()
    End Sub
End Class