#define DEBUG_NO_WRITE	1
#define DEBUG_QUEUES	2
#define DEBUG_DMA	4
#define DEBUG_ABORT	8
#define DEBUG_DISCON	16
#define DEBUG_CONNECT	32
#define DEBUG_PHASES	64
#define DEBUG_WRITE	128
#define DEBUG_LINK	256
#define DEBUG_MESSAGES	512
#define DEBUG_RESET	1024
#define DEBUG_ALL	(DEBUG_RESET|DEBUG_MESSAGES|DEBUG_LINK|DEBUG_WRITE|\
DEBUG_PHASES|DEBUG_CONNECT|DEBUG_DISCON|DEBUG_ABORT|\
DEBUG_DMA|DEBUG_QUEUES)
#undef CONFIG_SCSI_ACORNSCSI_TAGGED_QUEUE
#undef CONFIG_SCSI_ACORNSCSI_LINK
#define SDTR_SIZE	12
#define SDTR_PERIOD	125
#define DEFAULT_PERIOD	500
#define DEBUG (DEBUG_RESET|DEBUG_WRITE|DEBUG_NO_WRITE)
#define NO_WRITE 0xFE
#define TIMEOUT_TIME 10
#undef CONFIG_ACORNSCSI_CONSTANTS
#define USE_DMAC
#define DBG(cmd,xxx...) \
if (cmd->device->id == DEBUG_TARGET)
#define DBG(cmd,xxx...) xxx
#define VER_MAJOR 2
#define VER_MINOR 0
#define VER_PATCH 6
#define ABORT_TAG 0xd
#error "Yippee!  ABORT TAG is now defined!  Remove this error!"
#error SCSI2 LINKed commands not supported (yet)!
#define INIT_DEVCON0	(DEVCON0_RQL|DEVCON0_EXW|DEVCON0_CMP)
#define INIT_DEVCON1	(DEVCON1_BHLD)
#define DMAC_READ	(MODECON_READ)
#define DMAC_WRITE	(MODECON_WRITE)
#define INIT_SBICDMA	(CTRL_DMABURST)
#define scsi_xferred	have_data_in
#define DMAC_BUFFER_SIZE	65536
#define STATUS_BUFFER_TO_PRINT	24
unsigned int sdtr_period = SDTR_PERIOD;
unsigned int sdtr_size   = SDTR_SIZE;
static void acornscsi_done(AS_Host *host, struct scsi_cmnd **SCpntp,
unsigned int result);
static int acornscsi_reconnect_finish(AS_Host *host);
static void acornscsi_dma_cleanup(AS_Host *host);
static void acornscsi_abortcmd(AS_Host *host, unsigned char tag);
#define SBIC_REGIDX	0x2000
#define SBIC_REGVAL	0x2004
#define DMAC_OFFSET	0x3000
#define INT_REG		0x2000
#define PAGE_REG	0x3000
static inline void sbic_arm_write(AS_Host *host, unsigned int reg, unsigned int value)
static inline int sbic_arm_read(AS_Host *host, unsigned int reg)
#define sbic_arm_writenext(host, val)	writeb((val), (host)->base + SBIC_REGVAL)
#define sbic_arm_readnext(host) 	readb((host)->base + SBIC_REGVAL)
#define dmac_read(host,reg) \
readb((host)->base + DMAC_OFFSET + ((reg) << 2))
#define dmac_write(host,reg,value) \
()
#define dmac_clearintr(host) 	writeb(0, (host)->fast + INT_REG)
static inline unsigned int dmac_address(AS_Host *host)
static
void acornscsi_dumpdma(AS_Host *host, char *where)
static
unsigned long acornscsi_sbic_xfcount(AS_Host *host)
static int
acornscsi_sbic_wait(AS_Host *host, int stat_mask, int stat, int timeout, char *msg)
static
int acornscsi_sbic_issuecmd(AS_Host *host, int command)
static void
acornscsi_csdelay(unsigned int cs)
static
void acornscsi_resetcard(AS_Host *host)
static char *acornscsi_interrupttype[] = ;
static signed char acornscsi_map[] = ;
static char *acornscsi_interruptcode[] = ;
static
void print_scsi_status(unsigned int ssr)
static
void print_sbic_status(int asr, int ssr, int cmdphase)
static void
acornscsi_dumplogline(AS_Host *host, int target, int line)
static
void acornscsi_dumplog(AS_Host *host, int target)
static
char acornscsi_target(AS_Host *host)
static inline
cmdtype_t acornscsi_cmdtype(int command)
static
datadir_t acornscsi_datadirection(int command)
static struct sync_xfer_tbl  sync_xfer_table[] = ;
static
int acornscsi_getperiod(unsigned char syncxfer)
static inline
int round_period(unsigned int period)
static
unsigned char calc_sync_xfer(unsigned int period, unsigned int offset)
static
intr_ret_t acornscsi_kick(AS_Host *host)
static void acornscsi_done(AS_Host *host, struct scsi_cmnd **SCpntp,
unsigned int result)
static
void acornscsi_data_updateptr(AS_Host *host, struct scsi_pointer *SCp, unsigned int length)
static
void acornscsi_data_read(AS_Host *host, char *ptr,
unsigned int start_addr, unsigned int length)
static
void acornscsi_data_write(AS_Host *host, char *ptr,
unsigned int start_addr, unsigned int length)
static inline
void acornscsi_dma_stop(AS_Host *host)
static
void acornscsi_dma_setup(AS_Host *host, dmadir_t direction)
static
void acornscsi_dma_cleanup(AS_Host *host)
static
void acornscsi_dma_intr(AS_Host *host)
static
void acornscsi_dma_xfer(AS_Host *host)
static
void acornscsi_dma_adjust(AS_Host *host)
static int
acornscsi_write_pio(AS_Host *host, char *bytes, int *ptr, int len, unsigned int max_timeout)
static void
acornscsi_sendcommand(AS_Host *host)
static
void acornscsi_sendmessage(AS_Host *host)
static
void acornscsi_readstatusbyte(AS_Host *host)
static
unsigned char acornscsi_readmessagebyte(AS_Host *host)
static
void acornscsi_message(AS_Host *host)
static
void acornscsi_buildmessages(AS_Host *host)
static
int acornscsi_starttransfer(AS_Host *host)
static
int acornscsi_reconnect(AS_Host *host)
static
int acornscsi_reconnect_finish(AS_Host *host)
static
void acornscsi_disconnect_unexpected(AS_Host *host)
static
void acornscsi_abortcmd(AS_Host *host, unsigned char tag)
static
intr_ret_t acornscsi_sbicintr(AS_Host *host, int in_irq)
static irqreturn_t
acornscsi_intr(int irq, void *dev_id)
static int acornscsi_queuecmd_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
DEF_SCSI_QCMD(acornscsi_queuecmd)
static inline void acornscsi_reportstatus(struct scsi_cmnd **SCpntp1,
struct scsi_cmnd **SCpntp2,
int result)
enum res_abort ;
static enum res_abort acornscsi_do_abort(AS_Host *host, struct scsi_cmnd *SCpnt)
int acornscsi_abort(struct scsi_cmnd *SCpnt)
int acornscsi_bus_reset(struct scsi_cmnd *SCpnt)
const
char *acornscsi_info(struct Scsi_Host *host)
int acornscsi_proc_info(struct Scsi_Host *instance, char *buffer, char **start, off_t offset,
int length, int inout)
static struct scsi_host_template acornscsi_template = ;
static int __devinit
acornscsi_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit acornscsi_remove(struct expansion_card *ec)
static const struct ecard_id acornscsi_cids[] = ;
static struct ecard_driver acornscsi_driver = ;
static int __init acornscsi_init(void)
static void __exit acornscsi_exit(void)
module_init(acornscsi_init);
module_exit(acornscsi_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("AcornSCSI driver");
MODULE_LICENSE("GPL");
