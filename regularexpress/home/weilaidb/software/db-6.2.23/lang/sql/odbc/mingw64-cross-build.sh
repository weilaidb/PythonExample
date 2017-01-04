#!/bin/sh
#
# Build script for cross compiling and packaging SQLite 3
# ODBC drivers and tools for Win32 using MinGW and NSIS.
# Tested on Fedora Core 3/5/8, Debian Etch, RHEL 5/6.
#
# Cross toolchain and NSIS for Linux/i386/x86_64 can be fetched from
#  http:
#  http:
#  http:
# or
#  http:
#  http:
#  http:
# Some aspects of the build process can be controlled by shell variables:
#
# NO_SQLITE2=1      omit building SQLite 2 and drivers for it
# SQLITE_DLLS=1     build and package driver with sqlite3.dll
# SQLITE_DLLS=2     build driver with refs to sqlite3.dll
#                   driver can use System.Data.SQLite.dll instead
set -e
VER2=2.8.17
VER3=3.8.9
VER3X=3080900
VERZ=1.2.7
nov2=false
if test -n "$NO_SQLITE2" ; then
nov2=true
ADD_NSIS="-DWITHOUT_SQLITE2"
fi
if test -f "$WITH_SEE" ; then
export SEEEXT=see
ADD_NSIS="-DWITH_SEE=$SEEEXT"
if test "$SQLITE_DLLS" = "2" ; then
SQLITE_DLLS=1
fi
fi
if test "$SQLITE_DLLS" = "2" ; then
# turn on -DSQLITE_DYNLOAD in sqlite3odbc.c
export ADD_CFLAGS="-DWITHOUT_SHELL=1 -DWITH_SQLITE_DLLS=2"
ADD_NSIS="$ADD_NSIS -DWITHOUT_SQLITE3_EXE"
elif test -n "$SQLITE_DLLS" ; then
export ADD_CFLAGS="-DWITHOUT_SHELL=1 -DWITH_SQLITE_DLLS=1"
export SQLITE3_DLL="-Lsqlite3 -lsqlite3"
export SQLITE3_EXE="sqlite3.exe"
ADD_NSIS="$ADD_NSIS -DWITH_SQLITE_DLLS"
else
export SQLITE3_A10N_O="sqlite3a10n.o"
export SQLITE3_EXE="sqlite3.exe"
fi
if test -n "$WITH_SOURCES" ; then
ADD_NSIS="$ADD_NSIS -DWITH_SOURCES"
fi
echo "=================="
echo "Preparing zlib ..."
echo "=================="
test -r zlib-$.tar.gz || \
wget -c http:
rm -rf zlib-$
tar xzf zlib-$.tar.gz
ln -sf zlib-$ zlib
echo "===================="
echo "Preparing sqlite ..."
echo "===================="
( $nov2 && echo '*** skipped (NO_SQLITE2)' ) || true
$nov2 || test -r sqlite-$.tar.gz || \
wget -c http:
--no-check-certificate
$nov2 || test -r sqlite-$.tar.gz || exit 1
$nov2 || rm -f sqlite
$nov2 || tar xzf sqlite-$.tar.gz
$nov2 || ln -sf sqlite-$ sqlite
# enable sqlite_encode_binary et.al.
$nov2 || patch sqlite/main.mk <<'EOD'
--- sqlite.orig/main.mk	2005-04-24 00:43:23.000000000 +0200
+++ sqlite/main.mk	2006-03-16 14:29:55.000000000 +0100
@@ -55,7 +55,7 @@
# Object files for the SQLite library.
#
LIBOBJ = attach.o auth.o btree.o btree_rb.o build.o copy.o date.o delete.o \
-         expr.o func.o hash.o insert.o \
+         expr.o func.o hash.o insert.o encode.o \
main.o opcodes.o os.o pager.o parse.o pragma.o printf.o random.o \
select.o table.o tokenize.o trigger.o update.o util.o \
vacuum.o vdbe.o vdbeaux.o where.o tclsqlite.o
EOD
# display encoding
$nov2 || patch sqlite/src/shell.c <<'EOD'
--- sqlite.orig/src/shell.c	2005-04-24 00:43:22.000000000 +0200
+++ sqlite/src/shell.c	2006-05-23 08:22:01.000000000 +0200
@@ -1180,6 +1180,7 @@
"   -separator 'x'       set output field separator (|)\n"
"   -nullvalue 'text'    set text string for NULL values\n"
"   -version             show SQLite version\n"
+  "   -encoding            show SQLite encoding\n"
"   -help                show this text, also show dot-commands\n"
;
static void usage(int showDetail)else if( strcmp(z,"-echo")==0 )else if( strcmp(z,"-version")==0 )else if( strcmp(z,"-encoding")==0 )else if( strcmp(z,"-help")==0 ){
usage(1);
@@ -1330,9 +1334,9 @@
char *zHome;
char *zHistory = 0;
printf(
-        "SQLite version %s\n"
+        "SQLite version %s encoding %s\n"
"Enter \".help\" for instructions\n",
-        sqlite_version
+        sqlite_libversion(), sqlite_libencoding()
);
zHome = find_home_dir();
if( zHome && (zHistory = malloc(strlen(zHome)+20))!=0 ){
EOD
# use open file dialog when no database name given
# need to link with -lcomdlg32 when enabled
true || patch sqlite/src/shell.c <<'EOD'
--- sqlite.orig/src/shell.c        2006-07-23 11:18:13.000000000 +0200
+++ sqlite/src/shell.c     2006-07-23 11:30:26.000000000 +0200
@@ -20,6 +20,10 @@
+#if defined(_WIN32) && defined(DRIVER_VER_INFO)
+# include <windows.h>
+
+
#if !defined(_WIN32) && !defined(WIN32) && !defined(__MACOS__)
# include <signal.h>
# include <pwd.h>
@@ -1246,6 +1250,17 @@
if( i<argc )else
if( i<argc )
-int main(int argc, char **argv)
if( type>=RESERVED_LOCK )
-#if !SQLITE_CORE
+
int sqlite3_extension_init(
sqlite3 *db,
char **pzErrMsg,
--- sqlite3.orig/ext/fts3/fts3_porter.c  2008-02-01 16:40:34.000000000 +0100
+++ sqlite3/ext/fts3/fts3_porter.c       2008-03-16 11:34:50.000000000 +0100
@@ -31,6 +31,11 @@
+
+
+extern const sqlite3_api_routines *sqlite3_api;
+
+
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
+
+
+extern const sqlite3_api_routines *sqlite3_api;
+
+
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
+
+
+extern const sqlite3_api_routines *sqlite3_api;
+
+
assert( strlen(argv[0])==4 );
-  assert( (sqlite3_strnicmp(argv[0], "fts4", 4)==0 && isFts4)
-       || (sqlite3_strnicmp(argv[0], "fts3", 4)==0 && !isFts4)
+  assert( (strnicmp(argv[0], "fts4", 4)==0 && isFts4)
+       || (strnicmp(argv[0], "fts3", 4)==0 && !isFts4)
);
nDb = (int)strlen(argv[1]) + 1;
@@ -732,7 +728,7 @@
if( !pTokenizer
&& strlen(z)>8
-     && 0==sqlite3_strnicmp(z, "tokenize", 8)
+     && 0==strnicmp(z, "tokenize", 8)
&& 0==sqlite3Fts3IsIdChar(z[8])
)
-      if( nKey==9 && 0==sqlite3_strnicmp(z, "matchinfo", 9) ){
-        if( strlen(zVal)==4 && 0==sqlite3_strnicmp(zVal, "fts3", 4) ){
+      if( nKey==9 && 0==strnicmp(z, "matchinfo", 9) );
+
EOD
echo "========================"
echo "Cleanup before build ..."
echo "========================"
make -f Makefile.mingw64-cross clean
$notv2 || make -C sqlite -f ../mf-sqlite.mingw64-cross clean
make -C sqlite3 -f ../mf-sqlite3.mingw64-cross clean
make -C sqlite3 -f ../mf-sqlite3fts.mingw64-cross clean
make -C sqlite3 -f ../mf-sqlite3rtree.mingw64-cross clean
make -f mf-sqlite3extfunc.mingw64-cross clean
echo "============================="
echo "Building SQLite 2 ... ISO8859"
echo "============================="
( $nov2 && echo '*** skipped (NO_SQLITE2)' ) || true
$nov2 || make -C sqlite -f ../mf-sqlite.mingw64-cross all
if test -n "$SQLITE_DLLS" ; then
$nov2 || make -C sqlite -f ../mf-sqlite.mingw64-cross sqlite.dll
fi
echo "================="
echo "Building zlib ..."
echo "================="
make -C zlib -f ../mf-zlib.mingw64-cross all
echo "=========================="
echo "Building SQLite 2 ... UTF8"
echo "=========================="
( $nov2 && echo '*** skipped (NO_SQLITE2)' ) || true
$nov2 || make -C sqlite -f ../mf-sqlite.mingw64-cross clean
$nov2 || make -C sqlite -f ../mf-sqlite.mingw64-cross ENCODING=UTF8 all
if test -n "$SQLITE_DLLS" ; then
$nov2 || \
make -C sqlite -f ../mf-sqlite.mingw64-cross ENCODING=UTF8 sqliteu.dll
fi
echo "====================="
echo "Building SQLite 3 ..."
echo "====================="
make -C sqlite3 -f ../mf-sqlite3.mingw64-cross all
test -r sqlite3/tool/mksqlite3c.tcl && \
make -C sqlite3 -f ../mf-sqlite3.mingw64-cross sqlite3.c
if test -r sqlite3/sqlite3.c -a -f "$WITH_SEE" ; then
cat sqlite3/sqlite3.c "$WITH_SEE" > sqlite3.c
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_HAS_CODEC=1"
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_ACTIVATION_KEY=\\\"$SEE_KEY\\\""
ADD_CFLAGS="$ADD_CFLAGS -DSEEEXT=\\\"$SEEEXT\\\""
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_API=static -DWIN32=1 -DNDEBUG=1 -DNO_TCL"
ADD_CFLAGS="$ADD_CFLAGS -DTHREADSAFE=1"
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_DLL=1 -DSQLITE_THREADSAFE=1"
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_OS_WIN=1 -DSQLITE_ASCII=1"
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_SOUNDEX=1"
ADD_CFLAGS="$ADD_CFLAGS -DSQLITE_ENABLE_COLUMN_METADATA=1"
ADD_CFLAGS="$ADD_CFLAGS -DWITHOUT_SHELL=1"
export ADD_CFLAGS
ADD_NSIS="$ADD_NSIS -DWITHOUT_SQLITE3_EXE"
unset SQLITE3_A10N_O
unset SQLITE3_EXE
fi
test "$VER3" = "3.8.6" -o "$VER3" = "3.8.7" -o "$VER3" = "3.8.8" \
-o "$VER3" = "3.8.9" \
&& patch sqlite3/sqlite3.c <<'EOD'
--- sqlite3.orig/sqlite3.c      2014-09-14 15:02:38.000000000 +0200
+++ sqlite3/sqlite3.c   2014-09-14 15:03:02.000000000 +0200
@@ -121057,7 +121057,7 @@
#if defined(_WIN32) || defined(WIN32)
# include <io.h>
-
+# include <fcntl.h>
#define isatty(h) _isatty(h)
# define access(f,m) _access((f),(m))
EOD
if test -n "$SQLITE_DLLS" ; then
make -C sqlite3 -f ../mf-sqlite3.mingw64-cross sqlite3.dll
fi
echo "==============================="
echo "Building ODBC drivers and utils"
echo "==============================="
if $nov2 ; then
make -f Makefile.mingw64-cross all_no2
else
make -f Makefile.mingw64-cross
fi
make -f Makefile.mingw64-cross sqlite3odbc$nw.dll
echo "==================================="
echo "Building SQLite3 FTS extensions ..."
echo "==================================="
make -C sqlite3 -f ../mf-sqlite3fts.mingw64-cross clean all
mv sqlite3/sqlite3_mod_fts*.dll .
echo "====================================="
echo "Building SQLite3 rtree extensions ..."
echo "====================================="
make -C sqlite3 -f ../mf-sqlite3rtree.mingw64-cross clean all
mv sqlite3/sqlite3_mod_rtree.dll .
echo "========================================"
echo "Building SQLite3 extension functions ..."
echo "========================================"
make -f mf-sqlite3extfunc.mingw64-cross clean all
echo "========================="
echo "Building drivers ... UTF8"
echo "========================="
( $nov2 && echo '*** skipped (NO_SQLITE2)' ) || true
$nov2 || make -f Makefile.mingw64-cross sqliteodbcu.dll sqliteu.exe
echo "======================="
echo "Cleanup after build ..."
echo "======================="
$nov2 || make -C sqlite -f ../mf-sqlite.mingw64-cross clean
$nov2 || rm -f sqlite/sqlite.exe
make -C sqlite3 -f ../mf-sqlite3.mingw64-cross clean
make -C sqlite3 -f ../mf-sqlite3fts.mingw64-cross clean
make -C sqlite3 -f ../mf-sqlite3rtree.mingw64-cross clean
make -f mf-sqlite3extfunc.mingw64-cross semiclean
echo "==========================="
echo "Creating NSIS installer ..."
echo "==========================="
cp -p README readme.txt
unix2dos < license.terms > license.txt || todos < license.terms > license.txt
makensis $ADD_NSIS sqliteodbc_w64.nsi
