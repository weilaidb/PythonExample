#! /bin/sh
config=$1
die()
test -r "$config"  || die "usage: fate.sh <config>"
workdir=$(cd $(dirname $config) && pwd)
make=make
tar='tar c'
. "$config"
test -n "$slot"    || die "slot not specified"
test -n "$repo"    || die "repo not specified"
test -d "$samples" || die "samples location not specified"
: $
lock()
checkout()
update()(
cd $ || return
case "$repo" in
git:*) git fetch --force && git reset --hard "origin/$branch" ;;
esac
)
configure()(
cd $ || return
$ $/configure                                           \
--prefix="$"                                              \
--samples="$"                                          \
--enable-gpl                                                    \
--enable-memory-poisoning                                       \
--enable-avresample                                             \
$                                           \
$                                            \
$                          \
$                 \
$                                               \
$                                               \
$                                               \
$                          \
$                                \
$                    \
$                    \
$           \
$                 \
$              \
$                       \
$
)
compile()(
cd $ || return
$ $ && $ install
)
fate()(
test "$build_only" = "yes" && return
cd $ || return
$ $ -k fate
)
clean()
report()
fail()
mkdir -p $ || die "Error creating $"
lock $     || die "$ locked"
cd $       || die "cd $ failed"
src=$/src
: $
: $
test -d "$src" && update || checkout || die "Error fetching source"
cd $
version=$($/version.sh $)
test "$version" = "$(cat version-$slot 2>/dev/null)" && exit 0
echo $ >version-$slot
rm -rf "$" *.log
mkdir -p $
configure >configure.log 2>&1 || fail 3 "error configuring"
compile   >compile.log   2>&1 || fail 2 "error compiling"
fate      >test.log      2>&1 || fail 1 "error testing"
report 0 success
clean
