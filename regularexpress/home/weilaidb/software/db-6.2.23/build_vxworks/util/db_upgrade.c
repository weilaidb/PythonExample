static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int db_upgrade_main __P((int, char *[]));
void db_upgrade_usage __P((void));
int db_upgrade_version_check __P((void));
const char *progname;
int
db_upgrade(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_upgrade_main(argc, argv)
int argc;
char *argv[];
void
db_upgrade_usage()
int
db_upgrade_version_check()
