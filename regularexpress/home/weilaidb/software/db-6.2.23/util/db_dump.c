static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int	 db_init __P((DB_ENV *, char *, int, u_int32_t, int *));
int	 dump_sub __P((DB_ENV *, DB *, char *, int, int));
int	 main __P((int, char *[]));
int	 show_subs __P((DB *));
int	 usage __P((void));
int	 version_check __P((void));
const char *progname;
int
main(argc, argv)
int argc;
char *argv[];
int
db_init(dbenv, home, is_salvage, cache, is_privatep)
DB_ENV *dbenv;
char *home;
int is_salvage;
u_int32_t cache;
int *is_privatep;
int
dump_sub(dbenv, parent_dbp, parent_name, pflag, keyflag)
DB_ENV *dbenv;
DB *parent_dbp;
char *parent_name;
int pflag, keyflag;
int
show_subs(dbp)
DB *dbp;
int
usage()
int
version_check()
