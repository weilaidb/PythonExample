static int doloop __P((DB_ENV *, GLOBAL *));
static void get_op __P((DB_ENV *, DB_CHANNEL *, GLOBAL *, DBT *,
u_int32_t));
static int master_op __P((DB_ENV *, GLOBAL *, int, DBT *, int));
static void operation_dispatch __P((DB_ENV *, DB_CHANNEL *, DBT *,
u_int32_t, u_int32_t));
static int parse_input __P((char *, int *, DBT *, int *));
static int process_reply __P((DB_ENV *, int, DBT *));
static void put_op __P((DB_ENV *, DB_CHANNEL *, int, GLOBAL *, DBT *,
u_int32_t));
static void send_error_reply __P((DB_CHANNEL *, int));
static void send_reply __P((DB_CHANNEL *, DBT *, int));
const char *progname = "ex_rep_chan";
int
main(argc, argv)
int argc;
char *argv[];
static int
doloop(dbenv, global)
DB_ENV *dbenv;
GLOBAL *global;
static int
parse_input(buf, cmdp, argsdbt, ndbtp)
char *buf;
int *cmdp, *ndbtp;
DBT *argsdbt;
static int
master_op(dbenv, global, cmd, cmdargs, ndbt)
DB_ENV *dbenv;
GLOBAL *global;
int cmd, ndbt;
DBT *cmdargs;
static void
operation_dispatch(dbenv, chan, reqdbts, ndbt, flags)
DB_ENV *dbenv;
DB_CHANNEL *chan;
DBT *reqdbts;
u_int32_t ndbt, flags;
static void
get_op(dbenv, chan, global, reqdbts, ndbt)
DB_ENV *dbenv;
DB_CHANNEL *chan;
GLOBAL *global;
DBT *reqdbts;
u_int32_t ndbt;
static void
put_op(dbenv, chan, cmd, global, reqdbts, ndbt)
DB_ENV *dbenv;
DB_CHANNEL *chan;
int cmd;
GLOBAL *global;
DBT *reqdbts;
u_int32_t ndbt;
static void
send_error_reply(chan, ret)
DB_CHANNEL *chan;
int ret;
static void
send_reply(chan, reply, ndbt)
DB_CHANNEL *chan;
DBT *reply;
int ndbt;
static int
process_reply(dbenv, cmd, resp)
DB_ENV *dbenv;
int cmd;
DBT *resp;
