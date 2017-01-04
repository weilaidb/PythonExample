#define _H_JFS_TXNMGR
#define tid_to_tblock(tid) (&TxBlock[tid])
#define lid_to_tlock(lid) (&TxLock[lid])
struct tblock ;
extern struct tblock *TxBlock;
#define	COMMIT_SYNC	0x0001
#define	COMMIT_FORCE	0x0002
#define	COMMIT_FLUSH	0x0004
#define COMMIT_MAP	0x00f0
#define	COMMIT_PMAP	0x0010
#define	COMMIT_WMAP	0x0020
#define	COMMIT_PWMAP	0x0040
#define	COMMIT_FREE	0x0f00
#define	COMMIT_DELETE	0x0100
#define	COMMIT_TRUNCATE	0x0200
#define	COMMIT_CREATE	0x0400
#define	COMMIT_LAZY	0x0800
#define COMMIT_PAGE	0x1000
#define COMMIT_INODE	0x2000
struct tlock ;
extern struct tlock *TxLock;
#define tlckPAGELOCK		0x8000
#define tlckINODELOCK		0x4000
#define tlckLINELOCK		0x2000
#define tlckINLINELOCK		0x1000
#define tlckLOG			0x0800
#define	tlckUPDATEMAP		0x0080
#define	tlckDIRECTORY		0x0040
#define tlckFREELOCK		0x0008
#define tlckWRITEPAGE		0x0004
#define tlckFREEPAGE		0x0002
#define	tlckTYPE		0xfe00
#define	tlckINODE		0x8000
#define	tlckXTREE		0x4000
#define	tlckDTREE		0x2000
#define	tlckMAP			0x1000
#define	tlckEA			0x0800
#define	tlckACL			0x0400
#define	tlckDATA		0x0200
#define	tlckBTROOT		0x0100
#define	tlckOPERATION		0x00ff
#define tlckGROW		0x0001
#define tlckREMOVE		0x0002
#define tlckTRUNCATE		0x0004
#define tlckRELOCATE		0x0008
#define tlckENTRY		0x0001
#define tlckEXTEND		0x0002
#define tlckSPLIT		0x0010
#define tlckNEW			0x0020
#define tlckFREE		0x0040
#define tlckRELINK		0x0080
struct lv ;
#define	TLOCKSHORT	20
#define	TLOCKLONG	28
struct linelock ;
#define dt_lock	linelock
struct xtlock ;
struct maplock ;
#define	mlckALLOC		0x00f0
#define	mlckALLOCXADLIST	0x0080
#define	mlckALLOCPXDLIST	0x0040
#define	mlckALLOCXAD		0x0020
#define	mlckALLOCPXD		0x0010
#define	mlckFREE		0x000f
#define	mlckFREEXADLIST		0x0008
#define	mlckFREEPXDLIST		0x0004
#define	mlckFREEXAD		0x0002
#define	mlckFREEPXD		0x0001
#define	pxd_lock	maplock
struct xdlistlock ;
#define xdlist union64._xdlist
struct commit ;
extern int jfs_tlocks_low;
extern int txInit(void);
extern void txExit(void);
extern struct tlock *txLock(tid_t, struct inode *, struct metapage *, int);
extern struct tlock *txMaplock(tid_t, struct inode *, int);
extern int txCommit(tid_t, int, struct inode **, int);
extern tid_t txBegin(struct super_block *, int);
extern void txBeginAnon(struct super_block *);
extern void txEnd(tid_t);
extern void txAbort(tid_t, int);
extern struct linelock *txLinelock(struct linelock *);
extern void txFreeMap(struct inode *, struct maplock *, struct tblock *, int);
extern void txEA(tid_t, struct inode *, dxd_t *, dxd_t *);
extern void txFreelock(struct inode *);
extern int lmLog(struct jfs_log *, struct tblock *, struct lrd *,
struct tlock *);
extern void txQuiesce(struct super_block *);
extern void txResume(struct super_block *);
extern void txLazyUnlock(struct tblock *);
extern int jfs_lazycommit(void *);
extern int jfs_sync(void *);
