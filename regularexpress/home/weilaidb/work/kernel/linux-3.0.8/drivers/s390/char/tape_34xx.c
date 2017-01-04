#define KMSG_COMPONENT "tape_34xx"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_34xx_dbf
debug_info_t *TAPE_DBF_AREA = NULL;
EXPORT_SYMBOL(TAPE_DBF_AREA);
#define TAPE34XX_FMT_3480	0
#define TAPE34XX_FMT_3480_2_XF	1
#define TAPE34XX_FMT_3480_XF	2
struct tape_34xx_block_id ;
struct tape_34xx_sbid ;
static void tape_34xx_delete_sbid_from(struct tape_device *, int);
static void __tape_34xx_medium_sense(struct tape_request *request)
static int tape_34xx_medium_sense(struct tape_device *device)
static void tape_34xx_medium_sense_async(struct tape_device *device)
struct tape_34xx_work ;
static void
tape_34xx_work_handler(struct work_struct *work)
static int
tape_34xx_schedule_work(struct tape_device *device, enum tape_op op)
static inline int
tape_34xx_done(struct tape_request *request)
static inline int
tape_34xx_erp_failed(struct tape_request *request, int rc)
static inline int
tape_34xx_erp_succeeded(struct tape_request *request)
static inline int
tape_34xx_erp_retry(struct tape_request *request)
static int
tape_34xx_unsolicited_irq(struct tape_device *device, struct irb *irb)
static int
tape_34xx_erp_read_opposite(struct tape_device *device,
struct tape_request *request)
static int
tape_34xx_erp_bug(struct tape_device *device, struct tape_request *request,
struct irb *irb, int no)
static int
tape_34xx_erp_overrun(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_34xx_erp_sequence(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_34xx_unit_check(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_34xx_irq(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_34xx_ioctl(struct tape_device *device, unsigned int cmd, unsigned long arg)
static inline void
tape_34xx_append_new_sbid(struct tape_34xx_block_id bid, struct list_head *l)
static void
tape_34xx_add_sbid(struct tape_device *device, struct tape_34xx_block_id bid)
static void
tape_34xx_delete_sbid_from(struct tape_device *device, int from)
static void
tape_34xx_merge_sbid(
struct tape_device *		device,
struct tape_34xx_block_id *	bid
)
static int
tape_34xx_setup_device(struct tape_device * device)
static void
tape_34xx_cleanup_device(struct tape_device *device)
static int
tape_34xx_mttell(struct tape_device *device, int mt_count)
static int
tape_34xx_mtseek(struct tape_device *device, int mt_count)
static struct tape_request *
tape_34xx_bread(struct tape_device *device, struct request *req)
static void
tape_34xx_free_bread (struct tape_request *request)
static void
tape_34xx_check_locate(struct tape_device *device, struct tape_request *request)
static tape_mtop_fn tape_34xx_mtop[TAPE_NR_MTOPS] = ;
static struct tape_discipline tape_discipline_34xx = ;
static struct ccw_device_id tape_34xx_ids[] = ;
static int
tape_34xx_online(struct ccw_device *cdev)
static struct ccw_driver tape_34xx_driver = ;
static int
tape_34xx_init (void)
static void
tape_34xx_exit(void)
MODULE_DEVICE_TABLE(ccw, tape_34xx_ids);
MODULE_AUTHOR("(C) 2001-2002 IBM Deutschland Entwicklung GmbH");
MODULE_DESCRIPTION("Linux on zSeries channel attached 3480 tape device driver");
MODULE_LICENSE("GPL");
module_init(tape_34xx_init);
module_exit(tape_34xx_exit);
