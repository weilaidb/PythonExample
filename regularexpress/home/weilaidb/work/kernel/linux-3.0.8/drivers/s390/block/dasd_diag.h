#define MDSK_WRITE_REQ 0x01
#define MDSK_READ_REQ  0x02
#define INIT_BIO	0x00
#define RW_BIO		0x01
#define TERM_BIO	0x02
#define DEV_CLASS_FBA	0x01
#define DEV_CLASS_ECKD	0x04
#define DASD_DIAG_CODE_31BIT		0x03
#define DASD_DIAG_CODE_64BIT		0x07
#define DASD_DIAG_RWFLAG_ASYNC		0x02
#define DASD_DIAG_RWFLAG_NOCACHE	0x01
#define DASD_DIAG_FLAGA_FORMAT_64BIT	0x80
struct dasd_diag_characteristics  __attribute__ ((packed, aligned(4)));
#define DASD_DIAG_FLAGA_DEFAULT		DASD_DIAG_FLAGA_FORMAT_64BIT
typedef u64 blocknum_t;
typedef s64 sblocknum_t;
struct dasd_diag_bio  __attribute__ ((packed, aligned(8)));
struct dasd_diag_init_io  __attribute__ ((packed, aligned(8)));
struct dasd_diag_rw_io  __attribute__ ((packed, aligned(8)));
#define DASD_DIAG_FLAGA_DEFAULT		0x0
typedef u32 blocknum_t;
typedef s32 sblocknum_t;
struct dasd_diag_bio  __attribute__ ((packed, aligned(8)));
struct dasd_diag_init_io  __attribute__ ((packed, aligned(8)));
struct dasd_diag_rw_io  __attribute__ ((packed, aligned(8)));
