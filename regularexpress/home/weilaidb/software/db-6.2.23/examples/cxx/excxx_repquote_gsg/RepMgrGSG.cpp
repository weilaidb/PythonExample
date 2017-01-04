using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::flush;
#define CACHESIZE (10 * 1024 * 1024)
#define DATABASE "quote.db"
#define SLEEPTIME 3
const char *progname = "excxx_repquote_gsg_repmgr";
#define WIN32_LEAN_AND_MEAN
#define    sleep(s)        Sleep(1000 * (s))
extern "C"
typedef struct  APP_DATA;
class RepMgrGSG
;
static void usage()
int main(int argc, char **argv)
RepMgrGSG::RepMgrGSG() : app_config(0), dbenv((u_int32_t)0)
int RepMgrGSG::init(RepConfigInfo *config)
int RepMgrGSG::terminate()
#define BUFSIZE 1024
int RepMgrGSG::doloop()
void RepMgrGSG::event_callback(DbEnv* dbenv, u_int32_t which, void *info)
int RepMgrGSG::print_stocks(Db *dbp)
