#!/bin/sh
# Convert standard input to a C char array, write to a file, then create an
# MD5 sum of that file and append said MD5 sum as char array to the file.
[ -n "$1" ] || exit 1
# Filter out whitespace, empty lines, and comments.
sanitize()
# Convert stdin to a \0-terminated char array.
dump()
# Print MD5 hash w/o newline character to not embed the character in the array.
hash()
trap 'rm -f "$1.temp"' EXIT
sanitize | tee "$1.temp" |
dump 'x264_opencl_source' > "$1"
hash "$1.temp" |
dump 'x264_opencl_source_hash' >> "$1"
