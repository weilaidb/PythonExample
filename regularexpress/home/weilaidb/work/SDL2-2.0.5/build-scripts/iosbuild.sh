#!/bin/sh
#
# Build a fat binary for iOS
# Based on fatbuild.sh and code from the Ignifuga Game Engine
# Number of CPUs (for make -j)
NCPU=`sysctl -n hw.ncpu`
if test x$NJOB = x; then
NJOB=$NCPU
fi
# SDK path
XCODE_PATH=`xcode-select --print-path`
if [ -z "$XCODE_PATH" ]; then
echo "Could not find XCode location (use xcode-select -switch to set the correct path)"
exit 1
fi
prepare_environment()
prepare_environment "armv6"
echo "Building with iOS SDK v$SDK_VERSION for iOS >= $MIN_OS_VERSION"
#
# Find the configure script
#
srcdir=`dirname $0`/..
srcdir=`cd $srcdir && pwd`
auxdir=$srcdir/build-scripts
cd $srcdir
#
# Figure out which phase to build:
# all,
# configure, configure-armv6, configure-armv7, configure-i386
# make, make-armv6, make-armv7, make-i386, merge
# clean
if test x"$1" = x; then
phase=all
else
phase="$1"
fi
case $phase in
all)
configure_armv6="yes"
configure_armv7="yes"
configure_i386="yes"
make_armv6="yes"
make_armv7="yes"
make_i386="yes"
merge="yes"
;;
configure)
configure_armv6="yes"
configure_armv7="yes"
configure_i386="yes"
;;
configure-armv6)
configure_armv6="yes"
;;
configure-armv7)
configure_armv7="yes"
;;
configure-i386)
configure_i386="yes"
;;
make)
make_armv6="yes"
make_armv7="yes"
make_i386="yes"
merge="yes"
;;
make-armv6)
make_armv6="yes"
;;
make-armv7)
make_armv7="yes"
;;
make-i386)
make_i386="yes"
;;
merge)
merge="yes"
;;
clean)
clean_armv6="yes"
clean_armv7="yes"
clean_i386="yes"
;;
clean-armv6)
clean_armv6="yes"
;;
clean-armv7)
clean_armv7="yes"
;;
clean-i386)
clean_i386="yes"
;;
*)
echo "Usage: $0 [all|configure[-armv6|-armv7|-i386]|make[-armv6|-armv7|-i386]|merge|clean[-armv6|-armv7|-i386]]"
exit 1
;;
esac
#
# Create the build directories
#
for dir in build build/armv6 build/armv7 build/i386; do
if test -d $dir; then
:
else
mkdir $dir || exit 1
fi
done
#
# Build the armv6 binary
#
prepare_environment "armv6"
if test x$configure_armv6 = xyes; then
(cd build/armv6 && \
sh ../../configure $CONFIG_FLAGS CC="$CC" CXX="$CXX" CFLAGS="$CFLAGS" LDFLAGS="$LDFLAGS") || exit 2
# configure is not yet fully ready for iOS, some manual patching is required
cp include||'`
(lipo -create -o $output/libSDL2.a armv6/build/.libs/libSDL2.a armv7/build/.libs/libSDL2.a i386/build/.libs/libSDL2.a &&
lipo -create -o $output/libSDL2main.a armv6/build/libSDL2main.a armv7/build/libSDL2main.a i386/build/libSDL2main.a &&
cp -r armv6/include ios
echo "Build complete!" &&
echo "Files can be found under the build/ios directory.") || exit 4
cd ..
fi
#
# Clean up
#
do_clean()
if test x$clean_armv6 = xyes; then
do_clean rm -r build/armv6
fi
if test x$clean_armv7 = xyes; then
do_clean rm -r build/armv7
fi
if test x$clean_i386 = xyes; then
do_clean rm -r build/i386
fi
