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
	<link rel="stylesheet" type="text/css" href="/past/2005/common/simple.css" />
	<style type="text/css" title="SCALE">
		@import "/past/2005/common/complex.css";
		@import "/past/2005/common/complex_hnav.css";
		@import "/past/2005/common/complex_vnav.css";
	</style>
	<link rel="stylesheet" type="text/css" href="/past/2005/common/theme.css" />
	<title>SCALE: Southern California Linux Expo 2005
	- <?php echo $name ?></title>
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
	<img src="/past/2005/images/banner.png" alt="The Third Annual Southern California Linux Expo" />
</div>

<div id="leftColumn">
	<div id="innerLeftColumn">
		<div id="vnav">

		<ul>
		<li>Current Year</li>
		<li><a href="/">Home</a></li>
		<li>2005 Archive</li>
		<li><a href="/past/2005/">Introduction</a></li>
		<li><a href="/past/2005/location.php">Location</a></li>
		<li><a href="/past/2005/speakers.php">Speakers</a></li>
		<li><a href="/past/2005/exhibitions.php">Exhibitions</a></li>
		<li><a href="/past/2005/layout.php">Floor Plan</a></li>
		<li><a href="/past/2005/hours.php">Schedule</a></li>
		<li><a href="/past/2005/sponsors.php">Sponsors</a></li>
		<li><a href="/past/2005/events.php">Social Events</a></li>
		<li><a href="/past/2005/committees.php">Committees</a></li>
		<li><a href="/past/2005/pr.php">Media</a></li>
		<li><a href="/past/">Past Events</a></li>
		</ul>

		</div>

		<!--
		<p>
			<a href="http://validator.w3.org/check/referer"><img
				src="http://www.w3.org/Icons/valid-xhtml11"
				alt="Valid XHTML 1.1!" height="31" width="88" /></a>
		</p>
		<p>					
			<a href="http://jigsaw.w3.org/css-validator/"><img
				src="http://jigsaw.w3.org/css-validator/images/vcss"
				alt="Valid CSS!" height="31" width="88"/></a>
		</p>
		//-->

	</div>
</div>

<div id="contentColumn">
	<div id="innerContentColumn">
	<?php
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
			href="/past/2005/">SCALE 3X: Southern California Linux Expo 2005</a><span> | </span></li><li><a
			href="/past/2005/contact.php">Contact Us</a><span> | </span></li><li><a 
			href="/past/2005/about.php">About</a></li>
			</ul>
		</div>
	</div>
</div>
</div>
</body>
</html>

<?php
}

?>


