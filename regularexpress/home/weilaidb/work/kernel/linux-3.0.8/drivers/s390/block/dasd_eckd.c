#define KMSG_COMPONENT "dasd-eckd"
#undef PRINTK_HEADER
#define PRINTK_HEADER "dasd(eckd):"
#define ECKD_C0(i) (i->home_bytes)
#define ECKD_F(i) (i->formula)
#define ECKD_F1(i) (ECKD_F(i)==0x01?(i->factors.f_0x01.f1):\
(i->factors.f_0x02.f1))
#define ECKD_F2(i) (ECKD_F(i)==0x01?(i->factors.f_0x01.f2):\
(i->factors.f_0x02.f2))
#define ECKD_F3(i) (ECKD_F(i)==0x01?(i->factors.f_0x01.f3):\
(i->factors.f_0x02.f3))
#define ECKD_F4(i) (ECKD_F(i)==0x02?(i->factors.f_0x02.f4):0)
#define ECKD_F5(i) (ECKD_F(i)==0x02?(i->factors.f_0x02.f5):0)
#define ECKD_F6(i) (i->factor6)
#define ECKD_F7(i) (i->factor7)
#define ECKD_F8(i) (i->factor8)
#define DASD_RAW_BLOCK_PER_TRACK 16
#define DASD_RAW_BLOCKSIZE 4096
#define DASD_RAW_SECTORS_PER_TRACK 128
MODULE_LICENSE("GPL");
static struct dasd_discipline dasd_eckd_discipline;
static struct ccw_device_id dasd_eckd_ids[] = ;
MODULE_DEVICE_TABLE(ccw, dasd_eckd_ids);
static struct ccw_driver dasd_eckd_driver;
#define INIT_CQR_OK 0
#define INIT_CQR_UNFORMATTED 1
#define INIT_CQR_ERROR 2
static struct  *dasd_reserve_req;
static DEFINE_MUTEX(dasd_reserve_mutex);
struct path_verification_work_data ;
static struct path_verification_work_data *path_verification_worker;
static DEFINE_MUTEX(dasd_path_verification_mutex);
static int
dasd_eckd_probe (struct ccw_device *cdev)
static int
dasd_eckd_set_online(struct ccw_device *cdev)
static const int sizes_trk0[] = ;
#define LABEL_SIZE 140
static inline unsigned int
round_up_multiple(unsigned int no, unsigned int mult)
static inline unsigned int
ceil_quot(unsigned int d1, unsigned int d2)
static unsigned int
recs_per_track(struct dasd_eckd_characteristics * rdc,
unsigned int kl, unsigned int dl)
static void set_ch_t(struct ch_t *geo, __u32 cyl, __u8 head)
static int
check_XRC (struct ccw1         *de_ccw,
struct DE_eckd_data *data,
struct dasd_device  *device)
static int
define_extent(struct ccw1 *ccw, struct DE_eckd_data *data, unsigned int trk,
unsigned int totrk, int cmd, struct dasd_device *device)
static int check_XRC_on_prefix(struct PFX_eckd_data *pfxdata,
struct dasd_device  *device)
static void fill_LRE_data(struct LRE_eckd_data *data, unsigned int trk,
unsigned int rec_on_trk, int count, int cmd,
struct dasd_device *device, unsigned int reclen,
unsigned int tlf)
static int prefix_LRE(struct ccw1 *ccw, struct PFX_eckd_data *pfxdata,
unsigned int trk, unsigned int totrk, int cmd,
struct dasd_device *basedev, struct dasd_device *startdev,
unsigned char format, unsigned int rec_on_trk, int count,
unsigned int blksize, unsigned int tlf)
static int prefix(struct ccw1 *ccw, struct PFX_eckd_data *pfxdata,
unsigned int trk, unsigned int totrk, int cmd,
struct dasd_device *basedev, struct dasd_device *startdev)
static void
locate_record(struct ccw1 *ccw, struct LO_eckd_data *data, unsigned int trk,
unsigned int rec_on_trk, int no_rec, int cmd,
struct dasd_device * device, int reclen)
static inline int
dasd_eckd_cdl_special(int blk_per_trk, int recid)
static inline int
dasd_eckd_cdl_reclen(int recid)
static int dasd_eckd_generate_uid(struct dasd_device *device)
static int dasd_eckd_get_uid(struct dasd_device *device, struct dasd_uid *uid)
static void dasd_eckd_fill_rcd_cqr(struct dasd_device *device,
struct dasd_ccw_req *cqr,
__u8 *rcd_buffer,
__u8 lpm)
static int dasd_eckd_read_conf_immediately(struct dasd_device *device,
struct dasd_ccw_req *cqr,
__u8 *rcd_buffer,
__u8 lpm)
static int dasd_eckd_read_conf_lpm(struct dasd_device *device,
void **rcd_buffer,
int *rcd_buffer_size, __u8 lpm)
static int dasd_eckd_identify_conf_parts(struct dasd_eckd_private *private)
;
static unsigned char dasd_eckd_path_access(void *conf_data, int conf_len)
static int dasd_eckd_read_conf(struct dasd_device *device)
static int verify_fcx_max_data(struct dasd_device *device, __u8 lpm)
static void do_path_verification_work(struct work_struct *work)
static int dasd_eckd_verify_path(struct dasd_device *device, __u8 lpm)
static int dasd_eckd_read_features(struct dasd_device *device)
static struct dasd_ccw_req *dasd_eckd_build_psf_ssc(struct dasd_device *device,
int enable_pav)
static int
dasd_eckd_psf_ssc(struct dasd_device *device, int enable_pav)
static void dasd_eckd_validate_server(struct dasd_device *device)
static u32 get_fcx_max_data(struct dasd_device *device)
static int
dasd_eckd_check_characteristics(struct dasd_device *device)
static void dasd_eckd_uncheck_device(struct dasd_device *device)
static struct dasd_ccw_req *
dasd_eckd_analysis_ccw(struct dasd_device *device)
static int dasd_eckd_analysis_evaluation(struct dasd_ccw_req *init_cqr)
static void dasd_eckd_analysis_callback(struct dasd_ccw_req *init_cqr,
void *data)
static int dasd_eckd_start_analysis(struct dasd_block *block)
static int dasd_eckd_end_analysis(struct dasd_block *block)
static int dasd_eckd_do_analysis(struct dasd_block *block)
static int dasd_eckd_ready_to_online(struct dasd_device *device)
;
static int dasd_eckd_online_to_ready(struct dasd_device *device)
;
static int
dasd_eckd_fill_geometry(struct dasd_block *block, struct hd_geometry *geo)
static struct dasd_ccw_req *
dasd_eckd_format_device(struct dasd_device * device,
struct format_data_t * fdata)
static void dasd_eckd_handle_terminated_request(struct dasd_ccw_req *cqr)
;
static dasd_erp_fn_t
dasd_eckd_erp_action(struct dasd_ccw_req * cqr)
static dasd_erp_fn_t
dasd_eckd_erp_postaction(struct dasd_ccw_req * cqr)
static void dasd_eckd_check_for_device_change(struct dasd_device *device,
struct dasd_ccw_req *cqr,
struct irb *irb)
static struct dasd_ccw_req *dasd_eckd_build_cp_cmd_single(
struct dasd_device *startdev,
struct dasd_block *block,
struct request *req,
sector_t first_rec,
sector_t last_rec,
sector_t first_trk,
sector_t last_trk,
unsigned int first_offs,
unsigned int last_offs,
unsigned int blk_per_trk,
unsigned int blksize)
static struct dasd_ccw_req *dasd_eckd_build_cp_cmd_track(
struct dasd_device *startdev,
struct dasd_block *block,
struct request *req,
sector_t first_rec,
sector_t last_rec,
sector_t first_trk,
sector_t last_trk,
unsigned int first_offs,
unsigned int last_offs,
unsigned int blk_per_trk,
unsigned int blksize)
static int prepare_itcw(struct itcw *itcw,
unsigned int trk, unsigned int totrk, int cmd,
struct dasd_device *basedev,
struct dasd_device *startdev,
unsigned int rec_on_trk, int count,
unsigned int blksize,
unsigned int total_data_size,
unsigned int tlf,
unsigned int blk_per_trk)
static struct dasd_ccw_req *dasd_eckd_build_cp_tpm_track(
struct dasd_device *startdev,
struct dasd_block *block,
struct request *req,
sector_t first_rec,
sector_t last_rec,
sector_t first_trk,
sector_t last_trk,
unsigned int first_offs,
unsigned int last_offs,
unsigned int blk_per_trk,
unsigned int blksize)
static struct dasd_ccw_req *dasd_eckd_build_cp(struct dasd_device *startdev,
struct dasd_block *block,
struct request *req)
static struct dasd_ccw_req *dasd_raw_build_cp(struct dasd_device *startdev,
struct dasd_block *block,
struct request *req)
static int
dasd_eckd_free_cp(struct dasd_ccw_req *cqr, struct request *req)
void dasd_eckd_reset_ccw_to_base_io(struct dasd_ccw_req *cqr)
#define DASD_ECKD_CHANQ_MAX_SIZE 4
static struct dasd_ccw_req *dasd_eckd_build_alias_cp(struct dasd_device *base,
struct dasd_block *block,
struct request *req)
static int dasd_eckd_free_alias_cp(struct dasd_ccw_req *cqr,
struct request *req)
static int
dasd_eckd_fill_info(struct dasd_device * device,
struct dasd_information2_t * info)
static int
dasd_eckd_release(struct dasd_device *device)
static int
dasd_eckd_reserve(struct dasd_device *device)
static int
dasd_eckd_steal_lock(struct dasd_device *device)
static int dasd_eckd_snid(struct dasd_device *device,
void __user *argp)
static int
dasd_eckd_performance(struct dasd_device *device, void __user *argp)
static int
dasd_eckd_get_attrib(struct dasd_device *device, void __user *argp)
static int
dasd_eckd_set_attrib(struct dasd_device *device, void __user *argp)
static int dasd_symm_io(struct dasd_device *device, void __user *argp)
static int
dasd_eckd_ioctl(struct dasd_block *block, unsigned int cmd, void __user *argp)
static int
dasd_eckd_dump_ccw_range(struct ccw1 *from, struct ccw1 *to, char *page)
static void
dasd_eckd_dump_sense_dbf(struct dasd_device *device, struct irb *irb,
char *reason)
static void dasd_eckd_dump_sense_ccw(struct dasd_device *device,
struct dasd_ccw_req *req, struct irb *irb)
static void dasd_eckd_dump_sense_tcw(struct dasd_device *device,
struct dasd_ccw_req *req, struct irb *irb)
static void dasd_eckd_dump_sense(struct dasd_device *device,
struct dasd_ccw_req *req, struct irb *irb)
static int dasd_eckd_pm_freeze(struct dasd_device *device)
static int dasd_eckd_restore_device(struct dasd_device *device)
static int dasd_eckd_reload_device(struct dasd_device *device)
static struct ccw_driver dasd_eckd_driver = ;
static struct dasd_discipline dasd_eckd_discipline = ;
static int __init
dasd_eckd_init(void)
static void __exit
dasd_eckd_cleanup(void)
module_init(dasd_eckd_init);
module_exit(dasd_eckd_cleanup);
