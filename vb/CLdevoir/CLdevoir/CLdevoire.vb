Public Class CLdevoire
    Private noteDevoir As Double
    Private nomProfesseur As String
    Public Function GetNote()
        GetNote = noteDevoir
    End Function
    Public Sub SetNote(ByVal valNote As Double)
        noteDevoir = valNote
    End Sub
    Public Sub SetProfesseur(ByVal valProfesseur As String)
        nomProfesseur = valProfesseur
    End Sub
    Public Function GetNom()
        GetNom = nomProfesseur
    End Function
    Public Function CalculeMoyenne(ByVal OBJ As CLdevoir.CLdevoire)
        Dim moyenne As Double
        moyenne = Me.GetNote + OBJ.GetNote
        CalculeMoyenne = moyenne
    End Function
    Public Function Message()
        Dim note As String
        note = Me.GetNote().ToString
        Message = "Pour le devoir Introduction à l'objet, Elève Avémar à obtenu la note de " + note + " évalué par " + Me.GetNom()
    End Function
End Class
