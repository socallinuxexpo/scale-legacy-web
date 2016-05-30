<?php
function common_header() {
	global $name;
	?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN"
    "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
	<!-- original design by: Ruthsarian
	http://webhost.bridgew.edu/etribou/layouts/2col_footer/ //-->
	<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
	<meta http-equiv="Content-Language" content="en" />
	<meta name="Keywords" content="scale, linux, expo, southern california,
	usc, usclug, ucla, uclalug, sclug, simi valley, conejo valley,
	los angeles, linux expo usa, linux conference, so cal linux, scale 3x, scale 4x" />
	<meta name="Description" content="Southern California Linux Expo
	Webpage" />
	<link rel="shortcut icon" href="/favicon.ico" />
	<link rel="stylesheet" type="text/css" href="/past/2006/common/simple.css" />
	<style type="text/css" title="SCALE">
		@import "/past/2006/common/complex.css";
		@import "/past/2006/common/complex_hnav.css";
		@import "/past/2006/common/complex_vnav.css";
	</style>
	<link rel="stylesheet" type="text/css" href="/past/2006/common/theme.css" />
	<title>SCALE: Southern California Linux Expo 2006
	- <? echo $name ?></title>
</head>
<body>

<div id="oldbrowser">
<p>
	This site will look much better in a browser that supports 
	<a href="http://www.webstandards.org/upgrade/" 
	title="Download a browser that complies with Web standards.">web 
	standards</a>, but it is accessible to any browser or Internet 
	device.
</p>
</div>

<div id="pageFrame">

<div id="masthead">
	<img src="/past/2006/images/banner.png" alt="The Fourth Annual Southern California Linux Expo" />
</div>

<div id="leftColumn">
	<div id="innerLeftColumn">
		<div id="vnav">

		<ul>
		<li>Current Year</li>
		<li><a href="/">Home</a></li>
	        <li>2006 Archive</li>
		<li><a href="/past/2006/">Introduction</a></li>
		<li><a href="/past/2006/location.php">Location</a></li>
		<li><a href="/past/2006/speakers.php">Speakers</a></li>
		<li><a href="/past/2006/odf/">OpenDocument Workshop</a></li>
		<li><a href="/past/2006/exhibitions.php">Exhibitions</a></li>
		<!--
		<li><a href="/past/2006/layout.php">Floor Plan</a></li>
		//-->
		<li><a href="/past/2006/hours.php">Schedule</a></li>
		<li><a href="/past/2006/sponsors.php">Sponsors</a></li>
		<li><a href="/past/2006/events.php">Social Events</a></li>
		<li><a href="/past/2006/committees.php">Committees</a></li>
		<li><a href="/past/2006/pr.php">Media</a></li>
		<li><a href="/past/2006/pr/pr_20050620.php">Call For Papers</a></li>
		<li><a href="/past/">Past Events</a></li>
		</ul>

		<p>
		Platinum Sponsor:<br />
		<a href="http://www.ibm.com/">
		<img src="/past/2006/images//sponsors/ibmsmall.png"
		width="125" height="58" alt="IBM" /></a><br />
		Silver Sponsors:<br />
		<a href="http://www.google.com/">
		<img src="/past/2006/images//sponsors/googlesmall.png"
		width="125" height="43" alt="Google" /></a>
		<a href="http://www.uversainc.com/">
		<img src="/past/2006/images//sponsors/uversa.jpg"
		width="125" height="58" alt="Uversa" /></a><br />
		Media Sponsors:<br />
		<a href="http://www.userfriendly.org/">
		<img src="/past/2006/images//sponsors/uf.png"
		width="125" height="60" alt="User Friendly"></a>
		<a href="http://freesoftwaremagazine.com/">
		<img src="/past/2006/images//sponsors/fsm_btn.gif"
		width="125" height="125" alt="FSM"></a>
		<a href="http://www.o3magazine.com/">
		<img src="/past/2006/images//sponsors/o3square.jpg"
		width="125" height="125" alt="O3"></a>
		<a href="http://www.linuxjournal.com/">
		<img src="/past/2006/images//sponsors/lj.gif"
		width="125" height="125" alt="Linux Journal"></a>
		<a href="http://www.desktoplinuxsummit.com/">
		<img src="/past/2006/images//sponsors/dls.jpg"
		width="125" height="122" alt="Desktop Linux Summit"></a>

		</p>
		</div>

		<!--
		<p>
			<a href="http://validator.w3.org/check/referer"><img
				src="http://www.w3.org/Icons/valid-xhtml11"
				alt="Valid XHTML 1.1!" height="31" width="88" /></a>
		</p>
		<p>					
			<a href="http://jigsaw.w3.org/css-validator/"><img
				src="http://jigsaw.w3.org/css-validator/images//vcss"
				alt="Valid CSS!" height="31" width="88"/></a>
		</p>
		//-->

	</div>
</div>

<div id="contentColumn">
	<div id="innerContentColumn">
	<?
}

function common_footer() {
?>

	</div>
</div>
<div id="footer">
	<div id="innerFooter">
		<div id="hnav">
			<ul>
			<li><a
			href="/past/2006/">SCALE 4X: Southern California Linux Expo 2006</a><span> | </span></li><li><a
			href="/contact.php">Contact Us</a><span> | </span></li><li><a 
			href="/about.php">About</a></li>
			</ul>
		</div>
	</div>
</div>
</div>
</body>
</html>

<?
}

?>


