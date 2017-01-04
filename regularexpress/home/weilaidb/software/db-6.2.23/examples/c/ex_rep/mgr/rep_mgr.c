typedef struct  APP_DATA;
const char *progname = "ex_rep_mgr";
static void event_callback __P((DB_ENV *, u_int32_t, void *));
int
main(argc, argv)
int argc;
char *argv[];
static void
event_callback(dbenv, which, info)
DB_ENV *dbenv;
u_int32_t which;
void *info;
