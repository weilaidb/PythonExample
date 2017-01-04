#define KMSG_COMPONENT "dasd-fba"
#undef PRINTK_HEADER
#define PRINTK_HEADER "dasd(fba):"
#define DASD_FBA_CCW_WRITE 0x41
#define DASD_FBA_CCW_READ 0x42
#define DASD_FBA_CCW_LOCATE 0x43
#define DASD_FBA_CCW_DEFINE_EXTENT 0x63
MODULE_LICENSE("GPL");
static struct dasd_discipline dasd_fba_discipline;
struct dasd_fba_private ;
static struct ccw_device_id dasd_fba_ids[] = ;
MODULE_DEVICE_TABLE(ccw, dasd_fba_ids);
static struct ccw_driver dasd_fba_driver;
static int
dasd_fba_probe(struct ccw_device *cdev)
static int
dasd_fba_set_online(struct ccw_device *cdev)
static struct ccw_driver dasd_fba_driver = ;
static void
define_extent(struct ccw1 * ccw, struct DE_fba_data *data, int rw,
int blksize, int beg, int nr)
static void
locate_record(struct ccw1 * ccw, struct LO_fba_data *data, int rw,
int block_nr, int block_ct)
static int
dasd_fba_check_characteristics(struct dasd_device *device)
static int dasd_fba_do_analysis(struct dasd_block *block)
static int dasd_fba_fill_geometry(struct dasd_block *block,
struct hd_geometry *geo)
static dasd_erp_fn_t
dasd_fba_erp_action(struct dasd_ccw_req * cqr)
static dasd_erp_fn_t
dasd_fba_erp_postaction(struct dasd_ccw_req * cqr)
static void dasd_fba_check_for_device_change(struct dasd_device *device,
struct dasd_ccw_req *cqr,
struct irb *irb)
;
static struct dasd_ccw_req *dasd_fba_build_cp(struct dasd_device * memdev,
struct dasd_block *block,
struct request *req)
static int
dasd_fba_free_cp(struct dasd_ccw_req *cqr, struct request *req)
static void dasd_fba_handle_terminated_request(struct dasd_ccw_req *cqr)
;
static int
dasd_fba_fill_info(struct dasd_device * device,
struct dasd_information2_t * info)
static void
dasd_fba_dump_sense_dbf(struct dasd_device *device, struct irb *irb,
char *reason)
static void
dasd_fba_dump_sense(struct dasd_device *device, struct dasd_ccw_req * req,
struct irb *irb)
static struct dasd_discipline dasd_fba_discipline = ;
static int __init
dasd_fba_init(void)
static void __exit
dasd_fba_cleanup(void)
module_init(dasd_fba_init);
module_exit(dasd_fba_cleanup);
