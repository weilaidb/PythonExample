#define __YAFFS_LINUX_H__
struct yaffs_linux_context ;
#define yaffs_dev_to_lc(dev) ((struct yaffs_linux_context *)((dev)->os_context))
#define yaffs_dev_to_mtd(dev) ((struct mtd_info *)((dev)->driver_context))
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2, 6, 17))
#define WRITE_SIZE_STR "writesize"
#define WRITE_SIZE(mtd) ((mtd)->writesize)
#define WRITE_SIZE_STR "oobblock"
#define WRITE_SIZE(mtd) ((mtd)->oobblock)
