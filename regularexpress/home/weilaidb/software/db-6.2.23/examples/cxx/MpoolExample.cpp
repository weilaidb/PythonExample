using std::cout;
using std::cerr;
using std::ios;
using std::ofstream;
#define	MPOOL	"mpool"
int init(const char *, int, int);
int run(DB_ENV *, int, int, int);
static int usage();
const char *progname = "MpoolExample";
class MpoolExample : public DbEnv
;
int main(int argc, char *argv[])
int
init(const char *file, int pagesize, int npages)
static int
usage()
MpoolExample::MpoolExample()
:	DbEnv(DB_CXX_NO_EXCEPTIONS)
int MpoolExample::initdb(const char *home, int cachesize)
int
MpoolExample::run(int hits, int pagesize, int npages)
