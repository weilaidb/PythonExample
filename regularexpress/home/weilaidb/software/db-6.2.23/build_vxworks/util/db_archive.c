static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int db_archive_main __P((int, char *[]));
void db_archive_usage __P((void));
int db_archive_version_check __P((void));
const char *progname;
int
db_archive(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_archive_main(argc, argv)
int argc;
char *argv[];
void
db_archive_usage()
int
db_archive_version_check()
