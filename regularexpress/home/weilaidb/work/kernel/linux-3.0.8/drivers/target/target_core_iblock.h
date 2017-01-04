#define TARGET_CORE_IBLOCK_H
#define IBLOCK_VERSION		"4.0"
#define IBLOCK_HBA_QUEUE_DEPTH	512
#define IBLOCK_DEVICE_QUEUE_DEPTH	32
#define IBLOCK_MAX_DEVICE_QUEUE_DEPTH	128
#define IBLOCK_MAX_CDBS		16
#define IBLOCK_LBA_SHIFT	9
struct iblock_req  ____cacheline_aligned;
#define IBDF_HAS_UDEV_PATH		0x01
#define IBDF_HAS_FORCE			0x02
struct iblock_dev  ____cacheline_aligned;
struct iblock_hba  ____cacheline_aligned;
