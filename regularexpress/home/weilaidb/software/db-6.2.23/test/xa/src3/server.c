#define	TXN_FUNC		TestThread1
#define	TXN_STRING		"TestThread1"
#define	TXN_FUNC		TestThread2
#define	TXN_STRING		"TestThread2"
void TXN_FUNC(TPSVCINFO *);
#define	HOME	"../data"
#define NUMDB	2
int cnt_request;
char *progname;
int
tpsvrinit(int argc, char* argv[])
void
tpsvrdone()
void
TXN_FUNC(TPSVCINFO *msg)
