#define KMSG_COMPONENT "tape_3590"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_3590_dbf
#define BUFSIZE 512
static struct workqueue_struct *tape_3590_wq;
debug_info_t *TAPE_DBF_AREA = NULL;
EXPORT_SYMBOL(TAPE_DBF_AREA);
static const char *tape_3590_msg[TAPE_3590_MAX_MSG] = ;
static int crypt_supported(struct tape_device *device)
static int crypt_enabled(struct tape_device *device)
static void ext_to_int_kekl(struct tape390_kekl *in,
struct tape3592_kekl *out)
static void int_to_ext_kekl(struct tape3592_kekl *in,
struct tape390_kekl *out)
static void int_to_ext_kekl_pair(struct tape3592_kekl_pair *in,
struct tape390_kekl_pair *out)
static int check_ext_kekl(struct tape390_kekl *kekl)
static int check_ext_kekl_pair(struct tape390_kekl_pair *kekls)
static int tape_3592_kekl_query(struct tape_device *device,
struct tape390_kekl_pair *ext_kekls)
static int tape_3592_ioctl_kekl_query(struct tape_device *device,
unsigned long arg)
static int tape_3590_mttell(struct tape_device *device, int mt_count);
static int tape_3592_kekl_set(struct tape_device *device,
struct tape390_kekl_pair *ext_kekls)
static int tape_3592_ioctl_kekl_set(struct tape_device *device,
unsigned long arg)
static struct tape_request *__tape_3592_enable_crypt(struct tape_device *device)
static int tape_3592_enable_crypt(struct tape_device *device)
static void tape_3592_enable_crypt_async(struct tape_device *device)
static struct tape_request *__tape_3592_disable_crypt(struct tape_device *device)
static int tape_3592_disable_crypt(struct tape_device *device)
static void tape_3592_disable_crypt_async(struct tape_device *device)
static int tape_3592_ioctl_crypt_set(struct tape_device *device,
unsigned long arg)
static int tape_3590_sense_medium(struct tape_device *device);
static int tape_3592_ioctl_crypt_query(struct tape_device *device,
unsigned long arg)
static int
tape_3590_ioctl(struct tape_device *device, unsigned int cmd, unsigned long arg)
static int tape_3590_sense_medium(struct tape_device *device)
static void tape_3590_sense_medium_async(struct tape_device *device)
static int
tape_3590_mttell(struct tape_device *device, int mt_count)
static int
tape_3590_mtseek(struct tape_device *device, int count)
static void
tape_3590_read_opposite(struct tape_device *device,
struct tape_request *request)
static void tape_3590_read_attmsg_async(struct tape_device *device)
struct work_handler_data ;
static void
tape_3590_work_handler(struct work_struct *work)
static int
tape_3590_schedule_work(struct tape_device *device, enum tape_op op)
static struct tape_request *
tape_3590_bread(struct tape_device *device, struct request *req)
static void
tape_3590_free_bread(struct tape_request *request)
static void
tape_3590_check_locate(struct tape_device *device, struct tape_request *request)
static void tape_3590_med_state_set(struct tape_device *device,
struct tape_3590_med_sense *sense)
static int
tape_3590_done(struct tape_device *device, struct tape_request *request)
static inline int
tape_3590_erp_succeded(struct tape_device *device, struct tape_request *request)
static inline int
tape_3590_erp_failed(struct tape_device *device, struct tape_request *request,
struct irb *irb, int rc)
static inline int
tape_3590_erp_retry(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_3590_unsolicited_irq(struct tape_device *device, struct irb *irb)
static int
tape_3590_erp_basic(struct tape_device *device, struct tape_request *request,
struct irb *irb, int rc)
static int
tape_3590_erp_read_buf_log(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_3590_erp_swap(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_3590_erp_long_busy(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_3590_erp_special_interrupt(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_3590_erp_read_alternate(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_3590_erp_read_opposite(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static void
tape_3590_print_mim_msg_f0(struct tape_device *device, struct irb *irb)
static void
tape_3590_print_io_sim_msg_f1(struct tape_device *device, struct irb *irb)
static void
tape_3590_print_dev_sim_msg_f2(struct tape_device *device, struct irb *irb)
static void
tape_3590_print_era_msg(struct tape_device *device, struct irb *irb)
static int tape_3590_crypt_error(struct tape_device *device,
struct tape_request *request, struct irb *irb)
static int
tape_3590_unit_check(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
tape_3590_irq(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int tape_3590_read_dev_chars(struct tape_device *device,
struct tape_3590_rdc_data *rdc_data)
static int
tape_3590_setup_device(struct tape_device *device)
static void
tape_3590_cleanup_device(struct tape_device *device)
static tape_mtop_fn tape_3590_mtop[TAPE_NR_MTOPS] = ;
static struct tape_discipline tape_discipline_3590 = ;
static struct ccw_device_id tape_3590_ids[] = ;
static int
tape_3590_online(struct ccw_device *cdev)
static struct ccw_driver tape_3590_driver = ;
static int
tape_3590_init(void)
static void
tape_3590_exit(void)
MODULE_DEVICE_TABLE(ccw, tape_3590_ids);
MODULE_AUTHOR("(C) 2001,2006 IBM Corporation");
MODULE_DESCRIPTION("Linux on zSeries channel attached 3590 tape device driver");
MODULE_LICENSE("GPL");
module_init(tape_3590_init);
module_exit(tape_3590_exit);
