#if SQLITE_OS_UNIX && SQLITE_THREADSAFE
extern const char *sqlite3ErrName(int);
typedef struct Thread Thread;
struct Thread ;
#define N_THREAD 26
static Thread threadset[N_THREAD];
static void *thread_main(void *pArg)
static int parse_thread_id(Tcl_Interp *interp, const char *zArg)
static int tcl_thread_create(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void thread_wait(Thread *p)
static int tcl_thread_wait(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void stop_thread(Thread *p)
static int tcl_thread_halt(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_argc(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_argv(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_colname(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_result(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_error(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_compile(Thread *p)
static int tcl_thread_compile(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_step(Thread *p)
static int tcl_thread_step(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static void do_finalize(Thread *p)
static int tcl_thread_finalize(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_swap(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_db_get(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_db_put(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
static int tcl_thread_stmt_get(
void *NotUsed,
Tcl_Interp *interp,
int argc,
const char **argv
)
int Sqlitetest4_Init(Tcl_Interp *interp)
int Sqlitetest4_Init(Tcl_Interp *interp)
