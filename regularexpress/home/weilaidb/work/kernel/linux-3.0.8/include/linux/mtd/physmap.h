#define __LINUX_MTD_PHYSMAP__
struct map_info;
struct platform_device;
struct physmap_flash_data ;
void physmap_configure(unsigned long addr, unsigned long size,
int bankwidth, void (*set_vpp)(struct map_info *, int) );
void physmap_set_partitions(struct mtd_partition *parts, int num_parts);
