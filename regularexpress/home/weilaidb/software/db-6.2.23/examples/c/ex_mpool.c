extern int getopt(int, char * const *, const char *);
int
gettimeofday(struct timeval *tv, struct timezone *tz)
int	init __P((const char *, u_int32_t, int, const char *));
int	run __P((int, long long, u_int32_t, int, const char *));
int	main __P((int, char *[]));
int	usage __P((const char *));
#define	MPOOL	"mpool"
void	timer_start(struct timeval *start);
double	timer_end(const struct timeval *start);
void
timer_start(struct timeval *timer)
double
timer_end(const struct timeval *start)
int
main(argc, argv)
int argc;
char *argv[];
int
usage(progname)
const char *progname;
int
init(file, pagesize, npages, progname)
const char *file;
u_int32_t pagesize;
int npages;
const char *progname;
int
run(hits, cachesize, pagesize, npages, progname)
int hits;
long long cachesize;
u_int32_t pagesize;
int npages;
const char *progname;
