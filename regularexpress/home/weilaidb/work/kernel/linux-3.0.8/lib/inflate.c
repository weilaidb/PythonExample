#define DEBG(x)
#define DEBG1(x)
static char rcsid[] = "#Id: inflate.c,v 0.14 1993/06/10 13:27:04 jloup Exp #";
#if defined(STDC_HEADERS) || defined(HAVE_STDLIB_H)
#  include <sys/types.h>
#  include <stdlib.h>
#define STATIC
#define INIT
#define slide window
struct huft ;
STATIC int INIT huft_build OF((unsigned *, unsigned, unsigned,
const ush *, const ush *, struct huft **, int *));
STATIC int INIT huft_free OF((struct huft *));
STATIC int INIT inflate_codes OF((struct huft *, struct huft *, int, int));
STATIC int INIT inflate_stored OF((void));
STATIC int INIT inflate_fixed OF((void));
STATIC int INIT inflate_dynamic OF((void));
STATIC int INIT inflate_block OF((int *));
STATIC int INIT inflate OF((void));
#define wp outcnt
#define flush_output(w) (wp=(w),flush_window())
static const unsigned border[] = ;
static const ush cplens[] = ;
static const ush cplext[] = ;
static const ush cpdist[] = ;
static const ush cpdext[] = ;
STATIC ulg bb;
STATIC unsigned bk;
STATIC const ush mask_bits[] = ;
#define NEXTBYTE()  ()
#define NEEDBITS(n)
#define DUMPBITS(n)
static unsigned long malloc_ptr;
static int malloc_count;
static void *malloc(int size)
static void free(void *where)
#define malloc(a) kmalloc(a, GFP_KERNEL)
#define free(a) kfree(a)
STATIC const int lbits = 9;
STATIC const int dbits = 6;
#define BMAX 16
#define N_MAX 288
STATIC unsigned hufts;
STATIC int INIT huft_build(
unsigned *b,
unsigned n,
unsigned s,
const ush *d,
const ush *e,
struct huft **t,
int *m
)
STATIC int INIT huft_free(
struct huft *t
)
STATIC int INIT inflate_codes(
struct huft *tl,
struct huft *td,
int bl,
int bd
)
STATIC int INIT inflate_stored(void)
STATIC int noinline INIT inflate_fixed(void)
STATIC int noinline INIT inflate_dynamic(void)
DEBG("dyn6 ");
if (inflate_codes(tl, td, bl, bd))
DEBG("dyn7 ");
huft_free(tl);
huft_free(td);
DEBG(">");
ret = 0;
out:
free(ll);
return ret;
underrun:
ret = 4;
goto out;
}
STATIC int INIT inflate_block(
int *e
)
STATIC int INIT inflate(void)
static ulg crc_32_tab[256];
static ulg crc;
#define CRC_VALUE (crc ^ 0xffffffffUL)
static void INIT
makecrc(void)
#define ASCII_FLAG   0x01
#define CONTINUATION 0x02
#define EXTRA_FIELD  0x04
#define ORIG_NAME    0x08
#define COMMENT      0x10
#define ENCRYPTED    0x20
#define RESERVED     0xC0
static int INIT gunzip(void)
