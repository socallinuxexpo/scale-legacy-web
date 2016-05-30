<?php
function common_header() {
	global $name;
	?>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
	"http://www.w3.org/TR/html4/loose.dtd">

<html>
<head>
	<title>SCALE: Southern CaliforniA Linux Expo 2002 - <? echo $name ?></title>
	<meta HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=ISO-8859-1">
	<meta HTTP-EQUIV="Content-Language" CONTENT="en">
	<meta NAME="Keywords" CONTENT="scale, linux, expo, southern california, usc,
		usclug, ucla, uclalug, sclug, simi valley, conejo valley, los angeles">
	<meta NAME="Description" CONTENT="Southern CaliforniA Linux Expo Webpage">
	<link REL="StyleSheet" TYPE="text/css" HREF="/past/2002/common/common.css">
	<link REL="shortcut icon" HREF="/favicon.ico">
</head>
<body>

<table BORDER="0" WIDTH="760" CELLSPACING="0" CELLPADDING="0">
<tr>
	<td WIDTH="760" VALIGN="TOP" COLSPAN="3" CLASS="bgwhite">
		<div ALIGN="CENTER">
		<img SRC="/past/2002/images/banner.jpg" WIDTH="760" HEIGHT="80" ALT="banner">
		</div>
	</td>
</tr>
<tr>

	<td COLSPAN="3">&nbsp;</td>
</tr>
<tr>
	<td WIDTH="150" VALIGN="TOP" CLASS="bgcolored">
		<br>
		<b>Current Year:</b><br><br>
		<a HREF="/">Home</a><br><br>
		<b>2002 Archive:</b><br><br>
		<a HREF="/past/2002/index.php">Introduction</a><br><br>
		<a HREF="/past/2002/location.php">Location</a><br><br>
		<a HREF="/past/2002/speakers.php">Speakers</a><br><br>
		<a HREF="/past/2002/presentations.php">Presentations</a><br><br>
		<a HREF="/past/2002/exhibitions.php">Exhibitions</a><br><br>
		<a HREF="/past/2002/pictures/index.php">Event Pictures</a><br><br>
		<a HREF="/past/2002/hours.php">Schedule</a><br><br>
		<a HREF="/past/2002/sponsors.php">Sponsors</a><br><br>
		<a HREF="/past/2002/committees.php">Committees</a><br><br>
	</td>
	<td WIDTH="10">&nbsp;</td>
	<td WIDTH="600" VALIGN="TOP">

	<?
}

function common_footer() {
?>

</td>
</tr>
<tr>

	<td COLSPAN="3">&nbsp;</td>
</tr>
</table>

<table BORDER="0" WIDTH="760" CELLSPACING="0" CELLPADDING="0">
<tr>
	<td VALIGN="TOP" CLASS="bgblack">
		<div ALIGN="LEFT">
		| SCALE:
		<FONT COLOR="#FF0000">S</FONT>outhern
		<FONT COLOR="#FF0000">C</FONT>aliforni<FONT COLOR="#FF0000">A</FONT>
		<FONT COLOR="#FF0000">L</FONT>inux
		<FONT COLOR="#FF0000">E</FONT>xpo
		2002 |
		</div>
	</td>
	<td VALIGN="TOP" CLASS="bgblack">
		<div ALIGN="RIGHT">|
		<a HREF="/past/2002/contact.php" CLASS="black">Contact Us</a> |
		<a HREF="/past/2002/about.php" CLASS="black">About</a> |
		</div>
	</td>
</tr>
</table>

</body>
</html>

<?
}

?>


