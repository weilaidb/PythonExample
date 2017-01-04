#define _H_JFS_LOGMGR
#define	LOGPSIZE	4096
#define	L2LOGPSIZE	12
#define LOGPAGES	16
#define	LOGSUPER_B	1
#define	LOGSTART_B	2
#define	LOGMAGIC	0x87654321
#define	LOGVERSION	1
#define MAX_ACTIVE	128
struct logsuper ;
#define NULL_UUID "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
#define	LOGMOUNT	0
#define LOGREDONE	1
#define LOGWRAP		2
#define LOGREADERR	3
struct logpage ;
#define LOGPHDRSIZE	8
#define LOGPTLRSIZE	8
#define LOG_COMMIT		0x8000
#define LOG_SYNCPT		0x4000
#define LOG_MOUNT		0x2000
#define LOG_REDOPAGE		0x0800
#define LOG_NOREDOPAGE		0x0080
#define LOG_NOREDOINOEXT	0x0040
#define LOG_UPDATEMAP		0x0008
#define LOG_NOREDOFILE		0x0001
#define	LOG_INODE		0x0001
#define	LOG_XTREE		0x0002
#define	LOG_DTREE		0x0004
#define	LOG_BTROOT		0x0010
#define	LOG_EA			0x0020
#define	LOG_ACL			0x0040
#define	LOG_DATA		0x0080
#define	LOG_NEW			0x0100
#define	LOG_EXTEND		0x0200
#define LOG_RELOCATE		0x0400
#define LOG_DIR_XTREE		0x0800
#define	LOG_ALLOCXADLIST	0x0080
#define	LOG_ALLOCPXDLIST	0x0040
#define	LOG_ALLOCXAD		0x0020
#define	LOG_ALLOCPXD		0x0010
#define	LOG_FREEXADLIST		0x0008
#define	LOG_FREEPXDLIST		0x0004
#define	LOG_FREEXAD		0x0002
#define	LOG_FREEPXD		0x0001
struct lrd ;
#define	LOGRDSIZE	(sizeof(struct lrd))
struct lvd ;
struct jfs_log ;
#define log_INLINELOG	1
#define log_SYNCBARRIER	2
#define log_QUIESCE	3
#define log_FLUSH	4
#define logGC_PAGEOUT	0x00000001
#define tblkGC_QUEUE		0x0001
#define tblkGC_READY		0x0002
#define tblkGC_COMMIT		0x0004
#define tblkGC_COMMITTED	0x0008
#define tblkGC_EOP		0x0010
#define tblkGC_FREE		0x0020
#define tblkGC_LEADER		0x0040
#define tblkGC_ERROR		0x0080
#define tblkGC_LAZY		0x0100
#define tblkGC_UNLOCKED		0x0200
struct lbuf ;
#define l_redrive_next l_freelist
struct logsyncblk ;
#define LOGSYNC_LOCK_INIT(log) spin_lock_init(&(log)->synclock)
#define LOGSYNC_LOCK(log, flags) spin_lock_irqsave(&(log)->synclock, flags)
#define LOGSYNC_UNLOCK(log, flags) \
spin_unlock_irqrestore(&(log)->synclock, flags)
#define logdiff(diff, lsn, log)\
extern int lmLogOpen(struct super_block *sb);
extern int lmLogClose(struct super_block *sb);
extern int lmLogShutdown(struct jfs_log * log);
extern int lmLogInit(struct jfs_log * log);
extern int lmLogFormat(struct jfs_log *log, s64 logAddress, int logSize);
extern int lmGroupCommit(struct jfs_log *, struct tblock *);
extern int jfsIOWait(void *);
extern void jfs_flush_journal(struct jfs_log * log, int wait);
extern void jfs_syncpt(struct jfs_log *log, int hard_sync);
