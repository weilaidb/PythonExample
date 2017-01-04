#define _H_JFS_XTREE
typedef struct xad  xad_t;
#define MAXXLEN		((1 << 24) - 1)
#define XTSLOTSIZE	16
#define L2XTSLOTSIZE	4
#define XADoffset(xad, offset64)\
#define XADaddress(xad, address64)\
#define XADlength(xad, length32)	(xad)->len = __cpu_to_le24(length32)
#define offsetXAD(xad)\
( ((s64)((xad)->off1)) << 32 | __le32_to_cpu((xad)->off2))
#define addressXAD(xad)\
( ((s64)((xad)->addr1)) << 32 | __le32_to_cpu((xad)->addr2))
#define lengthXAD(xad)	__le24_to_cpu((xad)->len)
struct xadlist ;
#define XAD_NEW		0x01
#define XAD_EXTENDED	0x02
#define XAD_COMPRESSED	0x04
#define XAD_NOTRECORDED 0x08
#define XAD_COW		0x10
#define XTROOTINITSLOT_DIR 6
#define XTROOTINITSLOT	10
#define XTROOTMAXSLOT	18
#define XTPAGEMAXSLOT	256
#define XTENTRYSTART	2
typedef union  xtpage_t;
extern int xtLookup(struct inode *ip, s64 lstart, s64 llen,
int *pflag, s64 * paddr, int *plen, int flag);
extern void xtInitRoot(tid_t tid, struct inode *ip);
extern int xtInsert(tid_t tid, struct inode *ip,
int xflag, s64 xoff, int xlen, s64 * xaddrp, int flag);
extern int xtExtend(tid_t tid, struct inode *ip, s64 xoff, int xlen,
int flag);
extern int xtTailgate(tid_t tid, struct inode *ip,
s64 xoff, int xlen, s64 xaddr, int flag);
extern int xtUpdate(tid_t tid, struct inode *ip, struct xad *nxad);
extern int xtDelete(tid_t tid, struct inode *ip, s64 xoff, int xlen,
int flag);
extern s64 xtTruncate(tid_t tid, struct inode *ip, s64 newsize, int type);
extern s64 xtTruncate_pmap(tid_t tid, struct inode *ip, s64 committed_size);
extern int xtRelocate(tid_t tid, struct inode *ip,
xad_t * oxad, s64 nxaddr, int xtype);
extern int xtAppend(tid_t tid,
struct inode *ip, int xflag, s64 xoff, int maxblocks,
int *xlenp, s64 * xaddrp, int flag);
