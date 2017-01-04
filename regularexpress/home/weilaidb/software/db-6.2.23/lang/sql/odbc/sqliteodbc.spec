%define name sqliteodbc
%define version 0.9992
%define release 1
Name: %
Summary: ODBC driver for SQLite
Version: %
Release: %
Source: http:
Group: Applications/Databases
URL: http:
License: BSD
BuildRoot: %/%-%-root-%(id -u)
%description
ODBC driver for SQLite interfacing SQLite 2.x and/or 3.x using the
unixODBC or iODBC driver managers. For more information refer to
http:
http:
http:
%prep
%setup -q
mv configure.in DONT-configure.in # RPM 3.x, don't run libtoolize
%build
%configure
make
%install
mkdir -p $RPM_BUILD_ROOT%
make install DESTDIR=$RPM_BUILD_ROOT
rm -f $RPM_BUILD_ROOT%/libsqliteodbc*.
rm -f $RPM_BUILD_ROOT%/libsqlite3odbc*.
rm -f $RPM_BUILD_ROOT%/libsqlite3_mod_*.
%clean
rm -rf $RPM_BUILD_ROOT
%post
if [ -x /usr/bin/odbcinst ] ; then
INST=/tmp/sqliteinst$$
if [ -r %/libsqliteodbc.so ] ; then
cat > $INST << 'EOD'
[SQLITE]
Description=SQLite ODBC 2.X
Driver=%/libsqliteodbc.so
Setup=%/libsqliteodbc.so
Threading=2
FileUsage=1
EOD
/usr/bin/odbcinst -q -d -n SQLITE | grep '^\[SQLITE\]' >/dev/null ||
cat > $INST << 'EOD'
[SQLite Datasource]
Driver=SQLITE
EOD
/usr/bin/odbcinst -q -s -n "SQLite Datasource" | \
grep '^\[SQLite Datasource\]' >/dev/null ||
fi
if [ -r %/libsqlite3odbc.so ] ; then
cat > $INST << 'EOD'
[SQLITE3]
Description=SQLite ODBC 3.X
Driver=%/libsqlite3odbc.so
Setup=%/libsqlite3odbc.so
Threading=2
FileUsage=1
EOD
/usr/bin/odbcinst -q -d -n SQLITE3 | grep '^\[SQLITE3\]' >/dev/null ||
cat > $INST << 'EOD'
[SQLite3 Datasource]
Driver=SQLITE3
EOD
/usr/bin/odbcinst -q -s -n "SQLite3 Datasource" | \
grep '^\[SQLite3 Datasource\]' >/dev/null ||
fi
rm -f $INST || true
fi
%preun
if [ "$1" = "0" ] ; then
test -x /usr/bin/odbcinst &&
true
fi
%files
%defattr(-, root, root)
%doc README license.terms ChangeLog
%/*.so*
%changelog
* Mon Apr 13 2015 ...
- automatically recreated by configure ...
