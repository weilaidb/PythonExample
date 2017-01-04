#define LINUX_MMC_IOCTL_H
struct mmc_ioc_cmd ;
#define mmc_ioc_cmd_set_data(ic, ptr) ic.data_ptr = (__u64)(unsigned long) ptr
#define MMC_IOC_CMD _IOWR(MMC_BLOCK_MAJOR, 0, struct mmc_ioc_cmd)
#define MMC_IOC_MAX_BYTES  (512L * 256)
