#define __LINUX_BLK_TYPES_H
struct bio_set;
struct bio;
struct bio_integrity_payload;
struct page;
struct block_device;
typedef void (bio_end_io_t) (struct bio *, int);
typedef void (bio_destructor_t) (struct bio *);
struct bio_vec ;
struct bio ;
#define BIO_UPTODATE	0
#define BIO_RW_BLOCK	1
#define BIO_EOF		2
#define BIO_SEG_VALID	3
#define BIO_CLONED	4
#define BIO_BOUNCED	5
#define BIO_USER_MAPPED 6
#define BIO_EOPNOTSUPP	7
#define BIO_CPU_AFFINE	8
#define BIO_NULL_MAPPED 9
#define BIO_FS_INTEGRITY 10
#define BIO_QUIET	11
#define BIO_MAPPED_INTEGRITY 12
#define bio_flagged(bio, flag)	((bio)->bi_flags & (1 << (flag)))
#define BIO_POOL_BITS		(4)
#define BIO_POOL_NONE		((1UL << BIO_POOL_BITS) - 1)
#define BIO_POOL_OFFSET		(BITS_PER_LONG - BIO_POOL_BITS)
#define BIO_POOL_MASK		(1UL << BIO_POOL_OFFSET)
#define BIO_POOL_IDX(bio)	((bio)->bi_flags >> BIO_POOL_OFFSET)
enum rq_flag_bits ;
#define REQ_WRITE		(1 << __REQ_WRITE)
#define REQ_FAILFAST_DEV	(1 << __REQ_FAILFAST_DEV)
#define REQ_FAILFAST_TRANSPORT	(1 << __REQ_FAILFAST_TRANSPORT)
#define REQ_FAILFAST_DRIVER	(1 << __REQ_FAILFAST_DRIVER)
#define REQ_SYNC		(1 << __REQ_SYNC)
#define REQ_META		(1 << __REQ_META)
#define REQ_DISCARD		(1 << __REQ_DISCARD)
#define REQ_NOIDLE		(1 << __REQ_NOIDLE)
#define REQ_FAILFAST_MASK \
(REQ_FAILFAST_DEV | REQ_FAILFAST_TRANSPORT | REQ_FAILFAST_DRIVER)
#define REQ_COMMON_MASK \
(REQ_WRITE | REQ_FAILFAST_MASK | REQ_SYNC | REQ_META | REQ_DISCARD | \
REQ_NOIDLE | REQ_FLUSH | REQ_FUA | REQ_SECURE)
#define REQ_CLONE_MASK		REQ_COMMON_MASK
#define REQ_RAHEAD		(1 << __REQ_RAHEAD)
#define REQ_THROTTLED		(1 << __REQ_THROTTLED)
#define REQ_SORTED		(1 << __REQ_SORTED)
#define REQ_SOFTBARRIER		(1 << __REQ_SOFTBARRIER)
#define REQ_FUA			(1 << __REQ_FUA)
#define REQ_NOMERGE		(1 << __REQ_NOMERGE)
#define REQ_STARTED		(1 << __REQ_STARTED)
#define REQ_DONTPREP		(1 << __REQ_DONTPREP)
#define REQ_QUEUED		(1 << __REQ_QUEUED)
#define REQ_ELVPRIV		(1 << __REQ_ELVPRIV)
#define REQ_FAILED		(1 << __REQ_FAILED)
#define REQ_QUIET		(1 << __REQ_QUIET)
#define REQ_PREEMPT		(1 << __REQ_PREEMPT)
#define REQ_ALLOCED		(1 << __REQ_ALLOCED)
#define REQ_COPY_USER		(1 << __REQ_COPY_USER)
#define REQ_FLUSH		(1 << __REQ_FLUSH)
#define REQ_FLUSH_SEQ		(1 << __REQ_FLUSH_SEQ)
#define REQ_IO_STAT		(1 << __REQ_IO_STAT)
#define REQ_MIXED_MERGE		(1 << __REQ_MIXED_MERGE)
#define REQ_SECURE		(1 << __REQ_SECURE)
