struct vmu_cache ;
struct mdev_part ;
struct vmupart ;
struct memcard ;
struct vmu_block ;
static struct vmu_block *ofs_to_block(unsigned long src_ofs,
struct mtd_info *mtd, int partition)
static void vmu_blockread(struct mapleq *mq)
static int maple_vmu_read_block(unsigned int num, unsigned char *buf,
struct mtd_info *mtd)
static int maple_vmu_write_block(unsigned int num, const unsigned char *buf,
struct mtd_info *mtd)
static unsigned char vmu_flash_read_char(unsigned long ofs, int *retval,
struct mtd_info *mtd)
static int vmu_flash_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen,  u_char *buf)
static int vmu_flash_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static void vmu_flash_sync(struct mtd_info *mtd)
static void vmu_queryblocks(struct mapleq *mq)
static int __devinit vmu_connect(struct maple_device *mdev)
static void __devexit vmu_disconnect(struct maple_device *mdev)
static int vmu_can_unload(struct maple_device *mdev)
#define ERRSTR "VMU at (%d, %d) file error -"
static void vmu_file_error(struct maple_device *mdev, void *recvbuf)
static int __devinit probe_maple_vmu(struct device *dev)
static int __devexit remove_maple_vmu(struct device *dev)
static struct maple_driver vmu_flash_driver = ;
static int __init vmu_flash_map_init(void)
static void __exit vmu_flash_map_exit(void)
module_init(vmu_flash_map_init);
module_exit(vmu_flash_map_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adrian McMenamin");
MODULE_DESCRIPTION("Flash mapping for Sega Dreamcast visual memory");
