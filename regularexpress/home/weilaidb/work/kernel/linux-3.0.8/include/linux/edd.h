#define _LINUX_EDD_H
#define EDDNR 0x1e9
#define EDDBUF	0xd00
#define EDDMAXNR 6
#define EDDEXTSIZE 8
#define EDDPARMSIZE 74
#define CHECKEXTENSIONSPRESENT 0x41
#define GETDEVICEPARAMETERS 0x48
#define LEGACYGETDEVICEPARAMETERS 0x08
#define EDDMAGIC1 0x55AA
#define EDDMAGIC2 0xAA55
#define READ_SECTORS 0x02
#define EDD_MBR_SIG_OFFSET 0x1B8
#define EDD_MBR_SIG_BUF    0x290
#define EDD_MBR_SIG_MAX 16
#define EDD_MBR_SIG_NR_BUF 0x1ea
#define EDD_EXT_FIXED_DISK_ACCESS           (1 << 0)
#define EDD_EXT_DEVICE_LOCKING_AND_EJECTING (1 << 1)
#define EDD_EXT_ENHANCED_DISK_DRIVE_SUPPORT (1 << 2)
#define EDD_EXT_64BIT_EXTENSIONS            (1 << 3)
#define EDD_INFO_DMA_BOUNDARY_ERROR_TRANSPARENT (1 << 0)
#define EDD_INFO_GEOMETRY_VALID                (1 << 1)
#define EDD_INFO_REMOVABLE                     (1 << 2)
#define EDD_INFO_WRITE_VERIFY                  (1 << 3)
#define EDD_INFO_MEDIA_CHANGE_NOTIFICATION     (1 << 4)
#define EDD_INFO_LOCKABLE                      (1 << 5)
#define EDD_INFO_NO_MEDIA_PRESENT              (1 << 6)
#define EDD_INFO_USE_INT13_FN50                (1 << 7)
struct edd_device_params  __attribute__ ((packed));
struct edd_info  __attribute__ ((packed));
struct edd ;
extern struct edd edd;
