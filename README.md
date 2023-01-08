# libcyclotomic

C++ library for cyclotomic field arithmetic, based directly on GAP
source.

I am literally copying
<https://github.com/gap-system/gap/blob/master/src/cyclotom.c>,
turning it into a library, and seeing if I can make it easy to use, with
a nice modern C++ interface, and perhaps faster.

One problem I had while writing
[our cyclotomic library in Rust](https://github.com/CyclotomicFields/cyclotomic)
is that it's hard to directly benchmark like-for-like vs GAP. It's
kind of hard to compare cache misses, performance, etc, when there's
all this other stuff going on in GAP.
