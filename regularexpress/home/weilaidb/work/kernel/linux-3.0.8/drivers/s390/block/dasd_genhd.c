#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd_gendisk:"
int dasd_gendisk_alloc(struct dasd_block *block)
void dasd_gendisk_free(struct dasd_block *block)
int dasd_scan_partitions(struct dasd_block *block)
void dasd_destroy_partitions(struct dasd_block *block)
int dasd_gendisk_init(void)
void dasd_gendisk_exit(void)
