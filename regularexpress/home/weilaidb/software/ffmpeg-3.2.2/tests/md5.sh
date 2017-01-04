# try to find an md5 program
if [ X"$(echo | md5sum -b 2> /dev/null)" != X ]; then
do_md5sum()
elif [ X"$(echo | command md5 2> /dev/null)" != X ]; then
do_md5sum()
elif [ -x /sbin/md5 ]; then
do_md5sum()
elif openssl version >/dev/null 2>&1; then
do_md5sum()
else
do_md5sum()
fi
