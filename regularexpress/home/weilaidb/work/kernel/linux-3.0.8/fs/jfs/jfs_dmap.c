#define BMAP_LOCK_INIT(bmp)	mutex_init(&bmp->db_bmaplock)
#define BMAP_LOCK(bmp)		mutex_lock(&bmp->db_bmaplock)
#define BMAP_UNLOCK(bmp)	mutex_unlock(&bmp->db_bmaplock)
static void dbAllocBits(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static void dbSplit(dmtree_t * tp, int leafno, int splitsz, int newval);
static int dbBackSplit(dmtree_t * tp, int leafno);
static int dbJoin(dmtree_t * tp, int leafno, int newval);
static void dbAdjTree(dmtree_t * tp, int leafno, int newval);
static int dbAdjCtl(struct bmap * bmp, s64 blkno, int newval, int alloc,
int level);
static int dbAllocAny(struct bmap * bmp, s64 nblocks, int l2nb, s64 * results);
static int dbAllocNext(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static int dbAllocNear(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks,
int l2nb, s64 * results);
static int dbAllocDmap(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static int dbAllocDmapLev(struct bmap * bmp, struct dmap * dp, int nblocks,
int l2nb,
s64 * results);
static int dbAllocAG(struct bmap * bmp, int agno, s64 nblocks, int l2nb,
s64 * results);
static int dbAllocCtl(struct bmap * bmp, s64 nblocks, int l2nb, s64 blkno,
s64 * results);
static int dbExtend(struct inode *ip, s64 blkno, s64 nblocks, s64 addnblocks);
static int dbFindBits(u32 word, int l2nb);
static int dbFindCtl(struct bmap * bmp, int l2nb, int level, s64 * blkno);
static int dbFindLeaf(dmtree_t * tp, int l2nb, int *leafidx);
static int dbFreeBits(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static int dbFreeDmap(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static int dbMaxBud(u8 * cp);
s64 dbMapFileSizeToMapSize(struct inode *ipbmap);
static int blkstol2(s64 nb);
static int cntlz(u32 value);
static int cnttz(u32 word);
static int dbAllocDmapBU(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks);
static int dbInitDmap(struct dmap * dp, s64 blkno, int nblocks);
static int dbInitDmapTree(struct dmap * dp);
static int dbInitTree(struct dmaptree * dtp);
static int dbInitDmapCtl(struct dmapctl * dcp, int level, int i);
static int dbGetL2AGSize(s64 nblocks);
static const s8 budtab[256] = ;
int dbMount(struct inode *ipbmap)
int dbUnmount(struct inode *ipbmap, int mounterror)
int dbSync(struct inode *ipbmap)
int dbFree(struct inode *ip, s64 blkno, s64 nblocks)
int
dbUpdatePMap(struct inode *ipbmap,
int free, s64 blkno, s64 nblocks, struct tblock * tblk)
int dbNextAG(struct inode *ipbmap)
int dbAlloc(struct inode *ip, s64 hint, s64 nblocks, s64 * results)
int dbAllocExact(struct inode *ip, s64 blkno, int nblocks)
int
dbReAlloc(struct inode *ip,
s64 blkno, s64 nblocks, s64 addnblocks, s64 * results)
static int dbExtend(struct inode *ip, s64 blkno, s64 nblocks, s64 addnblocks)
static int dbAllocNext(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
static int
dbAllocNear(struct bmap * bmp,
struct dmap * dp, s64 blkno, int nblocks, int l2nb, s64 * results)
static int
dbAllocAG(struct bmap * bmp, int agno, s64 nblocks, int l2nb, s64 * results)
static int dbAllocAny(struct bmap * bmp, s64 nblocks, int l2nb, s64 * results)
static int dbFindCtl(struct bmap * bmp, int l2nb, int level, s64 * blkno)
static int
dbAllocCtl(struct bmap * bmp, s64 nblocks, int l2nb, s64 blkno, s64 * results)
static int
dbAllocDmapLev(struct bmap * bmp,
struct dmap * dp, int nblocks, int l2nb, s64 * results)
static int dbAllocDmap(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
static int dbFreeDmap(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
static void dbAllocBits(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
static int dbFreeBits(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
static int
dbAdjCtl(struct bmap * bmp, s64 blkno, int newval, int alloc, int level)
static void dbSplit(dmtree_t * tp, int leafno, int splitsz, int newval)
static int dbBackSplit(dmtree_t * tp, int leafno)
static int dbJoin(dmtree_t * tp, int leafno, int newval)
static void dbAdjTree(dmtree_t * tp, int leafno, int newval)
static int dbFindLeaf(dmtree_t * tp, int l2nb, int *leafidx)
static int dbFindBits(u32 word, int l2nb)
static int dbMaxBud(u8 * cp)
static int cnttz(u32 word)
static int cntlz(u32 value)
static int blkstol2(s64 nb)
int dbAllocBottomUp(struct inode *ip, s64 blkno, s64 nblocks)
static int dbAllocDmapBU(struct bmap * bmp, struct dmap * dp, s64 blkno,
int nblocks)
int dbExtendFS(struct inode *ipbmap, s64 blkno,	s64 nblocks)
void dbFinalizeBmap(struct inode *ipbmap)
static int dbInitDmap(struct dmap * dp, s64 Blkno, int nblocks)
static int dbInitDmapTree(struct dmap * dp)
static int dbInitTree(struct dmaptree * dtp)
static int dbInitDmapCtl(struct dmapctl * dcp, int level, int i)
static int dbGetL2AGSize(s64 nblocks)
#define MAXL0PAGES	(1 + LPERCTL)
#define MAXL1PAGES	(1 + LPERCTL * MAXL0PAGES)
#define MAXL2PAGES	(1 + LPERCTL * MAXL1PAGES)
#define BMAPPGTOLEV(npages)	\
(((npages) <= 3 + MAXL0PAGES) ? 0 : \
((npages) <= 2 + MAXL1PAGES) ? 1 : 2)
s64 dbMapFileSizeToMapSize(struct inode * ipbmap)
