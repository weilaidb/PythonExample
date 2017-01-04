static int extBalloc(struct inode *, s64, s64 *, s64 *);
static int extBrealloc(struct inode *, s64, s64, s64 *, s64 *);
static s64 extRoundDown(s64 nb);
#define DPD(a)		(printk("(a): %d\n",(a)))
#define DPC(a)		(printk("(a): %c\n",(a)))
#define DPL1(a)					\
#define DPL(a)					\
#define DPD1(a)		(printk("(a): %d  ",(a)))
#define DPX(a)		(printk("(a): %08x\n",(a)))
#define DPX1(a)		(printk("(a): %08x  ",(a)))
#define DPS(a)		(printk("%s\n",(a)))
#define DPE(a)		(printk("\nENTERING: %s\n",(a)))
#define DPE1(a)		(printk("\nENTERING: %s",(a)))
#define DPS1(a)		(printk("  %s  ",(a)))
int
extAlloc(struct inode *ip, s64 xlen, s64 pno, xad_t * xp, bool abnr)
int extRealloc(struct inode *ip, s64 nxlen, xad_t * xp, bool abnr)
int extHint(struct inode *ip, s64 offset, xad_t * xp)
int extRecord(struct inode *ip, xad_t * xp)
int extFill(struct inode *ip, xad_t * xp)
static int
extBalloc(struct inode *ip, s64 hint, s64 * nblocks, s64 * blkno)
static int
extBrealloc(struct inode *ip,
s64 blkno, s64 nblks, s64 * newnblks, s64 * newblkno)
static s64 extRoundDown(s64 nb)
