struct dtsplit ;
#define DT_PAGE(IP, MP) BT_PAGE(IP, MP, dtpage_t, i_dtroot)
#define DT_GETPAGE(IP, BN, MP, SIZE, P, RC)\
#define DT_PUTPAGE(MP) BT_PUTPAGE(MP)
#define DT_GETSEARCH(IP, LEAF, BN, MP, P, INDEX) \
BT_GETSEARCH(IP, LEAF, BN, MP, dtpage_t, P, INDEX, i_dtroot)
static int dtSplitUp(tid_t tid, struct inode *ip,
struct dtsplit * split, struct btstack * btstack);
static int dtSplitPage(tid_t tid, struct inode *ip, struct dtsplit * split,
struct metapage ** rmpp, dtpage_t ** rpp, pxd_t * rxdp);
static int dtExtendPage(tid_t tid, struct inode *ip,
struct dtsplit * split, struct btstack * btstack);
static int dtSplitRoot(tid_t tid, struct inode *ip,
struct dtsplit * split, struct metapage ** rmpp);
static int dtDeleteUp(tid_t tid, struct inode *ip, struct metapage * fmp,
dtpage_t * fp, struct btstack * btstack);
static int dtRelink(tid_t tid, struct inode *ip, dtpage_t * p);
static int dtReadFirst(struct inode *ip, struct btstack * btstack);
static int dtReadNext(struct inode *ip,
loff_t * offset, struct btstack * btstack);
static int dtCompare(struct component_name * key, dtpage_t * p, int si);
static int ciCompare(struct component_name * key, dtpage_t * p, int si,
int flag);
static void dtGetKey(dtpage_t * p, int i, struct component_name * key,
int flag);
static int ciGetLeafPrefixKey(dtpage_t * lp, int li, dtpage_t * rp,
int ri, struct component_name * key, int flag);
static void dtInsertEntry(dtpage_t * p, int index, struct component_name * key,
ddata_t * data, struct dt_lock **);
static void dtMoveEntry(dtpage_t * sp, int si, dtpage_t * dp,
struct dt_lock ** sdtlock, struct dt_lock ** ddtlock,
int do_index);
static void dtDeleteEntry(dtpage_t * p, int fi, struct dt_lock ** dtlock);
static void dtTruncateEntry(dtpage_t * p, int ti, struct dt_lock ** dtlock);
static void dtLinelockFreelist(dtpage_t * p, int m, struct dt_lock ** dtlock);
#define ciToUpper(c)	UniStrupr((c)->name)
static struct metapage *read_index_page(struct inode *inode, s64 blkno)
static struct metapage *get_index_page(struct inode *inode, s64 blkno)
static struct dir_table_slot *find_index(struct inode *ip, u32 index,
struct metapage ** mp, s64 *lblock)
static inline void lock_index(tid_t tid, struct inode *ip, struct metapage * mp,
u32 index)
static u32 add_index(tid_t tid, struct inode *ip, s64 bn, int slot)
static void free_index(tid_t tid, struct inode *ip, u32 index, u32 next)
static void modify_index(tid_t tid, struct inode *ip, u32 index, s64 bn,
int slot, struct metapage ** mp, s64 *lblock)
static int read_index(struct inode *ip, u32 index,
struct dir_table_slot * dirtab_slot)
int dtSearch(struct inode *ip, struct component_name * key, ino_t * data,
struct btstack * btstack, int flag)
int dtInsert(tid_t tid, struct inode *ip,
struct component_name * name, ino_t * fsn, struct btstack * btstack)
static int dtSplitUp(tid_t tid,
struct inode *ip, struct dtsplit * split, struct btstack * btstack)
static int dtSplitPage(tid_t tid, struct inode *ip, struct dtsplit * split,
struct metapage ** rmpp, dtpage_t ** rpp, pxd_t * rpxdp)
static int dtExtendPage(tid_t tid,
struct inode *ip, struct dtsplit * split, struct btstack * btstack)
static int dtSplitRoot(tid_t tid,
struct inode *ip, struct dtsplit * split, struct metapage ** rmpp)
int dtDelete(tid_t tid,
struct inode *ip, struct component_name * key, ino_t * ino, int flag)
static int dtDeleteUp(tid_t tid, struct inode *ip,
struct metapage * fmp, dtpage_t * fp, struct btstack * btstack)
int dtRelocate(tid_t tid, struct inode *ip, s64 lmxaddr, pxd_t * opxd,
s64 nxaddr)
static int dtSearchNode(struct inode *ip, s64 lmxaddr, pxd_t * kpxd,
struct btstack * btstack)
static int dtRelink(tid_t tid, struct inode *ip, dtpage_t * p)
void dtInitRoot(tid_t tid, struct inode *ip, u32 idotdot)
static void add_missing_indices(struct inode *inode, s64 bn)
struct jfs_dirent ;
static inline struct jfs_dirent *next_jfs_dirent(struct jfs_dirent *dirent)
int jfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int dtReadFirst(struct inode *ip, struct btstack * btstack)
static int dtReadNext(struct inode *ip, loff_t * offset,
struct btstack * btstack)
static int dtCompare(struct component_name * key,
dtpage_t * p,
int si)
static int ciCompare(struct component_name * key,
dtpage_t * p,
int si,
int flag)
static int ciGetLeafPrefixKey(dtpage_t * lp, int li, dtpage_t * rp,
int ri, struct component_name * key, int flag)
static void dtGetKey(dtpage_t * p, int i,
struct component_name * key, int flag)
static void dtInsertEntry(dtpage_t * p, int index, struct component_name * key,
ddata_t * data, struct dt_lock ** dtlock)
static void dtMoveEntry(dtpage_t * sp, int si, dtpage_t * dp,
struct dt_lock ** sdtlock, struct dt_lock ** ddtlock,
int do_index)
static void dtDeleteEntry(dtpage_t * p, int fi, struct dt_lock ** dtlock)
static void dtTruncateEntry(dtpage_t * p, int ti, struct dt_lock ** dtlock)
static void dtLinelockFreelist(dtpage_t * p,
int m,
struct dt_lock ** dtlock)
int dtModify(tid_t tid, struct inode *ip,
struct component_name * key, ino_t * orig_ino, ino_t new_ino, int flag)
