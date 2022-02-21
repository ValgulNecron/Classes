<?php
function SQLConnection(){
	$mysqli = new mysqli("localhost", "root", "root", "journeporteouverte2022");
	if ($mysqli->connect_errno) {
    	echo "Échec lors de la connexion à MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}
	else{
		return $mysqli;
	}
}
function SQLlastIDuVisiteur($Nom, $Prenom, $NomFormation, $NomEtablisement, $Email, $Ville, $Rue, $CodePostale, $NumeroDeRue, $NumeroDeTelephone, $mysqli){
	$resultSQL=$mysqli->query("SELECT CodeVi from visiteur where NomVie='".$Nom."' AND PrenomVi='".$Prenom."' AND VilleVi='".$Ville."' AND NomRueVi='".$Rue."' AND NumRueVi='".$NumeroDeRue."' AND CodePVi='".$CodePostale."' AND NumTelVi='".$NumeroDeTelephone."' AND MailVi='".$Email."' AND NomAForma='".$NomFormation."' AND EtabliAForma='".$NomEtablisement."' order by CodeVi DESC LIMIT 1;");
	return $resultSQL;
}
function SQLInsertionDonneeVi($Nom, $Prenom, $NomFormation, $NomEtablisement, $Email, $Ville, $Rue, $CodePostale, $NumeroDeRue, $NumeroDeTelephone, $mysqli){
	$mysqli->query("INSERT INTO visiteur(NomVie, PrenomVi, VilleVi, NomRueVi, NumRueVi, CodePVi, NumTelVi, MailVi, NomAForma, EtabliAForma) values('".$Nom."','".$Prenom."','".$Ville."','".$Rue."','".$NumeroDeRue."','".$CodePostale."','".$NumeroDeTelephone."','".$Email."','".$NomFormation."','".$NomEtablisement."');");
}
function CloseConnection($mysqli){
	$mysqli->close();
}
function SQLInsertionDonneeFormulaire($interet, $postuler, $id, $codeForma,$mysqli){
	$mysqli->query("INSERT INTO formulaire(CodeVi,FormaC,FormaViInte,FormaViPost) values('".$id."','".$codeForma."','".$interet."','".$postuler."');");
}
function RealId($id){
	foreach($id as $ligne){
		$realId=$ligne['CodeVi'];
	}
	return $realId;
}
function VerifPostuler($postuler){
	if($postuler=="on"){
		return 1;
	}
	else{
		return 0;
	}
}
function VerifInteret($interet){
	if($interet=="on"){
		return 1;
	}
	else{
		return 0;
	}
}
session_start();
$codeForma= $_SESSION['codeFormaS'];
$_SESSION['codeFormaS'] = $codeForma;
$nom=$_POST['Nom'];
$prenom=$_POST['Prénom'];
$nomFormation=$_POST['NomFormation'];
$nomEtablisement=$_POST['NomEtablisement'];
$email=$_POST['Email'];
$ville=$_POST['Ville'];
$rue=$_POST['Rue'];
$codePostale=$_POST['CodePostale'];
$numeroDeRue=$_POST['NumeroDeRue'];
$numeroDeTelephone=$_POST['NumeroDeTelephone'];
$interet=$_POST['Interet'];
$postuler=$_POST['Postuler'];
$accepteTraitement=$_POST['AccepteTraitement'];
$postulerVerif=VerifPostuler($postuler);
$interetVerif=VerifInteret($interet);
if($accepteTraitement){
	$mysqli=SQLConnection();
	SQLInsertionDonneeVi($nom, $prenom, $nomFormation, $nomEtablisement, $email, $ville, $rue, $codePostale, $numeroDeRue, $numeroDeTelephone, $mysqli);
	$id=SQLlastIDuVisiteur($nom, $prenom, $nomFormation, $nomEtablisement, $email, $ville, $rue, $codePostale, $numeroDeRue, $numeroDeTelephone, $mysqli);
	$realId=RealId($id);
	SQLInsertionDonneeFormulaire($interetVerif, $postulerVerif, $realId, $codeForma,$mysqli);
	CloseConnection($mysqli);
	echo "<script>alert('ok');</script>";
}
include('formulaire.html');
?>