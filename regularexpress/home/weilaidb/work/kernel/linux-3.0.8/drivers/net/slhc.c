static unsigned char *encode(unsigned char *cp, unsigned short n);
static long decode(unsigned char **cpp);
static unsigned char * put16(unsigned char *cp, unsigned short x);
static unsigned short pull16(unsigned char **cpp);
struct slcompress *
slhc_init(int rslots, int tslots)
void
slhc_free(struct slcompress *comp)
static inline unsigned char *
put16(unsigned char *cp, unsigned short x)
static unsigned char *
encode(unsigned char *cp, unsigned short n)
static unsigned short
pull16(unsigned char **cpp)
static long
decode(unsigned char **cpp)
int
slhc_compress(struct slcompress *comp, unsigned char *icp, int isize,
unsigned char *ocp, unsigned char **cpp, int compress_cid)
int
slhc_uncompress(struct slcompress *comp, unsigned char *icp, int isize)
int
slhc_remember(struct slcompress *comp, unsigned char *icp, int isize)
int
slhc_toss(struct slcompress *comp)
int
slhc_toss(struct slcompress *comp)
int
slhc_uncompress(struct slcompress *comp, unsigned char *icp, int isize)
int
slhc_compress(struct slcompress *comp, unsigned char *icp, int isize,
unsigned char *ocp, unsigned char **cpp, int compress_cid)
int
slhc_remember(struct slcompress *comp, unsigned char *icp, int isize)
void
slhc_free(struct slcompress *comp)
struct slcompress *
slhc_init(int rslots, int tslots)
EXPORT_SYMBOL(slhc_init);
EXPORT_SYMBOL(slhc_free);
EXPORT_SYMBOL(slhc_remember);
EXPORT_SYMBOL(slhc_compress);
EXPORT_SYMBOL(slhc_uncompress);
EXPORT_SYMBOL(slhc_toss);
MODULE_LICENSE("Dual BSD/GPL");
