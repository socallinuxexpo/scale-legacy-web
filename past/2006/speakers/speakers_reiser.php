<?php $name = 'Hans Reiser';
require("../common/common.inc"); common_header(); ?>

	<h3>Hans Reiser</h3>

	<p>
	Hans Reiser is the architect of the Reiser filesystem and founder of Namesys.
	</p>

	<h3>The Reiser4 Filesystem</h3>

	<p>
	Reiser4 is a storage layer which contains the prerequisites for adding
	semi-structured data querying to the filesystem namespace.  This storage
	layer emulates the semantics of traditional filesystem architectures,
	but because it had to solve rather than bypass a number of hard design
	problems for the sake of the future expanded semantics, this emulation
	runs at roughly twice the performance of traditional filesystems.  The
	talk will discuss dancing trees vs. balanced trees, why plugins are
	essential, and how we got our performance gains.  If time permits, we
	will discuss the expanded semantics.
	</p>

	<!--
	<p>
	Presentation Slides: <a href="FOO">BAR</a>
	</p>
	//-->

<?php common_footer(); ?>

