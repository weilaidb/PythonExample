#define TARGET_CORE_FILE_H
#define FD_VERSION		"4.0"
#define FD_MAX_DEV_NAME		256
#define FD_HBA_QUEUE_DEPTH	256
#define FD_DEVICE_QUEUE_DEPTH	32
#define FD_MAX_DEVICE_QUEUE_DEPTH 128
#define FD_BLOCKSIZE		512
#define FD_MAX_SECTORS		1024
#define RRF_EMULATE_CDB		0x01
#define RRF_GOT_LBA		0x02
struct fd_request  ____cacheline_aligned;
#define FBDF_HAS_PATH		0x01
#define FBDF_HAS_SIZE		0x02
#define FDBD_USE_BUFFERED_IO	0x04
struct fd_dev  ____cacheline_aligned;
struct fd_host  ____cacheline_aligned;
