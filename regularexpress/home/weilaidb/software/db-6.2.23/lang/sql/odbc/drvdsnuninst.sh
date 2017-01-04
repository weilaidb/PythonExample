#!/bin/sh
#
# Uninstall ODBC driver and system DSN
#    $1   driver name
#    $2   DSN name
which odbcinst > /dev/null ||
odbcinst -u -d -n "$1" || true
odbcinst -u -l -s -n "$2" || true
