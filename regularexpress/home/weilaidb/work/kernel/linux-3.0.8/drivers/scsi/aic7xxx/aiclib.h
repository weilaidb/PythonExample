#define _AICLIB_H
struct scsi_sense
;
#define		SCSI_REV_0		0
#define		SCSI_REV_CCS		1
#define		SCSI_REV_2		2
#define		SCSI_REV_SPC		3
#define		SCSI_REV_SPC2		4
struct scsi_sense_data
;
#define	SCSI_STATUS_OK			0x00
#define	SCSI_STATUS_CHECK_COND		0x02
#define	SCSI_STATUS_COND_MET		0x04
#define	SCSI_STATUS_BUSY		0x08
#define SCSI_STATUS_INTERMED		0x10
#define SCSI_STATUS_INTERMED_COND_MET	0x14
#define SCSI_STATUS_RESERV_CONFLICT	0x18
#define SCSI_STATUS_CMD_TERMINATED	0x22
#define SCSI_STATUS_QUEUE_FULL		0x28
#define SCSI_STATUS_ACA_ACTIVE		0x30
#define SCSI_STATUS_TASK_ABORTED	0x40
static inline int
aic_sector_div(sector_t capacity, int heads, int sectors)
static inline uint32_t
scsi_4btoul(uint8_t *bytes)
#define GETID(v, s) (unsigned)(((v) >> (s)) & 0xFFFF ?: PCI_ANY_ID)
#define ID_C(x, c)						\
#define ID2C(x)                          \
ID_C(x, PCI_CLASS_STORAGE_SCSI), \
ID_C(x, PCI_CLASS_STORAGE_RAID)
#define IDIROC(x)  ((x) | ~ID_ALL_IROC_MASK)
#define ID16(x)                          \
ID(x),                           \
ID((x) | 0x0001000000000000ull), \
ID((x) | 0x0002000000000000ull), \
ID((x) | 0x0003000000000000ull), \
ID((x) | 0x0004000000000000ull), \
ID((x) | 0x0005000000000000ull), \
ID((x) | 0x0006000000000000ull), \
ID((x) | 0x0007000000000000ull), \
ID((x) | 0x0008000000000000ull), \
ID((x) | 0x0009000000000000ull), \
ID((x) | 0x000A000000000000ull), \
ID((x) | 0x000B000000000000ull), \
ID((x) | 0x000C000000000000ull), \
ID((x) | 0x000D000000000000ull), \
ID((x) | 0x000E000000000000ull), \
ID((x) | 0x000F000000000000ull)
