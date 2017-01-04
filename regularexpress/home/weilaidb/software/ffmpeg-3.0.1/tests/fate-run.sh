#! /bin/sh
export LC_ALL=C
base=$(dirname $0)
. "$/md5.sh"
base64=tests/base64
test="$"
target_samples=$2
target_exec=$3
target_path=$4
command=$5
cmp=$
ref=$
fuzz=$
threads=$
thread_type=$
cpuflags=$
cmp_shift=$
cmp_target=$
size_tolerance=$
cmp_unit=$
gen=$
hwaccel=$
outdir="tests/data/fate"
outfile="$/$"
errfile="$/$.err"
cmpfile="$/$.diff"
repfile="$/$.rep"
target_path()
# $1=value1, $2=value2, $3=threshold
# prints 0 if absolute difference between value1 and value2 is <= threshold
compare()
do_tiny_psnr()
oneoff()
stddev()
oneline()
run()
runecho()
probefmt()
runlocal()
probeframes()
ffmpeg()
framecrc()
framemd5()
crc()
md5()
pcm()
fmtstdout()
enc_dec_pcm()
FLAGS="-flags +bitexact -sws_flags +accurate_rnd+bitexact -fflags +bitexact"
DEC_OPTS="-threads $threads -idct simple $FLAGS"
ENC_OPTS="-threads 1        -idct simple -dct fastint"
enc_dec()
lavffatetest()
lavftest()
video_filter()
pixfmts()
gapless()
concat()
mkdir -p "$outdir"
# Disable globbing: command arguments may contain globbing characters and
# must be kept verbatim
set -f
exec 3>&2
eval $command >"$outfile" 2>$errfile
err=$?
if [ $err -gt 128 ]; then
sig=$(kill -l $err 2>/dev/null)
test "$" = "$" || unset sig
fi
if test -e "$ref" || test $cmp = "oneline" ; then
case $cmp in
diff)   diff -u -b "$ref" "$outfile"            >$cmpfile ;;
rawdiff)diff -u    "$ref" "$outfile"            >$cmpfile ;;
oneoff) oneoff     "$ref" "$outfile"            >$cmpfile ;;
stddev) stddev     "$ref" "$outfile"            >$cmpfile ;;
oneline)oneline    "$ref" "$outfile"            >$cmpfile ;;
null)   cat               "$outfile"            >$cmpfile ;;
esac
cmperr=$?
test $err = 0 && err=$cmperr
test $err = 0 || cat $cmpfile
else
echo "reference file '$ref' not found"
err=1
fi
if [ $err -eq 0 ]; then
unset cmpo erro
else
cmpo="$($base64 <$cmpfile)"
erro="$($base64 <$errfile)"
fi
echo "$:$:$cmpo:$erro" >$repfile
if test $err != 0 && test $gen != "no" ; then
echo "GEN     $ref"
cp -f "$outfile" "$ref"
err=$?
fi
if test $err = 0; then
rm -f $outfile $errfile $cmpfile $cleanfiles
elif test $gen = "no"; then
echo "Test $test failed. Look at $errfile for details."
test "$" -gt 0 && cat $errfile
else
echo "Updating reference failed, possibly no output file was generated."
fi
exit $err
