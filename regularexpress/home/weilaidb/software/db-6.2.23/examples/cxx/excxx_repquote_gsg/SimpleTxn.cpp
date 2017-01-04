using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::flush;
#define CACHESIZE (10 * 1024 * 1024)
#define DATABASE "quote.db"
const char *progname = "excxx_repquote_gsg_simple";
#define WIN32_LEAN_AND_MEAN
extern "C"
class RepMgr
;
static void usage()
int main(int argc, char **argv)
RepMgr::RepMgr() : app_config(0), dbenv((u_int32_t)0)
int RepMgr::init(SimpleConfigInfo *config)
int RepMgr::terminate()
#define BUFSIZE 1024
int RepMgr::doloop()
int RepMgr::print_stocks(Db *dbp)
