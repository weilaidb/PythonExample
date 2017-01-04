static const char copyright[] =
"Copyright (c) 2010, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int	 main __P((int, char *[]));
int
main(argc, argv)
int argc;
char *argv[];
static int	usage __P((void));
static int	version_check __P((void));
static void	event_callback __P((DB_ENV *, u_int32_t, void *));
static int	db_replicate_logmsg __P((DB_ENV *, const char *));
static void	prog_close __P((DB_ENV *, int));
#define	MSG_SIZE	256
char log_msg[MSG_SIZE];
char *logfile;
FILE *logfp;
pid_t pid;
char progname[MSG_SIZE];
int panic_exit;
#define	REP_NTHREADS	3
#define	MAX_RETRY	3
int
main(argc, argv)
int argc;
char *argv[];
static void
prog_close(dbenv, exitval)
DB_ENV *dbenv;
int exitval;
static void
event_callback(dbenv, which, info)
DB_ENV *dbenv;
u_int32_t which;
void *info;
static int
usage()
static int
version_check()
static int
db_replicate_logmsg(dbenv, msg)
DB_ENV *dbenv;
const char *msg;
