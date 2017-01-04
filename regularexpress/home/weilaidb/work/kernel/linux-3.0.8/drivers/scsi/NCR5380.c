#define NDEBUG 0
#define NDEBUG_ABORT 0
#if (NDEBUG & NDEBUG_LISTS)
#define LIST(x,y)
#define REMOVE(w,x,y,z)
#define LIST(x,y)
#define REMOVE(w,x,y,z)
#undef LINKED
#undef REAL_DMA
#undef READ_OVERRUNS
#define READ_OVERRUNS
#define io_recovery_delay(x)
#define io_recovery_delay(x)	udelay(x)
static int do_abort(struct Scsi_Host *host);
static void do_reset(struct Scsi_Host *host);
static __inline__ void initialize_SCp(Scsi_Cmnd * cmd)
static int NCR5380_poll_politely(struct Scsi_Host *instance, int reg, int bit, int val, int t)
static struct  phases[] __maybe_unused = ;
#if NDEBUG
static struct  signals[] = ,
basrs[] = ,
icrs[] = ,
mrs[] = ;
static void NCR5380_print(struct Scsi_Host *instance)
static void NCR5380_print_phase(struct Scsi_Host *instance)
#define USLEEP_SLEEP (20*HZ/1000)
#define USLEEP_POLL (200*HZ/1000)
#define USLEEP_WAITLONG USLEEP_SLEEP
static int should_disconnect(unsigned char cmd)
static void NCR5380_set_timer(struct NCR5380_hostdata *hostdata, unsigned long timeout)
static int probe_irq __initdata = 0;
static irqreturn_t __init probe_intr(int irq, void *dev_id)
static int __init __maybe_unused NCR5380_probe_irq(struct Scsi_Host *instance,
int possible)
static void __init __maybe_unused
NCR5380_print_options(struct Scsi_Host *instance)
static void NCR5380_print_status(struct Scsi_Host *instance)
#undef SPRINTF
#define SPRINTF(args...) do  while(0)
static
char *lprint_Scsi_Cmnd(Scsi_Cmnd * cmd, char *pos, char *buffer, int length);
static
char *lprint_command(unsigned char *cmd, char *pos, char *buffer, int len);
static
char *lprint_opcode(int opcode, char *pos, char *buffer, int length);
static int __maybe_unused NCR5380_proc_info(struct Scsi_Host *instance,
char *buffer, char **start, off_t offset, int length, int inout)
static char *lprint_Scsi_Cmnd(Scsi_Cmnd * cmd, char *pos, char *buffer, int length)
static char *lprint_command(unsigned char *command, char *pos, char *buffer, int length)
static char *lprint_opcode(int opcode, char *pos, char *buffer, int length)
static int __devinit NCR5380_init(struct Scsi_Host *instance, int flags)
static void NCR5380_exit(struct Scsi_Host *instance)
static int NCR5380_queue_command_lck(Scsi_Cmnd * cmd, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(NCR5380_queue_command)
static void NCR5380_main(struct work_struct *work)
static irqreturn_t NCR5380_intr(int dummy, void *dev_id)
static void collect_stats(struct NCR5380_hostdata *hostdata, Scsi_Cmnd * cmd)
static int NCR5380_select(struct Scsi_Host *instance, Scsi_Cmnd * cmd, int tag)
static int NCR5380_transfer_pio(struct Scsi_Host *instance, unsigned char *phase, int *count, unsigned char **data)
static void do_reset(struct Scsi_Host *host)
static int do_abort(struct Scsi_Host *host)
#if defined(REAL_DMA) || defined(PSEUDO_DMA) || defined (REAL_DMA_POLL)
static int NCR5380_transfer_dma(struct Scsi_Host *instance, unsigned char *phase, int *count, unsigned char **data)
static void NCR5380_information_transfer(struct Scsi_Host *instance) {
NCR5380_local_declare();
struct NCR5380_hostdata *hostdata = (struct NCR5380_hostdata *)instance->hostdata;
unsigned char msgout = NOP;
int sink = 0;
int len;
#if defined(PSEUDO_DMA) || defined(REAL_DMA_POLL)
int transfersize;
unsigned char *data;
unsigned char phase, tmp, extended_msg[10], old_phase = 0xff;
Scsi_Cmnd *cmd = (Scsi_Cmnd *) hostdata->connected;
unsigned long poll_time = jiffies + USLEEP_POLL;
NCR5380_setup(instance);
while (1)
static void NCR5380_reselect(struct Scsi_Host *instance)
static void NCR5380_dma_complete(NCR5380_instance * instance)
static int NCR5380_abort(Scsi_Cmnd * cmd)
static int NCR5380_bus_reset(Scsi_Cmnd * cmd)
