#define _MEGARAID_IOCTL_H_
#define	CL_ANN		0
#define CL_DLEVEL1	1
#define CL_DLEVEL2	2
#define CL_DLEVEL3	3
#define	con_log(level, fmt) if (LSI_DBGLVL >= level) printk fmt;
#define MEGAIOC_MAGIC		'm'
#define MEGAIOCCMD		_IOWR(MEGAIOC_MAGIC, 0, mimd_t)
#define MEGAIOC_QNADAP		'm'
#define MEGAIOC_QDRVRVER	'e'
#define MEGAIOC_QADAPINFO   	'g'
#define USCSICMD		0x80
#define UIOC_RD			0x00001
#define UIOC_WR			0x00002
#define MBOX_CMD		0x00000
#define GET_DRIVER_VER		0x10000
#define GET_N_ADAP		0x20000
#define GET_ADAP_INFO		0x30000
#define GET_CAP			0x40000
#define GET_STATS		0x50000
#define GET_IOCTL_VERSION	0x01
#define EXT_IOCTL_SIGN_SZ	16
#define EXT_IOCTL_SIGN		"$$_EXTD_IOCTL_$$"
#define	MBOX_LEGACY		0x00
#define MBOX_HPE		0x01
#define	APPTYPE_MIMD		0x00
#define APPTYPE_UIOC		0x01
#define IOCTL_ISSUE		0x00000001
#define IOCTL_ABORT		0x00000002
#define DRVRTYPE_MBOX		0x00000001
#define DRVRTYPE_HPE		0x00000002
#define MKADAP(adapno)	(MEGAIOC_MAGIC << 8 | (adapno) )
#define GETADAP(mkadap)	((mkadap) ^ MEGAIOC_MAGIC << 8)
#define MAX_DMA_POOLS		5
typedef struct uioc  __attribute__ ((aligned(1024),packed)) uioc_t;
typedef struct mraid_hba_info  __attribute__ ((aligned(256), packed)) mraid_hba_info_t;
typedef struct mcontroller  __attribute__ ((packed)) mcontroller_t;
typedef struct mm_dmapool  mm_dmapool_t;
typedef struct mraid_mmadp  mraid_mmadp_t;
int mraid_mm_register_adp(mraid_mmadp_t *);
int mraid_mm_unregister_adp(uint32_t);
uint32_t mraid_mm_adapter_app_handle(uint32_t);
