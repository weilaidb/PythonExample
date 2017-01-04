using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::flush;
using std::istream;
using std::istringstream;
using std::string;
using std::getline;
using namespace dbstl;
#define	CACHESIZE	(10 * 1024 * 1024)
#define	DATABASE	"quote.db"
const char *progname = "exstl_repquote";
#define WIN32_LEAN_AND_MEAN
#define	snprintf		_snprintf
#define	sleep(s)		Sleep(1000 * (s))
extern "C"
typedef HANDLE thread_t;
typedef DWORD thread_exit_status_t;
#define	thread_create(thrp, attr, func, arg)				   \
(((*(thrp) = CreateThread(NULL, 0,					   \
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	thread_join(thr, statusp)					   \
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&		   \
GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)
typedef pthread_t thread_t;
typedef void* thread_exit_status_t;
#define	thread_create(thrp, attr, func, arg)				   \
pthread_create((thrp), (attr), (func), (arg))
#define	thread_join(thr, statusp) pthread_join((thr), (statusp))
typedef struct  APP_DATA;
static void log(const char *);
void *checkpoint_thread (void *);
void *log_archive_thread (void *);
class RepQuoteExample
;
bool RepQuoteExample::open_db(bool creating)
void RepQuoteExample::close_db(Db *&dbp)
RepQuoteExample::RepQuoteExample() : app_config(0), cur_env(NULL)
void RepQuoteExample::init(RepConfigInfo *config)
int RepQuoteExample::terminate()
void RepQuoteExample::prompt()
void log(const char *msg)
void RepQuoteExample::doloop()
void RepQuoteExample::event_callback(DbEnv* dbenv, u_int32_t which, void *info)
void RepQuoteExample::print_stocks()
static void usage()
int main(int argc, char **argv)
void *checkpoint_thread(void *args)
void *log_archive_thread(void *args)
