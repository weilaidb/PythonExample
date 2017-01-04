#define TARGET_CORE_PSCSI_H
#define PSCSI_VERSION		"v4.0"
#define PSCSI_VIRTUAL_HBA_DEPTH	2048
#define INQUIRY_DATA_SIZE	0x24
#define PSCSI_DEFAULT_QUEUEDEPTH	1
#define PS_RETRY		5
#define PS_TIMEOUT_DISK		(15*HZ)
#define PS_TIMEOUT_OTHER	(500*HZ)
struct pscsi_plugin_task  ____cacheline_aligned;
#define PDF_HAS_CHANNEL_ID	0x01
#define PDF_HAS_TARGET_ID	0x02
#define PDF_HAS_LUN_ID		0x04
#define PDF_HAS_VPD_UNIT_SERIAL 0x08
#define PDF_HAS_VPD_DEV_IDENT	0x10
#define PDF_HAS_VIRT_HOST_ID	0x20
struct pscsi_dev_virt  ____cacheline_aligned;
typedef enum phv_modes  phv_modes_t;
struct pscsi_hba_virt  ____cacheline_aligned;
