#define DM_MSG_PREFIX "zero"
static int zero_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static int zero_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static struct target_type zero_target = ;
static int __init dm_zero_init(void)
static void __exit dm_zero_exit(void)
module_init(dm_zero_init)
module_exit(dm_zero_exit)
MODULE_AUTHOR("Christophe Saout <christophe@saout.de>");
MODULE_DESCRIPTION(DM_NAME " dummy target returning zeros");
MODULE_LICENSE("GPL");
