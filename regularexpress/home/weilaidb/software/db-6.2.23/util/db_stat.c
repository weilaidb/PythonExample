static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
typedef enum  test_t;
int	 db_init __P((DB_ENV *, char *, test_t, u_int32_t, int *));
int	 main __P((int, char *[]));
void	 usage __P((void));
int	 version_check __P((void));
const char *progname;
int
main(argc, argv)
int argc;
char *argv[];
int
db_init(dbenv, home, ttype, cache, is_private)
DB_ENV *dbenv;
char *home;
test_t ttype;
u_int32_t cache;
int *is_private;
void
usage()
int
version_check()
