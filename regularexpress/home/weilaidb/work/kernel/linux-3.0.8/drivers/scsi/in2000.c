#define IN2000_VERSION    "1.33-2.5"
#define IN2000_DATE       "2002/11/03"
static char *setup_args[] = ;
static char *setup_strings;
module_param(setup_strings, charp, 0);
static inline uchar read_3393(struct IN2000_hostdata *hostdata, uchar reg_num)
#define READ_AUX_STAT() read1_io(IO_WD_ASR)
static inline void write_3393(struct IN2000_hostdata *hostdata, uchar reg_num, uchar value)
static inline void write_3393_cmd(struct IN2000_hostdata *hostdata, uchar cmd)
static uchar read_1_byte(struct IN2000_hostdata *hostdata)
static void write_3393_count(struct IN2000_hostdata *hostdata, unsigned long value)
static unsigned long read_3393_count(struct IN2000_hostdata *hostdata)
static int is_dir_out(Scsi_Cmnd * cmd)
static struct sx_period sx_table[] = ;
static int round_period(unsigned int period)
static uchar calc_sync_xfer(unsigned int period, unsigned int offset)
static void in2000_execute(struct Scsi_Host *instance);
static int in2000_queuecommand_lck(Scsi_Cmnd * cmd, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(in2000_queuecommand)
static void in2000_execute(struct Scsi_Host *instance)
static void transfer_pio(uchar * buf, int cnt, int data_in_dir, struct IN2000_hostdata *hostdata)
static void transfer_bytes(Scsi_Cmnd * cmd, int data_in_dir)
static irqreturn_t in2000_intr(int irqnum, void *dev_id)
#define RESET_CARD         0
#define RESET_CARD_AND_BUS 1
#define B_FLAG 0x80
static int reset_hardware(struct Scsi_Host *instance, int type)
static int in2000_bus_reset(Scsi_Cmnd * cmd)
static int __in2000_abort(Scsi_Cmnd * cmd)
static int in2000_abort(Scsi_Cmnd * cmd)
#define MAX_IN2000_HOSTS 3
#define MAX_SETUP_ARGS ARRAY_SIZE(setup_args)
#define SETUP_BUFFER_SIZE 200
static char setup_buffer[SETUP_BUFFER_SIZE];
static char setup_used[MAX_SETUP_ARGS];
static int done_setup = 0;
static void __init in2000_setup(char *str, int *ints)
static int __init check_setup_args(char *key, int *val, char *buf)
static u32 bios_tab[] in2000__INITDATA = ;
static unsigned short base_tab[] in2000__INITDATA = ;
static int int_tab[] in2000__INITDATA = ;
static int probe_bios(u32 addr, u32 *s1, uchar *switches)
static int __init in2000_detect(struct scsi_host_template * tpnt)
static int in2000_release(struct Scsi_Host *shost)
static int in2000_biosparam(struct scsi_device *sdev, struct block_device *bdev, sector_t capacity, int *iinfo)
static int in2000_proc_info(struct Scsi_Host *instance, char *buf, char **start, off_t off, int len, int in)
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template = ;
