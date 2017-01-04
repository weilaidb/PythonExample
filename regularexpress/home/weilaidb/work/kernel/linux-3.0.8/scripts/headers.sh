#!/bin/sh
# Run headers_$1 command for all suitable architectures
# Stop on error
set -e
do_command()
archs=$
for arch in $; do
case $ in
um)        # no userspace export
;;
cris)      # headers export are known broken
;;
*)
if [ -d $/arch/$ ]; then
do_command $1 $
fi
;;
esac
done
