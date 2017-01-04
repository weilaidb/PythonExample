#define MAX_SEGS 10
#define MAX_MSGS 10
#undef LOCK_MUTEX
#undef UNLOCK_MUTEX
#define sleep(s) Sleep(1000 * (s))
typedef HANDLE mutex_t;
#define	mutex_init(m)						   \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)							   \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ?              \
0 : GetLastError())
#define	mutex_unlock(m)		(ReleaseMutex(*(m)) ? 0 : GetLastError())
#define	mutex_destroy(m)	(CloseHandle(*(m)) ? 0 : GetLastError())
typedef HANDLE cond_t;
#define	cond_init(c)	((*(c) = CreateEvent(NULL,	\
TRUE, FALSE, NULL)) == NULL ? GetLastError() : 0)
#define cond_wait(c, m) (SignalObjectAndWait(*(m), *(c), INFINITE, FALSE) == WAIT_OBJECT_0 ? \
0 : GetLastError())
#define cond_wake(c) (SetEvent(*(c)) ? 0 : GetLastError())
typedef pthread_mutex_t mutex_t;
#define	mutex_init(m)	pthread_mutex_init((m), NULL)
#define	mutex_lock(m)		pthread_mutex_lock(m)
#define	mutex_unlock(m)		pthread_mutex_unlock(m)
#define	mutex_destroy(m)	pthread_mutex_destroy(m)
typedef pthread_cond_t cond_t;
#define	cond_init(c)	pthread_cond_init((c), NULL)
#define	cond_wait(c, m)	pthread_cond_wait((c), (m))
#define	cond_wake(c)	pthread_cond_broadcast(c)
struct channel_test_globals ;
struct report ;
struct reports ;
struct env_info ;
struct msginfo ;
typedef int (*PRED) __P((void *));
static int await_condition __P((PRED, void *, long));
static int check_dbt_string __P((DBT *, const char *));
static void clear_rpt __P((DB_ENV *));
static void clear_rpt_int __P((struct report *));
static int env_done __P((void *));
static struct report *get_rpt __P((const DB_ENV *));
static int fortify __P((DB_ENV *, struct channel_test_globals *));
static int get_avail_ports __P((u_int *, int));
static int has_msgs __P((void *));
static void msg_disp __P((DB_ENV *, DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
static void msg_disp2 __P((DB_ENV *, DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
static void msg_disp3 __P((DB_ENV *, DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
static void msg_disp4 __P((DB_ENV *, DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
static void msg_disp5 __P((DB_ENV *, DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
static void notify __P((DB_ENV *, u_int32_t, void *));
static int is_started __P((void *));
static void td __P((DB_ENV *));
static void test_data_init __P((DBT *, char *));
static void test_zeroes __P((DB_CHANNEL *, DB_ENV *, CuTest *));
static int two_done __P((void *));
#define	LOCK_MUTEX(m) do  while (0)
#define	UNLOCK_MUTEX(m) do  while (0)
int TestChannelSuiteSetup(CuSuite *suite)
int TestChannelSuiteTeardown(CuSuite *suite)
int TestChannelTestSetup(CuTest *test)
int TestChannelTestTeardown(CuTest *test)
static void
myerrcall(const DB_ENV *dbenv, const char *errpfx, const char *msg)
static int
fortify(dbenv, g)
DB_ENV *dbenv;
struct channel_test_globals *g;
static int
setup(envp1, envp2, envp3, g)
DB_ENV **envp1, **envp2, **envp3;
struct channel_test_globals *g;
static void
td(dbenv)
DB_ENV *dbenv;
static void
clear_rpt_int(rpt)
struct report *rpt;
static void
clear_rpt(dbenv)
DB_ENV *dbenv;
static int
env_done(ctx)
void *ctx;
static void
await_done(dbenv)
DB_ENV *dbenv;
static int
has_msgs(ctx)
void *ctx;
static struct report *
get_rpt(dbenv)
const DB_ENV *dbenv;
int TestChannelFeature(CuTest *ct)
static int
two_done(ctx)
void *ctx;
static int
check_dbt_string(dbt, s)
DBT *dbt;
const char *s;
static int
is_started(ctx)
void *ctx;
static int
await_condition(pred, ctx, limit)
PRED pred;
void *ctx;
long limit;
static void
notify(dbenv, event, unused)
DB_ENV *dbenv;
u_int32_t event;
void *unused;
static void
msg_disp(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
static void
msg_disp2(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
static void
msg_disp3(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
static void
msg_disp4(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
static void
msg_disp5(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
static void
test_data_init(dbt, data)
DBT *dbt;
char *data;
static void
test_zeroes(ch, dest, ct)
DB_CHANNEL *ch;
DB_ENV *dest;
CuTest *ct;
static int get_avail_ports(ports, count)
u_int *ports;
int count;
