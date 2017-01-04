using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::flush;
#define CACHESIZE (10 * 1024 * 1024)
#define DATABASE "quote.db"
#define SLEEPTIME 3
const char *progname = "excxx_repquote_gsg_wrfor";
#define WIN32_LEAN_AND_MEAN
#define    sleep(s)        Sleep(1000 * (s))
extern "C"
class RepMgrWrforGSG
;
static void usage()
int main(int argc, char **argv)
RepMgrWrforGSG::RepMgrWrforGSG() : app_config(0), dbenv((u_int32_t)0)
int RepMgrWrforGSG::init(RepConfigInfo *config)
int RepMgrWrforGSG::terminate()
#define BUFSIZE 1024
int RepMgrWrforGSG::doloop()
int RepMgrWrforGSG::print_stocks(Db *dbp)
