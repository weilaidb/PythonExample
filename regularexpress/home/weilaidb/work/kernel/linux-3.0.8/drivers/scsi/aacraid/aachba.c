#define	INQD_PDT_DA	0x00
#define	INQD_PDT_PROC	0x03
#define	INQD_PDT_CHNGR	0x08
#define	INQD_PDT_COMM	0x09
#define	INQD_PDT_NOLUN2 0x1f
#define	INQD_PDT_NOLUN	0x7f
#define	INQD_PDT_DMASK	0x1F
#define	INQD_PDT_QMASK	0xE0
#define SENCODE_NO_SENSE			0x00
#define SENCODE_END_OF_DATA			0x00
#define SENCODE_BECOMING_READY			0x04
#define SENCODE_INIT_CMD_REQUIRED		0x04
#define SENCODE_PARAM_LIST_LENGTH_ERROR		0x1A
#define SENCODE_INVALID_COMMAND			0x20
#define SENCODE_LBA_OUT_OF_RANGE		0x21
#define SENCODE_INVALID_CDB_FIELD		0x24
#define SENCODE_LUN_NOT_SUPPORTED		0x25
#define SENCODE_INVALID_PARAM_FIELD		0x26
#define SENCODE_PARAM_NOT_SUPPORTED		0x26
#define SENCODE_PARAM_VALUE_INVALID		0x26
#define SENCODE_RESET_OCCURRED			0x29
#define SENCODE_LUN_NOT_SELF_CONFIGURED_YET	0x3E
#define SENCODE_INQUIRY_DATA_CHANGED		0x3F
#define SENCODE_SAVING_PARAMS_NOT_SUPPORTED	0x39
#define SENCODE_DIAGNOSTIC_FAILURE		0x40
#define SENCODE_INTERNAL_TARGET_FAILURE		0x44
#define SENCODE_INVALID_MESSAGE_ERROR		0x49
#define SENCODE_LUN_FAILED_SELF_CONFIG		0x4c
#define SENCODE_OVERLAPPED_COMMAND		0x4E
#define ASENCODE_NO_SENSE			0x00
#define ASENCODE_END_OF_DATA			0x05
#define ASENCODE_BECOMING_READY			0x01
#define ASENCODE_INIT_CMD_REQUIRED		0x02
#define ASENCODE_PARAM_LIST_LENGTH_ERROR	0x00
#define ASENCODE_INVALID_COMMAND		0x00
#define ASENCODE_LBA_OUT_OF_RANGE		0x00
#define ASENCODE_INVALID_CDB_FIELD		0x00
#define ASENCODE_LUN_NOT_SUPPORTED		0x00
#define ASENCODE_INVALID_PARAM_FIELD		0x00
#define ASENCODE_PARAM_NOT_SUPPORTED		0x01
#define ASENCODE_PARAM_VALUE_INVALID		0x02
#define ASENCODE_RESET_OCCURRED			0x00
#define ASENCODE_LUN_NOT_SELF_CONFIGURED_YET	0x00
#define ASENCODE_INQUIRY_DATA_CHANGED		0x03
#define ASENCODE_SAVING_PARAMS_NOT_SUPPORTED	0x00
#define ASENCODE_DIAGNOSTIC_FAILURE		0x80
#define ASENCODE_INTERNAL_TARGET_FAILURE	0x00
#define ASENCODE_INVALID_MESSAGE_ERROR		0x00
#define ASENCODE_LUN_FAILED_SELF_CONFIG		0x00
#define ASENCODE_OVERLAPPED_COMMAND		0x00
#define BYTE0(x) (unsigned char)(x)
#define BYTE1(x) (unsigned char)((x) >> 8)
#define BYTE2(x) (unsigned char)((x) >> 16)
#define BYTE3(x) (unsigned char)((x) >> 24)
struct inquiry_data ;
static unsigned long aac_build_sg(struct scsi_cmnd* scsicmd, struct sgmap* sgmap);
static unsigned long aac_build_sg64(struct scsi_cmnd* scsicmd, struct sgmap64* psg);
static unsigned long aac_build_sgraw(struct scsi_cmnd* scsicmd, struct sgmapraw* psg);
static int aac_send_srb_fib(struct scsi_cmnd* scsicmd);
static char *aac_get_status_string(u32 status);
static int nondasd = -1;
static int aac_cache = 2;
static int dacmode = -1;
int aac_msi;
int aac_commit = -1;
int startup_timeout = 180;
int aif_timeout = 120;
module_param(nondasd, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(nondasd, "Control scanning of hba for nondasd devices."
" 0=off, 1=on");
module_param_named(cache, aac_cache, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(cache, "Disable Queue Flush commands:\n"
"\tbit 0 - Disable FUA in WRITE SCSI commands\n"
"\tbit 1 - Disable SYNCHRONIZE_CACHE SCSI command\n"
"\tbit 2 - Disable only if Battery is protecting Cache");
module_param(dacmode, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(dacmode, "Control whether dma addressing is using 64 bit DAC."
" 0=off, 1=on");
module_param_named(commit, aac_commit, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(commit, "Control whether a COMMIT_CONFIG is issued to the"
" adapter for foreign arrays.\n"
"This is typically needed in systems that do not have a BIOS."
" 0=off, 1=on");
module_param_named(msi, aac_msi, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(msi, "IRQ handling."
" 0=PIC(default), 1=MSI, 2=MSI-X(unsupported, uses MSI)");
module_param(startup_timeout, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(startup_timeout, "The duration of time in seconds to wait for"
" adapter to have it's kernel up and\n"
"running. This is typically adjusted for large systems that do not"
" have a BIOS.");
module_param(aif_timeout, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(aif_timeout, "The duration of time in seconds to wait for"
" applications to pick up AIFs before\n"
"deregistering them. This is typically adjusted for heavily burdened"
" systems.");
int numacb = -1;
module_param(numacb, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(numacb, "Request a limit to the number of adapter control"
" blocks (FIB) allocated. Valid values are 512 and down. Default is"
" to use suggestion from Firmware.");
int acbsize = -1;
module_param(acbsize, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(acbsize, "Request a specific adapter control block (FIB)"
" size. Valid values are 512, 2048, 4096 and 8192. Default is to use"
" suggestion from Firmware.");
int update_interval = 30 * 60;
module_param(update_interval, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(update_interval, "Interval in seconds between time sync"
" updates issued to adapter.");
int check_interval = 24 * 60 * 60;
module_param(check_interval, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(check_interval, "Interval in seconds between adapter health"
" checks.");
int aac_check_reset = 1;
module_param_named(check_reset, aac_check_reset, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(check_reset, "If adapter fails health check, reset the"
" adapter. a value of -1 forces the reset to adapters programmed to"
" ignore it.");
int expose_physicals = -1;
module_param(expose_physicals, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(expose_physicals, "Expose physical components of the arrays."
" -1=protect 0=off, 1=on");
int aac_reset_devices;
module_param_named(reset_devices, aac_reset_devices, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(reset_devices, "Force an adapter reset at initialization.");
int aac_wwn = 1;
module_param_named(wwn, aac_wwn, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(wwn, "Select a WWN type for the arrays:\n"
"\t0 - Disable\n"
"\t1 - Array Meta Data Signature (default)\n"
"\t2 - Adapter Serial Number");
static inline int aac_valid_context(struct scsi_cmnd *scsicmd,
struct fib *fibptr)
int aac_get_config_status(struct aac_dev *dev, int commit_flag)
static void aac_expose_phy_device(struct scsi_cmnd *scsicmd)
int aac_get_containers(struct aac_dev *dev)
static void get_container_name_callback(void *context, struct fib * fibptr)
static int aac_get_container_name(struct scsi_cmnd * scsicmd)
static int aac_probe_container_callback2(struct scsi_cmnd * scsicmd)
static void _aac_probe_container2(void * context, struct fib * fibptr)
static void _aac_probe_container1(void * context, struct fib * fibptr)
static int _aac_probe_container(struct scsi_cmnd * scsicmd, int (*callback)(struct scsi_cmnd *))
static int aac_probe_container_callback1(struct scsi_cmnd * scsicmd)
int aac_probe_container(struct aac_dev *dev, int cid)
struct scsi_inq ;
static void inqstrcpy(char *a, char *b)
static char *container_types[] = ;
char * get_container_type(unsigned tindex)
static void setinqstr(struct aac_dev *dev, void *data, int tindex)
static void get_container_serial_callback(void *context, struct fib * fibptr)
static int aac_get_container_serial(struct scsi_cmnd * scsicmd)
static int setinqserial(struct aac_dev *dev, void *data, int cid)
static inline void set_sense(struct sense_data *sense_data, u8 sense_key,
u8 sense_code, u8 a_sense_code, u8 bit_pointer, u16 field_pointer)
static int aac_bounds_32(struct aac_dev * dev, struct scsi_cmnd * cmd, u64 lba)
static int aac_bounds_64(struct aac_dev * dev, struct scsi_cmnd * cmd, u64 lba)
static void io_callback(void *context, struct fib * fibptr);
static int aac_read_raw_io(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count)
static int aac_read_block64(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count)
static int aac_read_block(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count)
static int aac_write_raw_io(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count, int fua)
static int aac_write_block64(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count, int fua)
static int aac_write_block(struct fib * fib, struct scsi_cmnd * cmd, u64 lba, u32 count, int fua)
static struct aac_srb * aac_scsi_common(struct fib * fib, struct scsi_cmnd * cmd)
static void aac_srb_callback(void *context, struct fib * fibptr);
static int aac_scsi_64(struct fib * fib, struct scsi_cmnd * cmd)
static int aac_scsi_32(struct fib * fib, struct scsi_cmnd * cmd)
static int aac_scsi_32_64(struct fib * fib, struct scsi_cmnd * cmd)
int aac_get_adapter_info(struct aac_dev* dev)
static void io_callback(void *context, struct fib * fibptr)
static int aac_read(struct scsi_cmnd * scsicmd)
static int aac_write(struct scsi_cmnd * scsicmd)
static void synchronize_callback(void *context, struct fib *fibptr)
static int aac_synchronize(struct scsi_cmnd *scsicmd)
static void aac_start_stop_callback(void *context, struct fib *fibptr)
static int aac_start_stop(struct scsi_cmnd *scsicmd)
int aac_scsi_cmd(struct scsi_cmnd * scsicmd)
static int query_disk(struct aac_dev *dev, void __user *arg)
static int force_delete_disk(struct aac_dev *dev, void __user *arg)
static int delete_disk(struct aac_dev *dev, void __user *arg)
int aac_dev_ioctl(struct aac_dev *dev, int cmd, void __user *arg)
static void aac_srb_callback(void *context, struct fib * fibptr)
static int aac_send_srb_fib(struct scsi_cmnd* scsicmd)
static unsigned long aac_build_sg(struct scsi_cmnd* scsicmd, struct sgmap* psg)
static unsigned long aac_build_sg64(struct scsi_cmnd* scsicmd, struct sgmap64* psg)
static unsigned long aac_build_sgraw(struct scsi_cmnd* scsicmd, struct sgmapraw* psg)
struct aac_srb_status_info ;
static struct aac_srb_status_info srb_status_info[] = ;
char *aac_get_status_string(u32 status)
