static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
void db_recover_feedback __P((DB_ENV *, int, int));
int  main __P((int, char *[]));
int  read_timestamp __P((char *, time_t *));
void usage __P((void));
int  version_check __P((void));
const char *progname;
int newline_needed;
int
main(argc, argv)
int argc;
char *argv[];
void
db_recover_feedback(dbenv, opcode, percent)
DB_ENV *dbenv;
int opcode;
int percent;
#define	ATOI2(ar)	((ar)[0] - '0') * 10 + ((ar)[1] - '0'); (ar) += 2;
int
read_timestamp(arg, timep)
char *arg;
time_t *timep;
void
usage()
int
version_check()
