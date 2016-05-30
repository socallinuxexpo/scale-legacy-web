<? $name = 'Patrick Mochel';
require("../common/common.inc"); common_header(); ?>

	<p CLASS="bgblack">Patrick Mochel</p>

	<p CLASS="bgwhite" ALIGN="JUSTIFY">
	Patrick Mochel gets paid to play with big toys and have a lot of fun,
	while occasionally moonlighting as a kernel hacker. Patrick has made
	numerous contributions to the Linux kernel.<br><br>

	<i>Patrick is giving a talk on Linux's SysFS</i><br><br>

	Sysfs - A Unified, Safe, and Extensible Model for Exporting Kernel
	Attributes<br><br>

	All subsystems in the kernel currently have some way of exposing and/or
	modifying attributes during runtime. Typically, this is done via procfs or
	sysctl.<br><br>

	While these mechanisms are relatively easy to use, they expose several
	problems. The implementation of both is old and often neglected. There are
	no formatting or content standards for procfs. The processing and
	formatting of data is the responsibility of the owner of the file. These
	implementations are usually copied from other implementors, and usually
	buggy.<br><br>

	Driverfs was created to expose the the kernel data structures of the new
	driver model, including physical devices, as well as bus, class, and
	device-specific drivers, and the linkage between each. Each entity gets a
	directory in the filesystem, creating a standard, default location to
	expose attributes to userspace.<br><br>

	Driverfs provides an interface to very easily define type-safe attributes.
	The owners of the attributes are free from the responsibility of formatting
	and parsing the data, preventing several bugs alone. Plus, all events are
	properly synchronized and objects reference counted, preventing against
	race conditions.<br><br>

	Driverfs is also extensible. It allows any group of objects to maintain a
	hierarchy and expose an interface to export type-safe and race-free
	attributes.<br><br>

	During the 2002 Kernel Summit, it was decided that other subsystems should
	have such an easy and safe interface to export attributes. Instead of
	creating separate filesystems for each subsystem to expose attributes,
	Linus said to use the same filesystem.<br><br>

	This decision is causing driverfs to be renamed to sysfs. The interfaces
	and structures are being refined. Other subsystems are being converted to
	use it instead of their own procfs or sysctl format.<br><br>

	</p>

<? common_footer(); ?>

