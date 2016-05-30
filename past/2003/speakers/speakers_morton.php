<?php $name = 'Andrew Morton';
require("../common/common.inc"); common_header(); ?>

	<p CLASS="bgblack">Andrew Morton</p>

	<p CLASS="bgwhite" ALIGN="JUSTIFY">
	<img SRC="/past/2003/images/speakers/morton.gif" WIDTH="150" HEIGHT="200"
		ALIGN="RIGHT" hspace="10" BORDER="0" ALT="Andrew Morton">
	A 43 year-old English-born Aussie, Andrew Morton has worked on a wide
	range of kernel components, including ext3 on 2.4 and the low-latency
	patch. Andrew Morton will be  the maintainer for the Linux 2.6 kernel
	and he recently joined The Open Source Development Labs (OSDL) along with
	Linux Torvalds. Previously Andrew was a member of the System Software
	group at Digeo, Inc.<br><br>

	<i><b>Andrew Morton's talk is titled "There is no buffercache"</b></i><br><br>

	An overview of the Linux pagecache, VFS, filesystem and VM nexus.<br><br>

	The operation of and interworking between:<br><br>

	<ul>
	<li>The pagecache
	<li>The page LRU
	<li>The buffer layer
	<li>Filesystems
	<li>Page reclaim
	<li>Inode and dentry cache reclaim
	<li>The 2.4 buffer LRU: why it was bad, and how it died
	<li>The 2.6 writeback design, and how the VFS connects to the new block BIO layer
	<li>What's missing, and what needs to be done in 2.7
	</ul>

	</p>

<?php common_footer(); ?>

