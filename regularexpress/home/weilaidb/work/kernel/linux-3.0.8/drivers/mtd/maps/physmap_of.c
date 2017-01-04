struct of_flash_list ;
struct of_flash ;
#define OF_FLASH_PARTS(info)	((info)->parts)
static int parse_obsolete_partitions(struct platform_device *dev,
struct of_flash *info,
struct device_node *dp)
static int of_flash_remove(struct platform_device *dev)
static struct mtd_info * __devinit obsolete_probe(struct platform_device *dev,
struct map_info *map)
static const char *part_probe_types_def[] = ;
static const char ** __devinit of_get_probes(struct device_node *dp)
static void __devinit of_free_probes(const char **probes)
static struct of_device_id of_flash_match[];
static int __devinit of_flash_probe(struct platform_device *dev)
static struct of_device_id of_flash_match[] = ;
MODULE_DEVICE_TABLE(of, of_flash_match);
static struct platform_driver of_flash_driver = ;
static int __init of_flash_init(void)
static void __exit of_flash_exit(void)
module_init(of_flash_init);
module_exit(of_flash_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vitaly Wool <vwool@ru.mvista.com>");
MODULE_DESCRIPTION("Device tree based MTD map driver");
