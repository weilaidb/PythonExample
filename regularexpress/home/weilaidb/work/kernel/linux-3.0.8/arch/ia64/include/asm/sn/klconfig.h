#define _ASM_IA64_SN_KLCONFIG_H
typedef s32 klconf_off_t;
typedef struct kl_config_hdr  kl_config_hdr_t;
#define NODE_OFFSET_TO_LBOARD(nasid,off)        (lboard_t*)(GLOBAL_CAC_ADDR((nasid), (off)))
#define KLCLASS_MASK	0xf0
#define KLCLASS_NONE	0x00
#define KLCLASS_NODE	0x10
#define KLCLASS_CPU	KLCLASS_NODE
#define KLCLASS_IO	0x20
#define KLCLASS_ROUTER	0x30
#define KLCLASS_MIDPLANE 0x40
#define KLCLASS_IOBRICK	0x70
#define KLCLASS_MAX	8
#define KLCLASS(_x) ((_x) & KLCLASS_MASK)
#define KLTYPE_MASK	0x0f
#define KLTYPE(_x)      ((_x) & KLTYPE_MASK)
#define KLTYPE_SNIA	(KLCLASS_CPU | 0x1)
#define KLTYPE_TIO	(KLCLASS_CPU | 0x2)
#define KLTYPE_ROUTER     (KLCLASS_ROUTER | 0x1)
#define KLTYPE_META_ROUTER (KLCLASS_ROUTER | 0x3)
#define KLTYPE_REPEATER_ROUTER (KLCLASS_ROUTER | 0x4)
#define KLTYPE_IOBRICK_XBOW	(KLCLASS_MIDPLANE | 0x2)
#define KLTYPE_IOBRICK		(KLCLASS_IOBRICK | 0x0)
#define KLTYPE_NBRICK		(KLCLASS_IOBRICK | 0x4)
#define KLTYPE_PXBRICK		(KLCLASS_IOBRICK | 0x6)
#define KLTYPE_IXBRICK		(KLCLASS_IOBRICK | 0x7)
#define KLTYPE_CGBRICK		(KLCLASS_IOBRICK | 0x8)
#define KLTYPE_OPUSBRICK	(KLCLASS_IOBRICK | 0x9)
#define KLTYPE_SABRICK          (KLCLASS_IOBRICK | 0xa)
#define KLTYPE_IABRICK		(KLCLASS_IOBRICK | 0xb)
#define KLTYPE_PABRICK          (KLCLASS_IOBRICK | 0xc)
#define KLTYPE_GABRICK		(KLCLASS_IOBRICK | 0xd)
#define MAX_COMPTS_PER_BRD 24
typedef struct lboard_s  lboard_t;
typedef struct klinfo_s  klinfo_t ;
static inline lboard_t *find_lboard_next(lboard_t * brd)
