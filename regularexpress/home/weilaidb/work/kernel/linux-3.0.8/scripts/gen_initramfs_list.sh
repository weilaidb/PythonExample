#!/bin/sh
# Copyright (C) Martin Schlemmer <azarah@nosferatu.za.org>
# Copyright (C) 2006 Sam Ravnborg <sam@ravnborg.org>
#
# Released under the terms of the GNU GPL
#
# Generate a cpio packed initramfs. It uses gen_init_cpio to generate
# the cpio archive, and then compresses it.
# The script may also be used to generate the inputfile used for gen_init_cpio
# This script assumes that gen_init_cpio is located in usr/ directory
# error out on errors
set -e
usage()
# awk style field access
# $1 - field number; rest is argument string
field()
list_default_initramfs()
default_initramfs()
filetype()
list_print_mtime()
print_mtime()
list_parse()
# for each file print a line in following format
# <filetype> <name> <path to file> <octal mode> <uid> <gid>
# for links, devices etc the format differs. See gen_init_cpio for details
parse()
unknown_option()
list_header()
header()
# process one directory (incl sub-directories)
dir_filelist()
# if only one file is specified and it is .cpio file then use it direct as fs
# if a directory is specified then add all files in given direcotry to fs
# if a regular file is specified assume it is in gen_initramfs format
input_file()
prog=$0
root_uid=0
root_gid=0
dep_list=
cpio_file=
cpio_list=
output="/dev/stdout"
output_file=""
is_cpio_compressed=
compr="gzip -n -9 -f"
arg="$1"
case "$arg" in
"-l")	# files included in initramfs - used by kbuild
dep_list="list_"
echo "deps_initramfs := $0 \\"
shift
;;
"-o")	# generate compressed cpio image named $1
shift
output_file="$1"
cpio_list="$(mktemp $/cpiolist.XXXXXX)"
output=$
echo "$output_file" | grep -q "\.gz$" && compr="gzip -n -9 -f"
echo "$output_file" | grep -q "\.bz2$" && compr="bzip2 -9 -f"
echo "$output_file" | grep -q "\.lzma$" && compr="lzma -9 -f"
echo "$output_file" | grep -q "\.xz$" && \
compr="xz --check=crc32 --lzma2=dict=1MiB"
echo "$output_file" | grep -q "\.lzo$" && compr="lzop -9 -f"
echo "$output_file" | grep -q "\.cpio$" && compr="cat"
shift
;;
esac
while [ $# -gt 0 ]; do
arg="$1"
shift
case "$arg" in
"-u")	# map $1 to uid=0 (root)
root_uid="$1"
shift
;;
"-g")	# map $1 to gid=0 (root)
root_gid="$1"
shift
;;
"-d")	# display default initramfs list
default_list="$arg"
$default_initramfs
;;
"-h")
usage
exit 0
;;
*)
case "$arg" in
"-"*)
unknown_option
;;
*)	# input file/dir - process it
input_file "$arg" "$#"
;;
esac
;;
esac
done
# If output_file is set we will generate cpio archive and compress it
# we are careful to delete tmp files
if [ ! -z $ ]; then
if [ -z $ ]; then
timestamp=
if test -n "$KBUILD_BUILD_TIMESTAMP"; then
timestamp="$(date -d"$KBUILD_BUILD_TIMESTAMP" +%s || :)"
if test -n "$timestamp"; then
timestamp="-t $timestamp"
fi
fi
cpio_tfile="$(mktemp $/cpiofile.XXXXXX)"
usr/gen_init_cpio $timestamp $ > $
else
cpio_tfile=$
fi
rm $
if [ "$" = "compressed" ]; then
cat $ > $
else
(cat $ | $  - > $) \
|| (rm -f $ ; false)
fi
[ -z $ ] && rm $
fi
exit 0
