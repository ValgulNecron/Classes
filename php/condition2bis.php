<?php
$moyenne=10;
switch ($moyenne) {
	case $moyenne<8:
		echo "recale";
		break;
	case $moyenne>8 and $moyenne<10 :
		echo "ratrapage";
		break;
	case $moyenne>=10 :
		echo "c'est correct";
		break;
	//default:echo "c'est vraiment mauvais";
}