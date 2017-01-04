#define	_H_JFS_TYPES
typedef u16 tid_t;
typedef u16 lid_t;
struct timestruc_t ;
#define LEFTMOSTONE	0x80000000
#define	HIGHORDER	0x80000000u
#define	ONES		0xffffffffu
typedef struct  pxd_t;
#define	PXDlength(pxd, length32)	((pxd)->len = __cpu_to_le24(length32))
#define	PXDaddress(pxd, address64)\
#define	lengthPXD(pxd)	__le24_to_cpu((pxd)->len)
#define	addressPXD(pxd)\
( ((s64)((pxd)->addr1)) << 32 | __le32_to_cpu((pxd)->addr2))
#define MAXTREEHEIGHT 8
struct pxdlist ;
typedef struct  dxd_t;
#define	DXD_INDEX	0x80
#define	DXD_INLINE	0x40
#define	DXD_EXTENT	0x20
#define	DXD_FILE	0x10
#define DXD_CORRUPT	0x08
#define	DXDlength	PXDlength
#define	DXDaddress	PXDaddress
#define	lengthDXD	lengthPXD
#define	addressDXD	addressPXD
#define DXDsize(dxd, size32) ((dxd)->size = cpu_to_le32(size32))
#define sizeDXD(dxd)	le32_to_cpu((dxd)->size)
struct component_name ;
struct dasd ;
#define DASDLIMIT(dasdp) \
(((u64)((dasdp)->limit_hi) << 32) + __le32_to_cpu((dasdp)->limit_lo))
#define setDASDLIMIT(dasdp, limit)\
#define DASDUSED(dasdp) \
(((u64)((dasdp)->used_hi) << 32) + __le32_to_cpu((dasdp)->used_lo))
#define setDASDUSED(dasdp, used)\
