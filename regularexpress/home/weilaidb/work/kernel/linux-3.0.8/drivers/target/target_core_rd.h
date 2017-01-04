#define TARGET_CORE_RD_H
#define RD_HBA_VERSION		"v4.0"
#define RD_DR_VERSION		"4.0"
#define RD_MCP_VERSION		"4.0"
#define RD_MAX_ALLOCATION_SIZE	65536
#define RD_HBA_QUEUE_DEPTH	256
#define RD_DEVICE_QUEUE_DEPTH	32
#define RD_MAX_DEVICE_QUEUE_DEPTH 128
#define RD_BLOCKSIZE		512
#define RD_MAX_SECTORS		1024
int __init rd_module_init(void);
void rd_module_exit(void);
#define RRF_EMULATE_CDB		0x01
#define RRF_GOT_LBA		0x02
struct rd_request  ____cacheline_aligned;
struct rd_dev_sg_table  ____cacheline_aligned;
#define RDF_HAS_PAGE_COUNT	0x01
struct rd_dev  ____cacheline_aligned;
struct rd_host  ____cacheline_aligned;
