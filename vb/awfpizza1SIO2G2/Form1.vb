Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles calcule.Click
        Dim i As Integer
        Dim radio As RadioButton
        'If (RDpetit.Checked) Then
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
        Dim cbing As CheckBox
        Dim ingrediant As String

        affichage = GBtaille.Controls(i).Text
        i = 0
        ingrediant = ""
        cbing = GBing.Controls(i)
        For i = 0 To GBing.Controls.Count - 1
            cbing = GBing.Controls(i)
            If cbing.Checked Then
                ingrediant += vbCrLf & cbing.Text
            End If
        Next
        If ingrediant = "" Then
            MsgBox("pauvre pizza")
        Else
            affichage += ingrediant
        End If
        i = 0
        radio = GBcroute.Controls(i)
        Do While radio.Checked = False
            i += 1
            radio = GBcroute.Controls(i)
        Loop
        affichage += vbCrLf & GBcroute.Controls(i).Text

        MsgBox(affichage)
    End Sub
End Class
