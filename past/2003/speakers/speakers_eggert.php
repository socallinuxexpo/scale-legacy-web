<?php $name = 'Paul Eggert';
require("../common/common.inc"); common_header(); ?>

	<p CLASS="bgblack">Paul Eggert</p>

	<p CLASS="bgwhite" ALIGN="JUSTIFY">
	Paul Eggert lectures in the UCLA Computer Science Department in the
	area of software systems and languages.  Previously he was the CTO of
	Twin Sun, Inc., El Segundo, CA, a strategic technical services company
	for the Japanese market that has produced several successful products
	based on GNU, Linux, and BSD software.  Paul has contributed to many
	important GNU projects, including Autoconf, Bison, Diffutils, GNU
	Emacs, GCC, the GNU C Library, the GNU core utilities, and GNU tar.
	He is currently a member of the GNU C Library Steering Committee and
	is a maintainer or developer for far too many GNU projects.<br><br>


	Topic:<br>
	<i>Core Woes in the GNU utilities and C library</i><br><br>
	The GNU core utilities and C library reside just above the Linux
	kernel and underly many important GNU/Linux applications.  Ideally
	this code would be entirely stable and bug-free; unfortunately,
	several recent exploits have taken advantage of underlying bugs in
	this area.  Problems that afflict the core utilities and C library
	today may well affect your software tomorrow.  We'll discuss a few of
	the methods used by the exploits, along with techniques for preventing
	similar problems in the future.

	</p>

<?php common_footer(); ?>

