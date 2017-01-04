#define _H_JFS_IMAP
#define	EXTSPERIAG	128
#define IMAPBLKNO	0
#define SMAPSZ		4
#define	EXTSPERSUM	32
#define	L2EXTSPERSUM	5
#define	PGSPERIEXT	4
#define	MAXIAGS		((1<<20)-1)
#define	MAXAG		128
#define AMAPSIZE	512
#define SMAPSIZE	16
#define	INOTOIAG(ino)	((ino) >> L2INOSPERIAG)
#define IAGTOLBLK(iagno,l2nbperpg)	(((iagno) + 1) << (l2nbperpg))
#define INOPBLK(pxd,ino,l2nbperpg)	(addressPXD((pxd)) +		\
((((ino) & (INOSPEREXT-1)) >> L2INOSPERPAGE) << (l2nbperpg)))
struct iag ;
struct iagctl_disk ;
struct iagctl ;
struct dinomap_disk ;
struct dinomap ;
struct inomap ;
#define	im_freeiag	im_imap.in_freeiag
#define	im_nextiag	im_imap.in_nextiag
#define	im_agctl	im_imap.in_agctl
#define	im_nbperiext	im_imap.in_nbperiext
#define	im_l2nbperiext	im_imap.in_l2nbperiext
#define	im_diskblock	im_imap.in_diskblock
#define	im_maxag	im_imap.in_maxag
extern int diFree(struct inode *);
extern int diAlloc(struct inode *, bool, struct inode *);
extern int diSync(struct inode *);
extern int diUpdatePMap(struct inode *ipimap, unsigned long inum,
bool is_free, struct tblock * tblk);
extern int diExtendFS(struct inode *ipimap, struct inode *ipbmap);
extern int diMount(struct inode *);
extern int diUnmount(struct inode *, int);
extern int diRead(struct inode *);
extern struct inode *diReadSpecial(struct super_block *, ino_t, int);
extern void diWriteSpecial(struct inode *, int);
extern void diFreeSpecial(struct inode *);
extern int diWrite(tid_t tid, struct inode *);
