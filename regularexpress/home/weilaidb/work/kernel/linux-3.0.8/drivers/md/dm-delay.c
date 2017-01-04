#define DM_MSG_PREFIX "delay"
struct delay_c ;
struct dm_delay_info ;
static DEFINE_MUTEX(delayed_bios_lock);
static struct workqueue_struct *kdelayd_wq;
static struct kmem_cache *delayed_cache;
static void handle_delayed_timer(unsigned long data)
static void queue_timeout(struct delay_c *dc, unsigned long expires)
static void flush_bios(struct bio *bio)
static struct bio *flush_delayed_bios(struct delay_c *dc, int flush_all)
static void flush_expired_bios(struct work_struct *work)
static int delay_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void delay_dtr(struct dm_target *ti)
static int delay_bio(struct delay_c *dc, int delay, struct bio *bio)
static void delay_presuspend(struct dm_target *ti)
static void delay_resume(struct dm_target *ti)
static int delay_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int delay_status(struct dm_target *ti, status_type_t type,
char *result, unsigned maxlen)
static int delay_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static struct target_type delay_target = ;
static int __init dm_delay_init(void)
static void __exit dm_delay_exit(void)
module_init(dm_delay_init);
module_exit(dm_delay_exit);
MODULE_DESCRIPTION(DM_NAME " delay target");
MODULE_AUTHOR("Heinz Mauelshagen <mauelshagen@redhat.com>");
MODULE_LICENSE("GPL");
