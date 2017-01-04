#define __YAFFS_MTDIF_H__
void yaffs_mtd_drv_install(struct yaffs_dev *dev);
struct mtd_info * yaffs_get_mtd_device(dev_t sdev);
void yaffs_put_mtd_device(struct mtd_info *mtd);
int yaffs_verify_mtd(struct mtd_info *mtd, int yaffs_version, int inband_tags);
