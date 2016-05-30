<? $name = 'John Ousterhout';
require("/home/webroot/common/common.inc"); common_header(); ?>

	<h3>John Ousterhout</h3>
	<img SRC="/images/speakers/ousterhout.jpg" WIDTH="150" HEIGHT="200"
       	ALIGN="LEFT" hspace="10" BORDER="0" ALT="John Ousterhout">
	<p>
	John K. Ousterhout is founder and CEO of Electric Cloud, Inc. He is also
	creator of the Tcl scripting language and is well known for his work in
	distributed operating systems, high-performance file systems, and user
	interfaces. Prior to founding Electric Cloud, Ousterhout was founder
	and CEO of Scriptics Corporation, Distinguished Engineer at Sun
	Microsystems, and Professor of Computer Science at U.C. Berkeley. He
	received a BS degree in Physics from Yale University and a PhD in
	Computer Science from Carnegie Mellon University. Ousterhout is a
	member of the National Academy of Engineering and a Fellow of the ACM.
	He has received numerous awards, including the ACM Software System
	Award, the ACM Grace Murray Hopper Award, the National Science
	Foundation Presidential Young Investigator Award, and the U.C. Berkeley
	Distinguished Teaching Award.
	</p>

	<h3>Abstract</h3>

	<p>
	Almost all software projects with more than a few dozen developers are
	plagued by slow builds that sap productivity, extend release schedules,
	and impact product quality. Parallel builds offer the potential of
	significant speedups, but previous attempts at parallelizing builds
	have had only modest success, primarily due to the lack of complete
	dependency information.<br /><br />
	In this talk he will present the architecture of Electric Cloud, a GNU
	Make-compatible build system that uses clusters of inexpensive servers
	to run massively-parallel builds. The key to deliver correct parallel
	builds is an approach that deduces dependencies on-the-fly by
	monitoring file accesses during the build, so that the system knows
	when it is or isn't safe to run build steps in parallel.
	He will also describe other aspects of the system, such as its
	versioning network file system and its use of peer-to-peer protocols
	for moving file	data efficiently. Finally, He will compare this
	approach to other approaches such as distcc.
	</p>

<? common_footer(); ?>

