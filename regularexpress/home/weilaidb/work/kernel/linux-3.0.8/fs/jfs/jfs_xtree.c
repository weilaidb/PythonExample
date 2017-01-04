#define XT_INSERT	0x00000001
#define XT_CMP(CMP, K, X, OFFSET64)\
#define XT_PUTENTRY(XAD, FLAG, OFF, LEN, ADDR)\
#define XT_PAGE(IP, MP) BT_PAGE(IP, MP, xtpage_t, i_xtroot)
#define XT_GETPAGE(IP, BN, MP, SIZE, P, RC)\
#define XT_PUTPAGE(MP) BT_PUTPAGE(MP)
#define XT_GETSEARCH(IP, LEAF, BN, MP, P, INDEX) \
BT_GETSEARCH(IP, LEAF, BN, MP, xtpage_t, P, INDEX, i_xtroot)
struct xtsplit ;
static struct  xtStat;
static int xtSearch(struct inode *ip, s64 xoff, s64 *next, int *cmpp,
struct btstack * btstack, int flag);
static int xtSplitUp(tid_t tid,
struct inode *ip,
struct xtsplit * split, struct btstack * btstack);
static int xtSplitPage(tid_t tid, struct inode *ip, struct xtsplit * split,
struct metapage ** rmpp, s64 * rbnp);
static int xtSplitRoot(tid_t tid, struct inode *ip,
struct xtsplit * split, struct metapage ** rmpp);
static int xtDeleteUp(tid_t tid, struct inode *ip, struct metapage * fmp,
xtpage_t * fp, struct btstack * btstack);
static int xtSearchNode(struct inode *ip,
xad_t * xad,
int *cmpp, struct btstack * btstack, int flag);
static int xtRelink(tid_t tid, struct inode *ip, xtpage_t * fp);
int xtLookup(struct inode *ip, s64 lstart,
s64 llen, int *pflag, s64 * paddr, s32 * plen, int no_check)
static int xtSearch(struct inode *ip, s64 xoff,	s64 *nextp,
int *cmpp, struct btstack * btstack, int flag)
int xtInsert(tid_t tid,
struct inode *ip, int xflag, s64 xoff, s32 xlen, s64 * xaddrp,
int flag)
static int
xtSplitUp(tid_t tid,
struct inode *ip, struct xtsplit * split, struct btstack * btstack)
static int
xtSplitPage(tid_t tid, struct inode *ip,
struct xtsplit * split, struct metapage ** rmpp, s64 * rbnp)
static int
xtSplitRoot(tid_t tid,
struct inode *ip, struct xtsplit * split, struct metapage ** rmpp)
int xtExtend(tid_t tid,
struct inode *ip, s64 xoff,
s32 xlen,
int flag)
int xtTailgate(tid_t tid,
struct inode *ip, s64 xoff,
s32 xlen,
s64 xaddr,
int flag)
int xtUpdate(tid_t tid, struct inode *ip, xad_t * nxad)
int xtAppend(tid_t tid,
struct inode *ip, int xflag, s64 xoff, s32 maxblocks,
s32 * xlenp,
s64 * xaddrp,
int flag)
int xtDelete(tid_t tid, struct inode *ip, s64 xoff, s32 xlen, int flag)
static int
xtDeleteUp(tid_t tid, struct inode *ip,
struct metapage * fmp, xtpage_t * fp, struct btstack * btstack)
int
xtRelocate(tid_t tid, struct inode * ip, xad_t * oxad,
s64 nxaddr,
int xtype)
static int xtSearchNode(struct inode *ip, xad_t * xad,
int *cmpp, struct btstack * btstack, int flag)
static int xtRelink(tid_t tid, struct inode *ip, xtpage_t * p)
void xtInitRoot(tid_t tid, struct inode *ip)
#define MAX_TRUNCATE_LEAVES 50
s64 xtTruncate(tid_t tid, struct inode *ip, s64 newsize, int flag)
s64 xtTruncate_pmap(tid_t tid, struct inode *ip, s64 committed_size)
static int jfs_xtstat_proc_show(struct seq_file *m, void *v)
static int jfs_xtstat_proc_open(struct inode *inode, struct file *file)
const struct file_operations jfs_xtstat_proc_fops = ;
