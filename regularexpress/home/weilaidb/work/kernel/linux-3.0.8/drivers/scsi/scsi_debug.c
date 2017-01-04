#define SCSI_DEBUG_VERSION "1.82"
static const char * scsi_debug_version_date = "20100324";
#define NO_ADDITIONAL_SENSE 0x0
#define LOGICAL_UNIT_NOT_READY 0x4
#define UNRECOVERED_READ_ERR 0x11
#define PARAMETER_LIST_LENGTH_ERR 0x1a
#define INVALID_OPCODE 0x20
#define ADDR_OUT_OF_RANGE 0x21
#define INVALID_COMMAND_OPCODE 0x20
#define INVALID_FIELD_IN_CDB 0x24
#define INVALID_FIELD_IN_PARAM_LIST 0x26
#define POWERON_RESET 0x29
#define SAVING_PARAMS_UNSUP 0x39
#define TRANSPORT_PROBLEM 0x4b
#define THRESHOLD_EXCEEDED 0x5d
#define LOW_POWER_COND_ON 0x5e
#define ACK_NAK_TO 0x3
#define SDEBUG_TAGGED_QUEUING 0
#define DEF_NUM_HOST   1
#define DEF_NUM_TGTS   1
#define DEF_MAX_LUNS   1
#define DEF_ATO 1
#define DEF_DELAY   1
#define DEF_DEV_SIZE_MB   8
#define DEF_DIF 0
#define DEF_DIX 0
#define DEF_D_SENSE   0
#define DEF_EVERY_NTH   0
#define DEF_FAKE_RW	0
#define DEF_GUARD 0
#define DEF_LBPU 0
#define DEF_LBPWS 0
#define DEF_LBPWS10 0
#define DEF_LOWEST_ALIGNED 0
#define DEF_NO_LUN_0   0
#define DEF_NUM_PARTS   0
#define DEF_OPTS   0
#define DEF_OPT_BLKS 64
#define DEF_PHYSBLK_EXP 0
#define DEF_PTYPE   0
#define DEF_SCSI_LEVEL   5
#define DEF_SECTOR_SIZE 512
#define DEF_UNMAP_ALIGNMENT 0
#define DEF_UNMAP_GRANULARITY 1
#define DEF_UNMAP_MAX_BLOCKS 0xFFFFFFFF
#define DEF_UNMAP_MAX_DESC 256
#define DEF_VIRTUAL_GB   0
#define DEF_VPD_USE_HOSTNO 1
#define DEF_WRITESAME_LENGTH 0xFFFF
#define SCSI_DEBUG_OPT_NOISE   1
#define SCSI_DEBUG_OPT_MEDIUM_ERR   2
#define SCSI_DEBUG_OPT_TIMEOUT   4
#define SCSI_DEBUG_OPT_RECOVERED_ERR   8
#define SCSI_DEBUG_OPT_TRANSPORT_ERR   16
#define SCSI_DEBUG_OPT_DIF_ERR   32
#define SCSI_DEBUG_OPT_DIX_ERR   64
#define OPT_MEDIUM_ERR_ADDR   0x1234
#define OPT_MEDIUM_ERR_NUM    10
#define SAM2_LUN_ADDRESS_METHOD 0
#define SAM2_WLUN_REPORT_LUNS 0xc101
#define SCSI_DEBUG_CANQUEUE  255
static int scsi_debug_add_host = DEF_NUM_HOST;
static int scsi_debug_ato = DEF_ATO;
static int scsi_debug_delay = DEF_DELAY;
static int scsi_debug_dev_size_mb = DEF_DEV_SIZE_MB;
static int scsi_debug_dif = DEF_DIF;
static int scsi_debug_dix = DEF_DIX;
static int scsi_debug_dsense = DEF_D_SENSE;
static int scsi_debug_every_nth = DEF_EVERY_NTH;
static int scsi_debug_fake_rw = DEF_FAKE_RW;
static int scsi_debug_guard = DEF_GUARD;
static int scsi_debug_lowest_aligned = DEF_LOWEST_ALIGNED;
static int scsi_debug_max_luns = DEF_MAX_LUNS;
static int scsi_debug_max_queue = SCSI_DEBUG_CANQUEUE;
static int scsi_debug_no_lun_0 = DEF_NO_LUN_0;
static int scsi_debug_no_uld = 0;
static int scsi_debug_num_parts = DEF_NUM_PARTS;
static int scsi_debug_num_tgts = DEF_NUM_TGTS;
static int scsi_debug_opt_blks = DEF_OPT_BLKS;
static int scsi_debug_opts = DEF_OPTS;
static int scsi_debug_physblk_exp = DEF_PHYSBLK_EXP;
static int scsi_debug_ptype = DEF_PTYPE;
static int scsi_debug_scsi_level = DEF_SCSI_LEVEL;
static int scsi_debug_sector_size = DEF_SECTOR_SIZE;
static int scsi_debug_virtual_gb = DEF_VIRTUAL_GB;
static int scsi_debug_vpd_use_hostno = DEF_VPD_USE_HOSTNO;
static unsigned int scsi_debug_lbpu = DEF_LBPU;
static unsigned int scsi_debug_lbpws = DEF_LBPWS;
static unsigned int scsi_debug_lbpws10 = DEF_LBPWS10;
static unsigned int scsi_debug_unmap_alignment = DEF_UNMAP_ALIGNMENT;
static unsigned int scsi_debug_unmap_granularity = DEF_UNMAP_GRANULARITY;
static unsigned int scsi_debug_unmap_max_blocks = DEF_UNMAP_MAX_BLOCKS;
static unsigned int scsi_debug_unmap_max_desc = DEF_UNMAP_MAX_DESC;
static unsigned int scsi_debug_write_same_length = DEF_WRITESAME_LENGTH;
static int scsi_debug_cmnd_count = 0;
#define DEV_READONLY(TGT)      (0)
#define DEV_REMOVEABLE(TGT)    (0)
static unsigned int sdebug_store_sectors;
static sector_t sdebug_capacity;
static int sdebug_heads;
static int sdebug_cylinders_per;
static int sdebug_sectors_per;
#define SDEBUG_MAX_PARTS 4
#define SDEBUG_SENSE_LEN 32
#define SCSI_DEBUG_MAX_CMD_LEN 32
static unsigned int scsi_debug_lbp(void)
struct sdebug_dev_info ;
struct sdebug_host_info ;
#define to_sdebug_host(d)	\
container_of(d, struct sdebug_host_info, dev)
static LIST_HEAD(sdebug_host_list);
static DEFINE_SPINLOCK(sdebug_host_list_lock);
typedef void (* done_funct_t) (struct scsi_cmnd *);
struct sdebug_queued_cmd ;
static struct sdebug_queued_cmd queued_arr[SCSI_DEBUG_CANQUEUE];
static unsigned char * fake_storep;
static unsigned char *dif_storep;
static void *map_storep;
static unsigned long map_size;
static int num_aborts = 0;
static int num_dev_resets = 0;
static int num_bus_resets = 0;
static int num_host_resets = 0;
static int dix_writes;
static int dix_reads;
static int dif_errors;
static DEFINE_SPINLOCK(queued_arr_lock);
static DEFINE_RWLOCK(atomic_rw);
static char sdebug_proc_name[] = "scsi_debug";
static struct bus_type pseudo_lld_bus;
static inline sector_t dif_offset(sector_t sector)
static struct device_driver sdebug_driverfs_driver = ;
static const int check_condition_result =
(DRIVER_SENSE << 24) | SAM_STAT_CHECK_CONDITION;
static const int illegal_condition_result =
(DRIVER_SENSE << 24) | (DID_ABORT << 16) | SAM_STAT_CHECK_CONDITION;
static unsigned char ctrl_m_pg[] = ;
static unsigned char iec_m_pg[] = ;
static int sdebug_add_adapter(void);
static void sdebug_remove_adapter(void);
static void sdebug_max_tgts_luns(void)
static void mk_sense_buffer(struct sdebug_dev_info *devip, int key,
int asc, int asq)
static void get_data_transfer_info(unsigned char *cmd,
unsigned long long *lba, unsigned int *num,
u32 *ei_lba)
static int scsi_debug_ioctl(struct scsi_device *dev, int cmd, void __user *arg)
{
if (SCSI_DEBUG_OPT_NOISE & scsi_debug_opts)
return -EINVAL;
static int fill_from_dev_buffer(struct scsi_cmnd *scp, unsigned char *arr,
int arr_len)
static int fetch_to_dev_buffer(struct scsi_cmnd *scp, unsigned char *arr,
int arr_len)
static const char * inq_vendor_id = "Linux   ";
static const char * inq_product_id = "scsi_debug      ";
static const char * inq_product_rev = "0004";
static int inquiry_evpd_83(unsigned char * arr, int port_group_id,
int target_dev_id, int dev_id_num,
const char * dev_id_str,
int dev_id_str_len)
static unsigned char vpd84_data[] = ;
static int inquiry_evpd_84(unsigned char * arr)
static int inquiry_evpd_85(unsigned char * arr)
static int inquiry_evpd_88(unsigned char * arr, int target_dev_id)
static unsigned char vpd89_data[] = ;
static int inquiry_evpd_89(unsigned char * arr)
static unsigned char vpdb0_data[] = ;
static int inquiry_evpd_b0(unsigned char * arr)
static int inquiry_evpd_b1(unsigned char *arr)
static int inquiry_evpd_b2(unsigned char *arr)
#define SDEBUG_LONG_INQ_SZ 96
#define SDEBUG_MAX_INQ_ARR_SZ 584
static int resp_inquiry(struct scsi_cmnd * scp, int target,
struct sdebug_dev_info * devip)
static int resp_requests(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
static int resp_start_stop(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
static sector_t get_sdebug_capacity(void)
#define SDEBUG_READCAP_ARR_SZ 8
static int resp_readcap(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
#define SDEBUG_READCAP16_ARR_SZ 32
static int resp_readcap16(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
#define SDEBUG_MAX_TGTPGS_ARR_SZ 1412
static int resp_report_tgtpgs(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
static int resp_err_recov_pg(unsigned char * p, int pcontrol, int target)
static int resp_disconnect_pg(unsigned char * p, int pcontrol, int target)
static int resp_format_pg(unsigned char * p, int pcontrol, int target)
static int resp_caching_pg(unsigned char * p, int pcontrol, int target)
static int resp_ctrl_m_pg(unsigned char * p, int pcontrol, int target)
static int resp_iec_m_pg(unsigned char * p, int pcontrol, int target)
static int resp_sas_sf_m_pg(unsigned char * p, int pcontrol, int target)
static int resp_sas_pcd_m_spg(unsigned char * p, int pcontrol, int target,
int target_dev_id)
static int resp_sas_sha_m_spg(unsigned char * p, int pcontrol)
#define SDEBUG_MAX_MSENSE_SZ 256
static int resp_mode_sense(struct scsi_cmnd * scp, int target,
struct sdebug_dev_info * devip)
#define SDEBUG_MAX_MSELECT_SZ 512
static int resp_mode_select(struct scsi_cmnd * scp, int mselect6,
struct sdebug_dev_info * devip)
static int resp_temp_l_pg(unsigned char * arr)
static int resp_ie_l_pg(unsigned char * arr)
#define SDEBUG_MAX_LSENSE_SZ 512
static int resp_log_sense(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
static int check_device_access_params(struct sdebug_dev_info *devi,
unsigned long long lba, unsigned int num)
static int do_device_access(struct scsi_cmnd *scmd,
struct sdebug_dev_info *devi,
unsigned long long lba, unsigned int num, int write)
static int prot_verify_read(struct scsi_cmnd *SCpnt, sector_t start_sec,
unsigned int sectors, u32 ei_lba)
static int resp_read(struct scsi_cmnd *SCpnt, unsigned long long lba,
unsigned int num, struct sdebug_dev_info *devip,
u32 ei_lba)
void dump_sector(unsigned char *buf, int len)
static int prot_verify_write(struct scsi_cmnd *SCpnt, sector_t start_sec,
unsigned int sectors, u32 ei_lba)
static unsigned int map_state(sector_t lba, unsigned int *num)
static void map_region(sector_t lba, unsigned int len)
static void unmap_region(sector_t lba, unsigned int len)
static int resp_write(struct scsi_cmnd *SCpnt, unsigned long long lba,
unsigned int num, struct sdebug_dev_info *devip,
u32 ei_lba)
static int resp_write_same(struct scsi_cmnd *scmd, unsigned long long lba,
unsigned int num, struct sdebug_dev_info *devip,
u32 ei_lba, unsigned int unmap)
struct unmap_block_desc ;
static int resp_unmap(struct scsi_cmnd * scmd, struct sdebug_dev_info * devip)
#define SDEBUG_GET_LBA_STATUS_LEN 32
static int resp_get_lba_status(struct scsi_cmnd * scmd,
struct sdebug_dev_info * devip)
#define SDEBUG_RLUN_ARR_SZ 256
static int resp_report_luns(struct scsi_cmnd * scp,
struct sdebug_dev_info * devip)
static int resp_xdwriteread(struct scsi_cmnd *scp, unsigned long long lba,
unsigned int num, struct sdebug_dev_info *devip)
static void timer_intr_handler(unsigned long indx)
static struct sdebug_dev_info *
sdebug_device_create(struct sdebug_host_info *sdbg_host, gfp_t flags)
static struct sdebug_dev_info * devInfoReg(struct scsi_device * sdev)
static int scsi_debug_slave_alloc(struct scsi_device *sdp)
static int scsi_debug_slave_configure(struct scsi_device *sdp)
static void scsi_debug_slave_destroy(struct scsi_device *sdp)
static int stop_queued_cmnd(struct scsi_cmnd *cmnd)
static void stop_all_queued(void)
static int scsi_debug_abort(struct scsi_cmnd * SCpnt)
static int scsi_debug_biosparam(struct scsi_device *sdev,
struct block_device * bdev, sector_t capacity, int *info)
static int scsi_debug_device_reset(struct scsi_cmnd * SCpnt)
static int scsi_debug_bus_reset(struct scsi_cmnd * SCpnt)
static int scsi_debug_host_reset(struct scsi_cmnd * SCpnt)
static void __init init_all_queued(void)
static void __init sdebug_build_parts(unsigned char *ramp,
unsigned long store_size)
static int schedule_resp(struct scsi_cmnd * cmnd,
struct sdebug_dev_info * devip,
done_funct_t done, int scsi_result, int delta_jiff)
module_param_named(add_host, scsi_debug_add_host, int, S_IRUGO | S_IWUSR);
module_param_named(ato, scsi_debug_ato, int, S_IRUGO);
module_param_named(delay, scsi_debug_delay, int, S_IRUGO | S_IWUSR);
module_param_named(dev_size_mb, scsi_debug_dev_size_mb, int, S_IRUGO);
module_param_named(dif, scsi_debug_dif, int, S_IRUGO);
module_param_named(dix, scsi_debug_dix, int, S_IRUGO);
module_param_named(dsense, scsi_debug_dsense, int, S_IRUGO | S_IWUSR);
module_param_named(every_nth, scsi_debug_every_nth, int, S_IRUGO | S_IWUSR);
module_param_named(fake_rw, scsi_debug_fake_rw, int, S_IRUGO | S_IWUSR);
module_param_named(guard, scsi_debug_guard, int, S_IRUGO);
module_param_named(lbpu, scsi_debug_lbpu, int, S_IRUGO);
module_param_named(lbpws, scsi_debug_lbpws, int, S_IRUGO);
module_param_named(lbpws10, scsi_debug_lbpws10, int, S_IRUGO);
module_param_named(lowest_aligned, scsi_debug_lowest_aligned, int, S_IRUGO);
module_param_named(max_luns, scsi_debug_max_luns, int, S_IRUGO | S_IWUSR);
module_param_named(max_queue, scsi_debug_max_queue, int, S_IRUGO | S_IWUSR);
module_param_named(no_lun_0, scsi_debug_no_lun_0, int, S_IRUGO | S_IWUSR);
module_param_named(no_uld, scsi_debug_no_uld, int, S_IRUGO);
module_param_named(num_parts, scsi_debug_num_parts, int, S_IRUGO);
module_param_named(num_tgts, scsi_debug_num_tgts, int, S_IRUGO | S_IWUSR);
module_param_named(opt_blks, scsi_debug_opt_blks, int, S_IRUGO);
module_param_named(opts, scsi_debug_opts, int, S_IRUGO | S_IWUSR);
module_param_named(physblk_exp, scsi_debug_physblk_exp, int, S_IRUGO);
module_param_named(ptype, scsi_debug_ptype, int, S_IRUGO | S_IWUSR);
module_param_named(scsi_level, scsi_debug_scsi_level, int, S_IRUGO);
module_param_named(sector_size, scsi_debug_sector_size, int, S_IRUGO);
module_param_named(unmap_alignment, scsi_debug_unmap_alignment, int, S_IRUGO);
module_param_named(unmap_granularity, scsi_debug_unmap_granularity, int, S_IRUGO);
module_param_named(unmap_max_blocks, scsi_debug_unmap_max_blocks, int, S_IRUGO);
module_param_named(unmap_max_desc, scsi_debug_unmap_max_desc, int, S_IRUGO);
module_param_named(virtual_gb, scsi_debug_virtual_gb, int, S_IRUGO | S_IWUSR);
module_param_named(vpd_use_hostno, scsi_debug_vpd_use_hostno, int,
S_IRUGO | S_IWUSR);
module_param_named(write_same_length, scsi_debug_write_same_length, int,
S_IRUGO | S_IWUSR);
MODULE_AUTHOR("Eric Youngdale + Douglas Gilbert");
MODULE_DESCRIPTION("SCSI debug adapter driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(SCSI_DEBUG_VERSION);
MODULE_PARM_DESC(add_host, "0..127 hosts allowed(def=1)");
MODULE_PARM_DESC(ato, "application tag ownership: 0=disk 1=host (def=1)");
MODULE_PARM_DESC(delay, "# of jiffies to delay response(def=1)");
MODULE_PARM_DESC(dev_size_mb, "size in MB of ram shared by devs(def=8)");
MODULE_PARM_DESC(dif, "data integrity field type: 0-3 (def=0)");
MODULE_PARM_DESC(dix, "data integrity extensions mask (def=0)");
MODULE_PARM_DESC(dsense, "use descriptor sense format(def=0 -> fixed)");
MODULE_PARM_DESC(every_nth, "timeout every nth command(def=0)");
MODULE_PARM_DESC(fake_rw, "fake reads/writes instead of copying (def=0)");
MODULE_PARM_DESC(guard, "protection checksum: 0=crc, 1=ip (def=0)");
MODULE_PARM_DESC(lbpu, "enable LBP, support UNMAP command (def=0)");
MODULE_PARM_DESC(lbpws, "enable LBP, support WRITE SAME(16) with UNMAP bit (def=0)");
MODULE_PARM_DESC(lbpws10, "enable LBP, support WRITE SAME(10) with UNMAP bit (def=0)");
MODULE_PARM_DESC(lowest_aligned, "lowest aligned lba (def=0)");
MODULE_PARM_DESC(max_luns, "number of LUNs per target to simulate(def=1)");
MODULE_PARM_DESC(max_queue, "max number of queued commands (1 to 255(def))");
MODULE_PARM_DESC(no_lun_0, "no LU number 0 (def=0 -> have lun 0)");
MODULE_PARM_DESC(no_uld, "stop ULD (e.g. sd driver) attaching (def=0))");
MODULE_PARM_DESC(num_parts, "number of partitions(def=0)");
MODULE_PARM_DESC(num_tgts, "number of targets per host to simulate(def=1)");
MODULE_PARM_DESC(opt_blks, "optimal transfer length in block (def=64)");
MODULE_PARM_DESC(opts, "1->noise, 2->medium_err, 4->timeout, 8->recovered_err... (def=0)");
MODULE_PARM_DESC(physblk_exp, "physical block exponent (def=0)");
MODULE_PARM_DESC(ptype, "SCSI peripheral type(def=0[disk])");
MODULE_PARM_DESC(scsi_level, "SCSI level to simulate(def=5[SPC-3])");
MODULE_PARM_DESC(sector_size, "logical block size in bytes (def=512)");
MODULE_PARM_DESC(unmap_alignment, "lowest aligned thin provisioning lba (def=0)");
MODULE_PARM_DESC(unmap_granularity, "thin provisioning granularity in blocks (def=1)");
MODULE_PARM_DESC(unmap_max_blocks, "max # of blocks can be unmapped in one cmd (def=0xffffffff)");
MODULE_PARM_DESC(unmap_max_desc, "max # of ranges that can be unmapped in one cmd (def=256)");
MODULE_PARM_DESC(virtual_gb, "virtual gigabyte size (def=0 -> use dev_size_mb)");
MODULE_PARM_DESC(vpd_use_hostno, "0 -> dev ids ignore hostno (def=1 -> unique dev ids)");
MODULE_PARM_DESC(write_same_length, "Maximum blocks per WRITE SAME cmd (def=0xffff)");
static char sdebug_info[256];
static const char * scsi_debug_info(struct Scsi_Host * shp)
static int scsi_debug_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int inout)
static ssize_t sdebug_delay_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_delay_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(delay, S_IRUGO | S_IWUSR, sdebug_delay_show,
sdebug_delay_store);
static ssize_t sdebug_opts_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_opts_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(opts, S_IRUGO | S_IWUSR, sdebug_opts_show,
sdebug_opts_store);
static ssize_t sdebug_ptype_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_ptype_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(ptype, S_IRUGO | S_IWUSR, sdebug_ptype_show, sdebug_ptype_store);
static ssize_t sdebug_dsense_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_dsense_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(dsense, S_IRUGO | S_IWUSR, sdebug_dsense_show,
sdebug_dsense_store);
static ssize_t sdebug_fake_rw_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_fake_rw_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(fake_rw, S_IRUGO | S_IWUSR, sdebug_fake_rw_show,
sdebug_fake_rw_store);
static ssize_t sdebug_no_lun_0_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_no_lun_0_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(no_lun_0, S_IRUGO | S_IWUSR, sdebug_no_lun_0_show,
sdebug_no_lun_0_store);
static ssize_t sdebug_num_tgts_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_num_tgts_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(num_tgts, S_IRUGO | S_IWUSR, sdebug_num_tgts_show,
sdebug_num_tgts_store);
static ssize_t sdebug_dev_size_mb_show(struct device_driver * ddp, char * buf)
DRIVER_ATTR(dev_size_mb, S_IRUGO, sdebug_dev_size_mb_show, NULL);
static ssize_t sdebug_num_parts_show(struct device_driver * ddp, char * buf)
DRIVER_ATTR(num_parts, S_IRUGO, sdebug_num_parts_show, NULL);
static ssize_t sdebug_every_nth_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_every_nth_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(every_nth, S_IRUGO | S_IWUSR, sdebug_every_nth_show,
sdebug_every_nth_store);
static ssize_t sdebug_max_luns_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_max_luns_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(max_luns, S_IRUGO | S_IWUSR, sdebug_max_luns_show,
sdebug_max_luns_store);
static ssize_t sdebug_max_queue_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_max_queue_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(max_queue, S_IRUGO | S_IWUSR, sdebug_max_queue_show,
sdebug_max_queue_store);
static ssize_t sdebug_no_uld_show(struct device_driver * ddp, char * buf)
DRIVER_ATTR(no_uld, S_IRUGO, sdebug_no_uld_show, NULL);
static ssize_t sdebug_scsi_level_show(struct device_driver * ddp, char * buf)
DRIVER_ATTR(scsi_level, S_IRUGO, sdebug_scsi_level_show, NULL);
static ssize_t sdebug_virtual_gb_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_virtual_gb_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(virtual_gb, S_IRUGO | S_IWUSR, sdebug_virtual_gb_show,
sdebug_virtual_gb_store);
static ssize_t sdebug_add_host_show(struct device_driver * ddp, char * buf)
static ssize_t sdebug_add_host_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(add_host, S_IRUGO | S_IWUSR, sdebug_add_host_show,
sdebug_add_host_store);
static ssize_t sdebug_vpd_use_hostno_show(struct device_driver * ddp,
char * buf)
static ssize_t sdebug_vpd_use_hostno_store(struct device_driver * ddp,
const char * buf, size_t count)
DRIVER_ATTR(vpd_use_hostno, S_IRUGO | S_IWUSR, sdebug_vpd_use_hostno_show,
sdebug_vpd_use_hostno_store);
static ssize_t sdebug_sector_size_show(struct device_driver * ddp, char * buf)
DRIVER_ATTR(sector_size, S_IRUGO, sdebug_sector_size_show, NULL);
static ssize_t sdebug_dix_show(struct device_driver *ddp, char *buf)
DRIVER_ATTR(dix, S_IRUGO, sdebug_dix_show, NULL);
static ssize_t sdebug_dif_show(struct device_driver *ddp, char *buf)
DRIVER_ATTR(dif, S_IRUGO, sdebug_dif_show, NULL);
static ssize_t sdebug_guard_show(struct device_driver *ddp, char *buf)
DRIVER_ATTR(guard, S_IRUGO, sdebug_guard_show, NULL);
static ssize_t sdebug_ato_show(struct device_driver *ddp, char *buf)
DRIVER_ATTR(ato, S_IRUGO, sdebug_ato_show, NULL);
static ssize_t sdebug_map_show(struct device_driver *ddp, char *buf)
DRIVER_ATTR(map, S_IRUGO, sdebug_map_show, NULL);
static int do_create_driverfs_files(void)
static void do_remove_driverfs_files(void)
struct device *pseudo_primary;
static int __init scsi_debug_init(void)
static void __exit scsi_debug_exit(void)
device_initcall(scsi_debug_init);
module_exit(scsi_debug_exit);
static void sdebug_release_adapter(struct device * dev)
static int sdebug_add_adapter(void)
static void sdebug_remove_adapter(void)
static
int scsi_debug_queuecommand_lck(struct scsi_cmnd *SCpnt, done_funct_t done)
static DEF_SCSI_QCMD(scsi_debug_queuecommand)
static struct scsi_host_template sdebug_driver_template = ;
static int sdebug_driver_probe(struct device * dev)
static int sdebug_driver_remove(struct device * dev)
static int pseudo_lld_bus_match(struct device *dev,
struct device_driver *dev_driver)
static struct bus_type pseudo_lld_bus = ;
