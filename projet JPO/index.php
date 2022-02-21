
<?php
function SQLConnectionS($host, $userSQL, $MDPSQL, $DBSQL){
	$mysqli = new mysqli($host, $userSQL, $MDPSQL, $DBSQL);
	if ($mysqli->connect_errno) {
    	echo "Echec lors de la connexion a MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
  }
	return $mysqli;
}
function CloseConnectionS($mysqli){
	$mysqli->close();
}
function SQLRequestS($mysqli){
  $resultSQL=$mysqli->query("SELECT FormaC FROM formation;");
  return $resultSQL;
}


$mysqli=SQLConnectionS("localhost", "SELECTER", "Select12!", "journeporteouverte2022");
$resultSQL=SQLRequestS($mysqli);
$a="a";
CloseConnectionS($mysqli);
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>login</title>
  <link href="login.css" rel="stylesheet" >
  </head>
  <body class="Body">
    <form action="script.php" method="POST" class="Form">
      <label class="CodeFormation">code formation</label>
      <br>
      <select name="SelectUser" id="SelectUser">
        <?php
          foreach($resultSQL as $ligne){
        ?>
            <option value="<?php echo $ligne['FormaC']; ?> "><?php echo $ligne['FormaC'];  ?></option>
        <?php
          } 
        ?>
      </select>
      <br>  
      <label class="MotDePasse">mot de passe</label>
      <br>
      <input type="password" name="PasswordUser" required class="form-control MotDePasse Input">
      <br><br>
      <input type="submit" name="Button" value="connexion">
    </form>
  </body>
</html>