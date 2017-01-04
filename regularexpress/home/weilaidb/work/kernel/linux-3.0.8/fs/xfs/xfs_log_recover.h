#define __XFS_LOG_RECOVER_H__
#define XLOG_RHASH_BITS  4
#define XLOG_RHASH_SIZE	16
#define XLOG_RHASH_SHIFT 2
#define XLOG_RHASH(tid)	\
((((__uint32_t)tid)>>XLOG_RHASH_SHIFT) & (XLOG_RHASH_SIZE-1))
#define XLOG_MAX_REGIONS_IN_ITEM   (XFS_MAX_BLOCKSIZE / XFS_BLF_CHUNK / 2 + 1)
typedef struct xlog_recover_item  xlog_recover_item_t;
struct xlog_tid;
typedef struct xlog_recover  xlog_recover_t;
#define ITEM_TYPE(i)	(*(ushort *)(i)->ri_buf[0].i_addr)
#define	XLOG_BC_TABLE_SIZE	64
#define	XLOG_RECOVER_PASS1	1
#define	XLOG_RECOVER_PASS2	2
