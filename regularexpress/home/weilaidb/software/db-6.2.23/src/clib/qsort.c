static char	*med3 __P((char *,
char *, char *, int (*)(const void *, const void *)));
static void	 swapfunc __P((char *, char *, int, int));
#define	min(a, b)	(a) < (b) ? a : b
#define	swapcode(TYPE, parmi, parmj, n)
#define	SWAPINIT(a, es) swaptype = ((char *)a - (char *)0) % sizeof(long) || \
es % sizeof(long) ? 2 : es == sizeof(long)? 0 : 1;
static inline void
swapfunc(a, b, n, swaptype)
char *a, *b;
int n, swaptype;
#define	swap(a, b)					\
if (swaptype == 0)  else						\
swapfunc(a, b, es, swaptype)
#define	vecswap(a, b, n)	if ((n) > 0) swapfunc(a, b, n, swaptype)
static inline char *
med3(a, b, c, cmp)
char *a, *b, *c;
int (*cmp)(const void *, const void *);
void
qsort(a, n, es, cmp)
void *a;
size_t n, es;
int (*cmp) __P((const void *, const void *));
