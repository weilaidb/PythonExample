static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int	 db_dump_db_init __P((DB_ENV *, char *, int, u_int32_t, int *));
int	 db_dump_dump_sub __P((DB_ENV *, DB *, char *, int, int));
int	 db_dump_main __P((int, char *[]));
int	 db_dump_show_subs __P((DB *));
int	 db_dump_usage __P((void));
int	 db_dump_version_check __P((void));
const char *progname;
int
db_dump(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_dump_main(argc, argv)
int argc;
char *argv[];
int
db_dump_db_init(dbenv, home, is_salvage, cache, is_privatep)
DB_ENV *dbenv;
char *home;
int is_salvage;
u_int32_t cache;
int *is_privatep;
int
db_dump_dump_sub(dbenv, parent_dbp, parent_name, pflag, keyflag)
DB_ENV *dbenv;
DB *parent_dbp;
char *parent_name;
int pflag, keyflag;
int
db_dump_show_subs(dbp)
DB *dbp;
int
db_dump_usage()
int
db_dump_version_check()
