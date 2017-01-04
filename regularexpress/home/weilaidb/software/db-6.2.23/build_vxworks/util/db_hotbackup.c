static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
enum which_open ;
int db_hotbackup_env_init __P((DB_ENV **,
char *, char *, char **, char ***, char *, char *, enum which_open, int));
int db_hotbackup_main __P((int, char *[]));
int db_hotbackup_usage __P((void));
int db_hotbackup_version_check __P((void));
void handle_event __P((DB_ENV *, u_int32_t, void *));
const char *progname;
int failchk_count;
void handle_event(dbenv, event, info)
DB_ENV *dbenv;
u_int32_t event;
void *info;
int
db_hotbackup(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_hotbackup_main(argc, argv)
int argc;
char *argv[];
int
db_hotbackup_env_init(dbenvp, home, blob_dir, log_dirp, data_dirp, msgpfx, passwd, which, verbose)
DB_ENV **dbenvp;
char *home, *blob_dir, **log_dirp, ***data_dirp, *msgpfx, *passwd;
enum which_open which;
int verbose;
int
db_hotbackup_usage()
int
db_hotbackup_version_check()
