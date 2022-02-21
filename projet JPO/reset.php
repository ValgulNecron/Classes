<?php
session_start();
$codeForma= $_SESSION['codeFormaS'];
$_SESSION['codeFormaS'] = $codeForma;
include('formulaire.html');
?>