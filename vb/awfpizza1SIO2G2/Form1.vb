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
        Dim premier As Boolean
        premier = True
        R = 0
        i = 0
        cbing = GBing.Controls(i)
        For i = 1 To 8
            If cbing.Checked Then
                If premier = True Then
                    affichage += vbCrLf & cbing.Text
                    R += 1
                End If
            End If
        Next


        If R = 5 Then
            MsgBox("trop d'ingrediant")
        ElseIf R = 0 Then
            MsgBox("pizza pauvre")
        Else
        End If


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
        MsgBox(affichage)
    End Sub

    Private Sub BTreset_Click(sender As Object, e As EventArgs) Handles BTreset.Click
        Me.Controls.Clear()
        Me.InitializeComponent()
    End Sub

    Private Sub btexit_Click(sender As Object, e As EventArgs) Handles btexit.Click
        Me.Close()
    End Sub
End Class