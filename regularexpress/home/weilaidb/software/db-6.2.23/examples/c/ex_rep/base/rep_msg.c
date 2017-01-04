static int   connect_site __P((DB_ENV *, machtab_t *,
const char *, repsite_t *, int *, thread_t *));
static void *elect_thread __P((void *));
static void *hm_loop __P((void *));
typedef struct  elect_args;
typedef struct  hm_loop_args;
static void *
hm_loop(args)
void *args;
void *
connect_thread(args)
void *args;
void *
connect_all(args)
void *args;
static int
connect_site(dbenv, machtab, progname, site, is_open, hm_thrp)
DB_ENV *dbenv;
machtab_t *machtab;
const char *progname;
repsite_t *site;
int *is_open;
thread_t *hm_thrp;
static void *
elect_thread(args)
void *args;
