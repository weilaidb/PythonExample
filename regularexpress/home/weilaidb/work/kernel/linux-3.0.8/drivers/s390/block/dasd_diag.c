#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd(diag):"
MODULE_LICENSE("GPL");
#define DIAG_MAX_BLOCKS	(((2 * PAGE_SIZE - sizeof(struct dasd_ccw_req) - \
sizeof(struct dasd_diag_req)) / \
sizeof(struct dasd_diag_bio)) / 2)
#define DIAG_MAX_RETRIES	32
#define DIAG_TIMEOUT		50
static struct dasd_discipline dasd_diag_discipline;
struct dasd_diag_private ;
struct dasd_diag_req ;
static const u8 DASD_DIAG_CMS1[] = ;
static inline int dia250(void *iob, int cmd)
static inline int
mdsk_init_io(struct dasd_device *device, unsigned int blocksize,
blocknum_t offset, blocknum_t *end_block)
static inline int
mdsk_term_io(struct dasd_device * device)
static void
dasd_diag_erp(struct dasd_device *device)
static int
dasd_start_diag(struct dasd_ccw_req * cqr)
static int
dasd_diag_term_IO(struct dasd_ccw_req * cqr)
static void dasd_ext_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static int
dasd_diag_check_device(struct dasd_device *device)
static int
dasd_diag_fill_geometry(struct dasd_block *block, struct hd_geometry *geo)
static dasd_erp_fn_t
dasd_diag_erp_action(struct dasd_ccw_req * cqr)
static dasd_erp_fn_t
dasd_diag_erp_postaction(struct dasd_ccw_req * cqr)
static struct dasd_ccw_req *dasd_diag_build_cp(struct dasd_device *memdev,
struct dasd_block *block,
struct request *req)
static int
dasd_diag_free_cp(struct dasd_ccw_req *cqr, struct request *req)
static void dasd_diag_handle_terminated_request(struct dasd_ccw_req *cqr)
;
static int
dasd_diag_fill_info(struct dasd_device * device,
struct dasd_information2_t * info)
static void
dasd_diag_dump_sense(struct dasd_device *device, struct dasd_ccw_req * req,
struct irb *stat)
static struct dasd_discipline dasd_diag_discipline = ;
static int __init
dasd_diag_init(void)
static void __exit
dasd_diag_cleanup(void)
module_init(dasd_diag_init);
module_exit(dasd_diag_cleanup);
