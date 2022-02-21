<?php
function SQLConnection($host, $userSQL, $MDPSQL, $DBSQL){
	$mysqli = new mysqli($host, $userSQL, $MDPSQL, $DBSQL);
	if ($mysqli->connect_errno) {
    	echo "Échec lors de la connexion à MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}
	return $mysqli;
}
function RequeteSQL($mysqli){
	$resultSQL=$mysqli->query("SELECT FormaC FROM formation;");
	return $resultSQL;
}
function RequeteSQL1($mysqli, $codeForma){
	$resultSQL=$mysqli->query("SELECT motDePasse FROM formation where formaC='".$codeForma."';");
	return $resultSQL;
}
function CloseConnection($mysqli){
	$mysqli->close();
}
function VerifUser($codeForma, $resultSQL){
	$test=false;
	foreach($resultSQL as $ligne){
		if($codeForma==$ligne['FormaC']){
			$test=true;
		}
	}
	if ($test ) 
	{
		return true;
	}
	else{
		return false;
	}
}
function VerifPassword($MotDePasse, $resultSQL){
	$test=false;
	foreach($resultSQL as $ligne){
		if($MotDePasse==$ligne['motDePasse']){
			$test=true;
		}
	}
	if ($test )
	{
		return true;
	}
	else{
		return false;
	}
}
function ConnetionAccept($verifUser, $verifPassword){
	if ($verifPassword and $verifUser)	 {
		return true;
	}
	else{
		return false;
	}
}

session_start();
$mysqli = SQLConnection("localhost", "SELECTER", "Select12!", "journeporteouverte2022");
$resultSQL=RequeteSQL($mysqli);
CloseConnection($mysqli);
$motDePasse=$_POST['PasswordUser'];
$codeForma=$_POST['SelectUser'];
$verifUser=VerifUser($codeForma,$resultSQL);
$verifPassword=false;
if ($verifUser) {
	$mysqli = SQLConnection("localhost", "SELECTER", "Select12!", "journeporteouverte2022");
	$resultSQL1=RequeteSQL1($mysqli, $codeForma);
	CloseConnection($mysqli);
	$verifPassword=VerifPassword($motDePasse,$resultSQL1);
	$_SESSION['codeFormaS'] = $codeForma;	
}
$accept=ConnetionAccept($verifUser, $verifPassword);

if($codeForma=="STATISTIQUE" and $accept){
	include('Statistique.php');
}
elseif ($accept){
	include('formulaire.html');
}
else{
	echo "<p>Mots de passe ou nom d'utilisateur incorecte<?p>";
	include('index.php');
}
?>