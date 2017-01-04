#define	WriteTransient	0
#define	ReadTransient	1
#define	WritePersistent	2
#define	ReadPersistent	3
#define	WriteAll	4
#define	ReadFixable	5
#define	Modes	6
#define	ClearErrors	31
#define	ClearFaults	30
#define AllPersist	100
#define	NoPersist	101
#define	ModeMask	0x1f
#define	ModeShift	5
#define MaxFault	50
static void faulty_fail(struct bio *bio, int error)
typedef struct faulty_conf  conf_t;
static int check_mode(conf_t *conf, int mode)
static int check_sector(conf_t *conf, sector_t start, sector_t end, int dir)
static void add_sector(conf_t *conf, sector_t start, int mode)
static int make_request(mddev_t *mddev, struct bio *bio)
static void status(struct seq_file *seq, mddev_t *mddev)
static int reshape(mddev_t *mddev)
static sector_t faulty_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static int run(mddev_t *mddev)
static int stop(mddev_t *mddev)
static struct mdk_personality faulty_personality =
;
static int __init raid_init(void)
static void raid_exit(void)
module_init(raid_init);
module_exit(raid_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Fault injection personality for MD");
MODULE_ALIAS("md-personality-10");
MODULE_ALIAS("md-faulty");
MODULE_ALIAS("md-level--5");
