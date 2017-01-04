int master_eid;
char *myaddr;
unsigned short myport;
const char *progname = "ex_rep_base";
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
