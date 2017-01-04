static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
enum which_open ;
int env_init __P((DB_ENV **,
char *, char *, char **, char ***, char *, char *, enum which_open, int));
int main __P((int, char *[]));
int usage __P((void));
int version_check __P((void));
void handle_event __P((DB_ENV *, u_int32_t, void *));
const char *progname;
int failchk_count;
void handle_event(dbenv, event, info)
DB_ENV *dbenv;
u_int32_t event;
void *info;
int
main(argc, argv)
int argc;
char *argv[];
int
env_init(dbenvp, home, blob_dir, log_dirp, data_dirp, msgpfx, passwd, which, verbose)
DB_ENV **dbenvp;
char *home, *blob_dir, **log_dirp, ***data_dirp, *msgpfx, *passwd;
enum which_open which;
int verbose;
int
usage()
int
version_check()
