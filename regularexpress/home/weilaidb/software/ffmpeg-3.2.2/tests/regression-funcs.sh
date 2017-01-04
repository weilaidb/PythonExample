#!/bin/sh
#
# common regression functions for ffmpeg
#
#
test="$"
test_ref=$2
raw_src_dir=$3
target_exec=$4
target_path=$5
threads=$
cpuflags=$
target_samples=$9
datadir="./tests/data"
target_datadir="$/$"
this="$test.$test_ref"
outfile="$datadir/$test_ref/"
# various files
ffmpeg="$target_exec $/ffmpeg$"
raw_src="$/$raw_src_dir/%02d.pgm"
raw_dst="$datadir/$this.out.yuv"
pcm_src="$target_datadir/asynth1.sw"
pcm_src_1ch="$target_datadir/asynth-16000-1.wav"
pcm_ref_1ch="$datadir/$test_ref-16000-1.ref.wav"
crcfile="$datadir/$this.crc"
target_crcfile="$target_datadir/$this.crc"
cleanfiles="$raw_dst $crcfile"
trap 'rm -f -- $cleanfiles' EXIT
mkdir -p "$datadir"
mkdir -p "$outfile"
[ "$" -gt 0 ] && echov=echov || echov=:
echov()
. $(dirname $0)/md5.sh
AVCONV_OPTS="-nostdin -nostats -y -cpuflags $cpuflags"
COMMON_OPTS="-flags +bitexact -idct simple -sws_flags +accurate_rnd+bitexact -fflags +bitexact"
DEC_OPTS="$COMMON_OPTS -threads $threads"
ENC_OPTS="$COMMON_OPTS -threads $threads -dct fastint"
run_avconv()
do_avconv()
do_avconv_nomd5()
do_avconv_crc()
