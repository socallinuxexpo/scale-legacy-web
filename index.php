<?php
if ( preg_match('/^.*:.*:.*/', $_SERVER[REMOTE_ADDR]) ) {
	$metatime = 5;
	$ipv6yes = TRUE;
} else {
	$metatime = 1;
	$ipv6yes = FALSE;
}
?>
<http>
<head>
<style>
div {
margin: 0 auto;
text-align: center;
font-size: 16px;
border: 1px dotted #c0c0c0;
padding: 20px;
width: 400px;
margin-top: 30px;
}
</style>
<meta http-equiv="Refresh" content="<?php echo "$metatime"; ?>; URL=scale10x">
</head>
<body>
<?php if ( $ipv6yes )  { ?>
<div>We see you're on IPv6. <img src="http://www.socallinuxexpo.org/scale9x/sites/all/themes/scale3/smiley%20face.jpg"><br /><br />You'll be redirected shortly. Or, <a href="/scale10x/">click here</a>.</div>
<?php } ?>
</body>
</html>
