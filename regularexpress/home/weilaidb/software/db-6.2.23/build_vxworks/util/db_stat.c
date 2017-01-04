static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
typedef enum  test_t;
int	 db_stat_db_init __P((DB_ENV *, char *, test_t, u_int32_t, int *));
int	 db_stat_main __P((int, char *[]));
void	 db_stat_usage __P((void));
int	 db_stat_version_check __P((void));
const char *progname;
int
db_stat(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_stat_main(argc, argv)
int argc;
char *argv[];
int
db_stat_db_init(dbenv, home, ttype, cache, is_private)
DB_ENV *dbenv;
char *home;
test_t ttype;
u_int32_t cache;
int *is_private;
void
db_stat_usage()
int
db_stat_version_check()
