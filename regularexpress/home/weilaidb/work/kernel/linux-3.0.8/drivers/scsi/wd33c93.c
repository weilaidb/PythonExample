#define optimum_sx_per(hostdata) (hostdata)->sx_table[1].period_ns
#define WD33C93_VERSION    "1.26++"
#define WD33C93_DATE       "10/Feb/2007"
MODULE_AUTHOR("John Shifflett");
MODULE_DESCRIPTION("Generic WD33C93 SCSI driver");
MODULE_LICENSE("GPL");
static char *setup_args[] = ;
static char *setup_strings;
module_param(setup_strings, charp, 0);
static void wd33c93_execute(struct Scsi_Host *instance);
static inline uchar
read_wd33c93(const wd33c93_regs regs, uchar reg_num)
static inline unsigned long
read_wd33c93_count(const wd33c93_regs regs)
static inline uchar
read_aux_stat(const wd33c93_regs regs)
static inline void
write_wd33c93(const wd33c93_regs regs, uchar reg_num, uchar value)
static inline void
write_wd33c93_count(const wd33c93_regs regs, unsigned long value)
#define write_wd33c93_cmd(regs, cmd) \
write_wd33c93((regs), WD_COMMAND, (cmd))
static inline void
write_wd33c93_cdb(const wd33c93_regs regs, uint len, uchar cmnd[])
static inline uchar
read_wd33c93(const wd33c93_regs regs, uchar reg_num)
static unsigned long
read_wd33c93_count(const wd33c93_regs regs)
static inline uchar
read_aux_stat(const wd33c93_regs regs)
static inline void
write_wd33c93(const wd33c93_regs regs, uchar reg_num, uchar value)
static void
write_wd33c93_count(const wd33c93_regs regs, unsigned long value)
static inline void
write_wd33c93_cmd(const wd33c93_regs regs, uchar cmd)
static inline void
write_wd33c93_cdb(const wd33c93_regs regs, uint len, uchar cmnd[])
static inline uchar
read_1_byte(const wd33c93_regs regs)
static int
round_period(unsigned int period, const struct sx_period *sx_table)
static uchar
calc_sync_xfer(unsigned int period, unsigned int offset, unsigned int fast,
const struct sx_period *sx_table)
static inline void
calc_sync_msg(unsigned int period, unsigned int offset, unsigned int fast,
uchar  msg[2])
static int
wd33c93_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
DEF_SCSI_QCMD(wd33c93_queuecommand)
static void
wd33c93_execute(struct Scsi_Host *instance)
static void
transfer_pio(const wd33c93_regs regs, uchar * buf, int cnt,
int data_in_dir, struct WD33C93_hostdata *hostdata)
static void
transfer_bytes(const wd33c93_regs regs, struct scsi_cmnd *cmd,
int data_in_dir)
void
wd33c93_intr(struct Scsi_Host *instance)
static void
reset_wd33c93(struct Scsi_Host *instance)
int
wd33c93_host_reset(struct scsi_cmnd * SCpnt)
int
wd33c93_abort(struct scsi_cmnd * cmd)
#define MAX_WD33C93_HOSTS 4
#define MAX_SETUP_ARGS ARRAY_SIZE(setup_args)
#define SETUP_BUFFER_SIZE 200
static char setup_buffer[SETUP_BUFFER_SIZE];
static char setup_used[MAX_SETUP_ARGS];
static int done_setup = 0;
static int
wd33c93_setup(char *str)
__setup("wd33c93=", wd33c93_setup);
static int
check_setup_args(char *key, int *flags, int *val, char *buf)
static inline unsigned int
round_4(unsigned int x)
static void
calc_sx_table(unsigned int mhz, struct sx_period sx_table[9])
static uchar
set_clk_freq(int freq, int *mhz)
static inline void set_resync ( struct WD33C93_hostdata *hd, int mask )
void
wd33c93_init(struct Scsi_Host *instance, const wd33c93_regs regs,
dma_setup_t setup, dma_stop_t stop, int clock_freq)
int
wd33c93_proc_info(struct Scsi_Host *instance, char *buf, char **start, off_t off, int len, int in)
EXPORT_SYMBOL(wd33c93_host_reset);
EXPORT_SYMBOL(wd33c93_init);
EXPORT_SYMBOL(wd33c93_abort);
EXPORT_SYMBOL(wd33c93_queuecommand);
EXPORT_SYMBOL(wd33c93_intr);
EXPORT_SYMBOL(wd33c93_proc_info);
