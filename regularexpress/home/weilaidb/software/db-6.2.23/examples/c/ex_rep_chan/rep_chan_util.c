int
rep_setup(dbenv, argc, argv, setup_info)
DB_ENV *dbenv;
int argc;
char *argv[];
SETUP_DATA *setup_info;
void
event_callback(dbenv, which, info)
DB_ENV *dbenv;
u_int32_t which;
void *info;
int
print_stocks(dbp)
DB *dbp;
void
print_one(key, klen, data, dlen, print_hdr)
void *key, *data;
u_int32_t klen, dlen;
int print_hdr;
int
start_support_threads(dbenv, sup_args, ckp_thr, lga_thr)
DB_ENV *dbenv;
GLOBAL *sup_args;
thread_t *ckp_thr;
thread_t *lga_thr;
int
finish_support_threads(ckp_thr, lga_thr)
thread_t *ckp_thr;
thread_t *lga_thr;
int
create_env(progname, dbenvp)
const char *progname;
DB_ENV **dbenvp;
int
env_init(dbenv, home)
DB_ENV *dbenv;
const char *home;
void
usage(progname)
const char *progname;
void *
checkpoint_thread(args)
void *args;
void *
log_archive_thread(args)
void *args;
int
parse_cmd(cmd)
char *cmd;
void
print_cmdhelp()
int
open_dbp(dbenv, is_master, dbpp)
DB_ENV *dbenv;
int is_master;
DB **dbpp;
