#if defined(SQLITE_SERVER) && !defined(SQLITE_OMIT_SHARED_CACHE) && \
SQLITE_OS_UNIX && SQLITE_THREADSAFE
int sqlite3_client_open(const char*, sqlite3**);
int sqlite3_client_prepare(sqlite3*,const char*,int,
sqlite3_stmt**,const char**);
int sqlite3_client_step(sqlite3_stmt*);
int sqlite3_client_reset(sqlite3_stmt*);
int sqlite3_client_finalize(sqlite3_stmt*);
int sqlite3_client_close(sqlite3*);
int sqlite3_server_start(void);
int sqlite3_server_stop(void);
void sqlite3_server_start2(int *pnDecr);
typedef struct Thread Thread;
struct Thread ;
#define N_THREAD 26
static Thread threadset[N_THREAD];
static void *client_main(void *pArg)
static int parse_client_id(Tcl_Interp *interp, const char *zArg)
static int tcl_client_create(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void client_wait(Thread *p)
static int tcl_client_wait(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void stop_thread(Thread *p)
static int tcl_client_halt(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_client_argc(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_client_argv(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_client_colname(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
extern const char *sqlite3ErrName(int);
static int tcl_client_result(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_client_error(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_compile(Thread *p)
static int tcl_client_compile(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_step(Thread *p)
static int tcl_client_step(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_finalize(Thread *p)
static int tcl_client_finalize(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_reset(Thread *p)
static int tcl_client_reset(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_client_swap(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
int Sqlitetest7_Init(Tcl_Interp *interp)
int Sqlitetest7_Init(Tcl_Interp *interp)
