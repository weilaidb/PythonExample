#define ub4 unsigned long
#define hashsize(n) ((ub4)1<<(n))
#define hashmask(n) (hashsize(n)-1)
#define mix(a,b,c) \
unsigned long
phash_lookup(
register const char *sk,
register size_t length,
register unsigned long level)
#define mixc(a,b,c,d,e,f,g,h) \
void
phash_checksum(
register const char *sk,
register size_t len,
register unsigned long *state)
