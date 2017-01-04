#define DM_MSG_PREFIX "raid"
#define MD_SYNC_STATE_FORCED 0
struct raid_dev ;
#define DMPF_DAEMON_SLEEP      0x1
#define DMPF_MAX_WRITE_BEHIND  0x2
#define DMPF_SYNC              0x4
#define DMPF_NOSYNC            0x8
#define DMPF_STRIPE_CACHE      0x10
#define DMPF_MIN_RECOVERY_RATE 0x20
#define DMPF_MAX_RECOVERY_RATE 0x40
struct raid_set ;
static struct raid_type  raid_types[] = ;
static struct raid_type *get_raid_type(char *name)
static struct raid_set *context_alloc(struct dm_target *ti, struct raid_type *raid_type, unsigned raid_devs)
static void context_free(struct raid_set *rs)
static int dev_parms(struct raid_set *rs, char **argv)
static int parse_raid_params(struct raid_set *rs, char **argv,
unsigned num_raid_params)
static void do_table_event(struct work_struct *ws)
static int raid_is_congested(struct dm_target_callbacks *cb, int bits)
static int raid_ctr(struct dm_target *ti, unsigned argc, char **argv)
static void raid_dtr(struct dm_target *ti)
static int raid_map(struct dm_target *ti, struct bio *bio, union map_info *map_context)
static int raid_status(struct dm_target *ti, status_type_t type,
char *result, unsigned maxlen)
static int raid_iterate_devices(struct dm_target *ti, iterate_devices_callout_fn fn, void *data)
static void raid_io_hints(struct dm_target *ti, struct queue_limits *limits)
static void raid_presuspend(struct dm_target *ti)
static void raid_postsuspend(struct dm_target *ti)
static void raid_resume(struct dm_target *ti)
static struct target_type raid_target = ;
static int __init dm_raid_init(void)
static void __exit dm_raid_exit(void)
module_init(dm_raid_init);
module_exit(dm_raid_exit);
MODULE_DESCRIPTION(DM_NAME " raid4/5/6 target");
MODULE_ALIAS("dm-raid4");
MODULE_ALIAS("dm-raid5");
MODULE_ALIAS("dm-raid6");
MODULE_AUTHOR("Neil Brown <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
