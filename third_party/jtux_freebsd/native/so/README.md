jtux
====

Patched version of jtux library, originally available at http://basepath.com/aup/jtux/index.htm

This includes the infamous `jtux.PS3-YDL6.1.patch.txt` patch file, and has also been patched to work
on FreeBSD.

Installing on FreeBSD
--------------------------

Assuming you are running FreeBSD (tested on 8.something with ports/java/jdk16), just do the following:

Download and extract the source of this repo.

<pre>
cd jtux
make
</pre>

(Yes, I forked this for Crashplan)

License
-------

This code was all originally written by Marc J. Rochkind, patched by someone, and with a build system by the guy I forked this from plus me. Yay for the internet!

It is licensed under the BSD license. http://basepath.com/aup/copyright.htm
