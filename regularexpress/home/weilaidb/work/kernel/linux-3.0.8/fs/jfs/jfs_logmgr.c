static struct lbuf *log_redrive_list;
static DEFINE_SPINLOCK(log_redrive_lock);
#define LOG_LOCK_INIT(log)	mutex_init(&(log)->loglock)
#define LOG_LOCK(log)		mutex_lock(&((log)->loglock))
#define LOG_UNLOCK(log)		mutex_unlock(&((log)->loglock))
#define LOGGC_LOCK_INIT(log)	spin_lock_init(&(log)->gclock)
#define LOGGC_LOCK(log)		spin_lock_irq(&(log)->gclock)
#define LOGGC_UNLOCK(log)	spin_unlock_irq(&(log)->gclock)
#define LOGGC_WAKEUP(tblk)	wake_up_all(&(tblk)->gcwait)
#define	LOGSYNC_DELTA(logsize)		min((logsize)/8, 128*LOGPSIZE)
#define	LOGSYNC_BARRIER(logsize)	((logsize)/4)
static DEFINE_SPINLOCK(jfsLCacheLock);
#define	LCACHE_LOCK(flags)	spin_lock_irqsave(&jfsLCacheLock, flags)
#define	LCACHE_UNLOCK(flags)	spin_unlock_irqrestore(&jfsLCacheLock, flags)
#define LCACHE_SLEEP_COND(wq, cond, flags)	\
do  while (0)
#define	LCACHE_WAKEUP(event)	wake_up(event)
#define	lbmREAD		0x0001
#define	lbmWRITE	0x0002
#define	lbmRELEASE	0x0004
#define	lbmSYNC		0x0008
#define lbmFREE		0x0010
#define	lbmDONE		0x0020
#define	lbmERROR	0x0040
#define lbmGC		0x0080
#define lbmDIRECT	0x0100
static LIST_HEAD(jfs_external_logs);
static struct jfs_log *dummy_log = NULL;
static DEFINE_MUTEX(jfs_log_mutex);
static int lmWriteRecord(struct jfs_log * log, struct tblock * tblk,
struct lrd * lrd, struct tlock * tlck);
static int lmNextPage(struct jfs_log * log);
static int lmLogFileSystem(struct jfs_log * log, struct jfs_sb_info *sbi,
int activate);
static int open_inline_log(struct super_block *sb);
static int open_dummy_log(struct super_block *sb);
static int lbmLogInit(struct jfs_log * log);
static void lbmLogShutdown(struct jfs_log * log);
static struct lbuf *lbmAllocate(struct jfs_log * log, int);
static void lbmFree(struct lbuf * bp);
static void lbmfree(struct lbuf * bp);
static int lbmRead(struct jfs_log * log, int pn, struct lbuf ** bpp);
static void lbmWrite(struct jfs_log * log, struct lbuf * bp, int flag, int cant_block);
static void lbmDirectWrite(struct jfs_log * log, struct lbuf * bp, int flag);
static int lbmIOWait(struct lbuf * bp, int flag);
static bio_end_io_t lbmIODone;
static void lbmStartIO(struct lbuf * bp);
static void lmGCwrite(struct jfs_log * log, int cant_block);
static int lmLogSync(struct jfs_log * log, int hard_sync);
static struct lmStat  lmStat;
static void write_special_inodes(struct jfs_log *log,
int (*writer)(struct address_space *))
int lmLog(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
static int
lmWriteRecord(struct jfs_log * log, struct tblock * tblk, struct lrd * lrd,
struct tlock * tlck)
static int lmNextPage(struct jfs_log * log)
int lmGroupCommit(struct jfs_log * log, struct tblock * tblk)
static void lmGCwrite(struct jfs_log * log, int cant_write)
static void lmPostGC(struct lbuf * bp)
static int lmLogSync(struct jfs_log * log, int hard_sync)
void jfs_syncpt(struct jfs_log *log, int hard_sync)
int lmLogOpen(struct super_block *sb)
static int open_inline_log(struct super_block *sb)
static int open_dummy_log(struct super_block *sb)
int lmLogInit(struct jfs_log * log)
int lmLogClose(struct super_block *sb)
void jfs_flush_journal(struct jfs_log *log, int wait)
int lmLogShutdown(struct jfs_log * log)
static int lmLogFileSystem(struct jfs_log * log, struct jfs_sb_info *sbi,
int activate)
static int lbmLogInit(struct jfs_log * log)
static void lbmLogShutdown(struct jfs_log * log)
static struct lbuf *lbmAllocate(struct jfs_log * log, int pn)
static void lbmFree(struct lbuf * bp)
static void lbmfree(struct lbuf * bp)
static inline void lbmRedrive(struct lbuf *bp)
static int lbmRead(struct jfs_log * log, int pn, struct lbuf ** bpp)
static void lbmWrite(struct jfs_log * log, struct lbuf * bp, int flag,
int cant_block)
static void lbmDirectWrite(struct jfs_log * log, struct lbuf * bp, int flag)
static void lbmStartIO(struct lbuf * bp)
static int lbmIOWait(struct lbuf * bp, int flag)
static void lbmIODone(struct bio *bio, int error)
int jfsIOWait(void *arg)
int lmLogFormat(struct jfs_log *log, s64 logAddress, int logSize)
static int jfs_lmstats_proc_show(struct seq_file *m, void *v)
static int jfs_lmstats_proc_open(struct inode *inode, struct file *file)
const struct file_operations jfs_lmstats_proc_fops = ;
