ZenBSD
======

ZenBSD is a server OS based on NetBSD.

Building
--------

You can cross-build ZenBSD from most UNIX-like operating systems.
To build for amd64 (x86_64), in the src directory:

    ./build.sh -U -u -j4 -m amd64 -O ~/obj release

Additional build information available in the [BUILDING NetBSD](BUILDING) file.