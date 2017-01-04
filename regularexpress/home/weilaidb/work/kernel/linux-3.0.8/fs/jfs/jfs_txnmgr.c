static struct  TxAnchor;
int jfs_tlocks_low;
static struct  TxStat;
static int nTxBlock = -1;
module_param(nTxBlock, int, 0);
MODULE_PARM_DESC(nTxBlock,
"Number of transaction blocks (max:65536)");
static int nTxLock = -1;
module_param(nTxLock, int, 0);
MODULE_PARM_DESC(nTxLock,
"Number of transaction locks (max:65536)");
struct tblock *TxBlock;
static int TxLockLWM;
static int TxLockHWM;
static int TxLockVHWM;
struct tlock *TxLock;
static DEFINE_SPINLOCK(jfsTxnLock);
#define TXN_LOCK()		spin_lock(&jfsTxnLock)
#define TXN_UNLOCK()		spin_unlock(&jfsTxnLock)
#define LAZY_LOCK_INIT()	spin_lock_init(&TxAnchor.LazyLock);
#define LAZY_LOCK(flags)	spin_lock_irqsave(&TxAnchor.LazyLock, flags)
#define LAZY_UNLOCK(flags) spin_unlock_irqrestore(&TxAnchor.LazyLock, flags)
static DECLARE_WAIT_QUEUE_HEAD(jfs_commit_thread_wait);
static int jfs_commit_thread_waking;
static inline void TXN_SLEEP_DROP_LOCK(wait_queue_head_t * event)
#define TXN_SLEEP(event)\
#define TXN_WAKEUP(event) wake_up_all(event)
static struct  stattx;
static int diLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck, struct commit * cd);
static int dataLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck);
static void dtLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck);
static void mapLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck);
static void txAllocPMap(struct inode *ip, struct maplock * maplock,
struct tblock * tblk);
static void txForce(struct tblock * tblk);
static int txLog(struct jfs_log * log, struct tblock * tblk,
struct commit * cd);
static void txUpdateMap(struct tblock * tblk);
static void txRelease(struct tblock * tblk);
static void xtLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck);
static void LogSyncRelease(struct metapage * mp);
static lid_t txLockAlloc(void)
static void txLockFree(lid_t lid)
int txInit(void)
void txExit(void)
tid_t txBegin(struct super_block *sb, int flag)
void txBeginAnon(struct super_block *sb)
void txEnd(tid_t tid)
struct tlock *txLock(tid_t tid, struct inode *ip, struct metapage * mp,
int type)
static void txRelease(struct tblock * tblk)
static void txUnlock(struct tblock * tblk)
struct tlock *txMaplock(tid_t tid, struct inode *ip, int type)
struct linelock *txLinelock(struct linelock * tlock)
int txCommit(tid_t tid,
int nip,
struct inode **iplist,
int flag)
static int txLog(struct jfs_log * log, struct tblock * tblk, struct commit * cd)
static int diLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck, struct commit * cd)
static int dataLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
static void dtLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
static void xtLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
static void mapLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
void txEA(tid_t tid, struct inode *ip, dxd_t * oldea, dxd_t * newea)
static void txForce(struct tblock * tblk)
static void txUpdateMap(struct tblock * tblk)
static void txAllocPMap(struct inode *ip, struct maplock * maplock,
struct tblock * tblk)
void txFreeMap(struct inode *ip,
struct maplock * maplock, struct tblock * tblk, int maptype)
void txFreelock(struct inode *ip)
void txAbort(tid_t tid, int dirty)
static void txLazyCommit(struct tblock * tblk)
int jfs_lazycommit(void *arg)
void txLazyUnlock(struct tblock * tblk)
static void LogSyncRelease(struct metapage * mp)
void txQuiesce(struct super_block *sb)
void txResume(struct super_block *sb)
int jfs_sync(void *arg)
#if defined(CONFIG_PROC_FS) && defined(CONFIG_JFS_DEBUG)
static int jfs_txanchor_proc_show(struct seq_file *m, void *v)
static int jfs_txanchor_proc_open(struct inode *inode, struct file *file)
const struct file_operations jfs_txanchor_proc_fops = ;
#if defined(CONFIG_PROC_FS) && defined(CONFIG_JFS_STATISTICS)
static int jfs_txstats_proc_show(struct seq_file *m, void *v)
static int jfs_txstats_proc_open(struct inode *inode, struct file *file)
const struct file_operations jfs_txstats_proc_fops = ;
