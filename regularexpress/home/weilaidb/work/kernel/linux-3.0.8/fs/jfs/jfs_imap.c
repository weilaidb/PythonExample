#define IAGFREE_LOCK_INIT(imap)		mutex_init(&imap->im_freelock)
#define IAGFREE_LOCK(imap)		mutex_lock(&imap->im_freelock)
#define IAGFREE_UNLOCK(imap)		mutex_unlock(&imap->im_freelock)
#define AG_LOCK_INIT(imap,index)	mutex_init(&(imap->im_aglock[index]))
#define AG_LOCK(imap,agno)		mutex_lock(&imap->im_aglock[agno])
#define AG_UNLOCK(imap,agno)		mutex_unlock(&imap->im_aglock[agno])
static int diAllocAG(struct inomap *, int, bool, struct inode *);
static int diAllocAny(struct inomap *, int, bool, struct inode *);
static int diAllocBit(struct inomap *, struct iag *, int);
static int diAllocExt(struct inomap *, int, struct inode *);
static int diAllocIno(struct inomap *, int, struct inode *);
static int diFindFree(u32, int);
static int diNewExt(struct inomap *, struct iag *, int);
static int diNewIAG(struct inomap *, int *, int, struct metapage **);
static void duplicateIXtree(struct super_block *, s64, int, s64 *);
static int diIAGRead(struct inomap * imap, int, struct metapage **);
static int copy_from_dinode(struct dinode *, struct inode *);
static void copy_to_dinode(struct dinode *, struct inode *);
int diMount(struct inode *ipimap)
int diUnmount(struct inode *ipimap, int mounterror)
int diSync(struct inode *ipimap)
int diRead(struct inode *ip)
struct inode *diReadSpecial(struct super_block *sb, ino_t inum, int secondary)
void diWriteSpecial(struct inode *ip, int secondary)
void diFreeSpecial(struct inode *ip)
int diWrite(tid_t tid, struct inode *ip)
int diFree(struct inode *ip)
static inline void
diInitInode(struct inode *ip, int iagno, int ino, int extno, struct iag * iagp)
int diAlloc(struct inode *pip, bool dir, struct inode *ip)
static int
diAllocAG(struct inomap * imap, int agno, bool dir, struct inode *ip)
static int
diAllocAny(struct inomap * imap, int agno, bool dir, struct inode *ip)
static int diAllocIno(struct inomap * imap, int agno, struct inode *ip)
static int diAllocExt(struct inomap * imap, int agno, struct inode *ip)
static int diAllocBit(struct inomap * imap, struct iag * iagp, int ino)
static int diNewExt(struct inomap * imap, struct iag * iagp, int extno)
static int
diNewIAG(struct inomap * imap, int *iagnop, int agno, struct metapage ** mpp)
static int diIAGRead(struct inomap * imap, int iagno, struct metapage ** mpp)
static int diFindFree(u32 word, int start)
int
diUpdatePMap(struct inode *ipimap,
unsigned long inum, bool is_free, struct tblock * tblk)
int diExtendFS(struct inode *ipimap, struct inode *ipbmap)
static void duplicateIXtree(struct super_block *sb, s64 blkno,
int xlen, s64 *xaddr)
static int copy_from_dinode(struct dinode * dip, struct inode *ip)
static void copy_to_dinode(struct dinode * dip, struct inode *ip)
