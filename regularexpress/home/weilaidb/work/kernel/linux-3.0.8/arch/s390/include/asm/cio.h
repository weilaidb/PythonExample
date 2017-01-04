#define _ASM_S390_CIO_H_
#define LPM_ANYPATH 0xff
#define __MAX_CSSID 0
struct ccw1  __attribute__ ((packed,aligned(8)));
#define CCW_FLAG_DC		0x80
#define CCW_FLAG_CC		0x40
#define CCW_FLAG_SLI		0x20
#define CCW_FLAG_SKIP		0x10
#define CCW_FLAG_PCI		0x08
#define CCW_FLAG_IDA		0x04
#define CCW_FLAG_SUSPEND	0x02
#define CCW_CMD_READ_IPL	0x02
#define CCW_CMD_NOOP		0x03
#define CCW_CMD_BASIC_SENSE	0x04
#define CCW_CMD_TIC		0x08
#define CCW_CMD_STLCK           0x14
#define CCW_CMD_SENSE_PGID	0x34
#define CCW_CMD_SUSPEND_RECONN	0x5B
#define CCW_CMD_RDC		0x64
#define CCW_CMD_RELEASE		0x94
#define CCW_CMD_SET_PGID	0xAF
#define CCW_CMD_SENSE_ID	0xE4
#define CCW_CMD_DCTL		0xF3
#define SENSE_MAX_COUNT		0x20
struct erw  __attribute__ ((packed));
struct sublog  __attribute__ ((packed));
struct esw0  __attribute__ ((packed));
struct esw1  __attribute__ ((packed));
struct esw2  __attribute__ ((packed));
struct esw3  __attribute__ ((packed));
struct irb  __attribute__ ((packed,aligned(4)));
struct ciw  __attribute__ ((packed));
#define CIW_TYPE_RCD	0x0
#define CIW_TYPE_SII	0x1
#define CIW_TYPE_RNI	0x2
#define DOIO_ALLOW_SUSPEND	 0x0001
#define DOIO_DENY_PREFETCH	 0x0002
#define DOIO_SUPPRESS_INTER	 0x0004
#define CIO_GONE       0x0001
#define CIO_NO_PATH    0x0002
#define CIO_OPER       0x0004
#define CIO_REVALIDATE 0x0008
#define CIO_BOXED      0x0010
struct ccw_dev_id ;
static inline int ccw_dev_id_is_equal(struct ccw_dev_id *dev_id1,
struct ccw_dev_id *dev_id2)
extern void wait_cons_dev(void);
extern void css_schedule_reprobe(void);
extern void reipl_ccw_dev(struct ccw_dev_id *id);
struct cio_iplinfo ;
extern int cio_get_iplinfo(struct cio_iplinfo *iplinfo);
int chsc_sstpc(void *page, unsigned int op, u16 ctrl);
int chsc_sstpi(void *page, void *result, size_t size);
