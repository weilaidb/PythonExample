MODULE_AUTHOR("YOKOTA Hiroshi <yokota@netlab.is.tsukuba.ac.jp>");
MODULE_DESCRIPTION("WorkBit NinjaSCSI-3 / NinjaSCSI-32Bi(16bit) PCMCIA SCSI host adapter module");
MODULE_SUPPORTED_DEVICE("sd,sr,sg,st");
MODULE_LICENSE("GPL");
static int       nsp_burst_mode = BURST_MEM32;
module_param(nsp_burst_mode, int, 0);
MODULE_PARM_DESC(nsp_burst_mode, "Burst transfer mode (0=io8, 1=io32, 2=mem32(default))");
static int       free_ports = 0;
module_param(free_ports, bool, 0);
MODULE_PARM_DESC(free_ports, "Release IO ports after configuration? (default: 0 (=no))");
static struct scsi_host_template nsp_driver_template = ;
static nsp_hw_data nsp_data_base;
# define NSP_DEBUG_MASK		0x000000
# define nsp_msg(type, args...) nsp_cs_message("", 0, (type), args)
# define nsp_dbg(mask, args...)
# define NSP_DEBUG_MASK		0xffffff
# define nsp_msg(type, args...) \
nsp_cs_message (__func__, __LINE__, (type), args)
# define nsp_dbg(mask, args...) \
nsp_cs_dmessage(__func__, __LINE__, (mask), args)
#define NSP_DEBUG_QUEUECOMMAND		BIT(0)
#define NSP_DEBUG_REGISTER		BIT(1)
#define NSP_DEBUG_AUTOSCSI		BIT(2)
#define NSP_DEBUG_INTR			BIT(3)
#define NSP_DEBUG_SGLIST		BIT(4)
#define NSP_DEBUG_BUSFREE		BIT(5)
#define NSP_DEBUG_CDB_CONTENTS		BIT(6)
#define NSP_DEBUG_RESELECTION		BIT(7)
#define NSP_DEBUG_MSGINOCCUR		BIT(8)
#define NSP_DEBUG_EEPROM		BIT(9)
#define NSP_DEBUG_MSGOUTOCCUR		BIT(10)
#define NSP_DEBUG_BUSRESET		BIT(11)
#define NSP_DEBUG_RESTART		BIT(12)
#define NSP_DEBUG_SYNC			BIT(13)
#define NSP_DEBUG_WAIT			BIT(14)
#define NSP_DEBUG_TARGETFLAG		BIT(15)
#define NSP_DEBUG_PROC			BIT(16)
#define NSP_DEBUG_INIT			BIT(17)
#define NSP_DEBUG_DATA_IO      		BIT(18)
#define NSP_SPECIAL_PRINT_REGISTER	BIT(20)
#define NSP_DEBUG_BUF_LEN		150
static inline void nsp_inc_resid(struct scsi_cmnd *SCpnt, int residInc)
static void nsp_cs_message(const char *func, int line, char *type, char *fmt, ...)
static void nsp_cs_dmessage(const char *func, int line, int mask, char *fmt, ...)
static void nsp_scsi_done(struct scsi_cmnd *SCpnt)
static int nsp_queuecommand_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(nsp_queuecommand)
static void nsp_setup_fifo(nsp_hw_data *data, int enabled)
static void nsphw_init_sync(nsp_hw_data *data)
static int nsphw_init(nsp_hw_data *data)
static int nsphw_start_selection(struct scsi_cmnd *SCpnt)
struct nsp_sync_table ;
static struct nsp_sync_table nsp_sync_table_40M[] = ;
static struct nsp_sync_table nsp_sync_table_20M[] = ;
static int nsp_analyze_sdtr(struct scsi_cmnd *SCpnt)
static void nsp_start_timer(struct scsi_cmnd *SCpnt, int time)
static int nsp_negate_signal(struct scsi_cmnd *SCpnt, unsigned char mask,
char *str)
static int nsp_expect_signal(struct scsi_cmnd *SCpnt,
unsigned char current_phase,
unsigned char mask)
static int nsp_xfer(struct scsi_cmnd *SCpnt, int phase)
static int nsp_dataphase_bypass(struct scsi_cmnd *SCpnt)
static int nsp_reselected(struct scsi_cmnd *SCpnt)
static int nsp_fifo_count(struct scsi_cmnd *SCpnt)
#define RFIFO_CRIT 64
#define WFIFO_CRIT 64
static void nsp_pio_read(struct scsi_cmnd *SCpnt)
static void nsp_pio_write(struct scsi_cmnd *SCpnt)
#undef RFIFO_CRIT
#undef WFIFO_CRIT
static int nsp_nexus(struct scsi_cmnd *SCpnt)
static irqreturn_t nspintr(int irq, void *dev_id)
static struct Scsi_Host *nsp_detect(struct scsi_host_template *sht)
static const char *nsp_info(struct Scsi_Host *shpnt)
#undef SPRINTF
#define SPRINTF(args...) \
do  while(0)
static int nsp_proc_info(struct Scsi_Host *host, char *buffer, char **start,
off_t offset, int length, int inout)
#undef SPRINTF
static int nsp_bus_reset(nsp_hw_data *data)
static int nsp_eh_bus_reset(struct scsi_cmnd *SCpnt)
static int nsp_eh_host_reset(struct scsi_cmnd *SCpnt)
static int nsp_cs_probe(struct pcmcia_device *link)
static void nsp_cs_detach(struct pcmcia_device *link)
static int nsp_cs_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int nsp_cs_config(struct pcmcia_device *link)
static void nsp_cs_release(struct pcmcia_device *link)
static int nsp_cs_suspend(struct pcmcia_device *link)
static int nsp_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id nsp_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, nsp_cs_ids);
static struct pcmcia_driver nsp_driver = ;
static int __init nsp_cs_init(void)
static void __exit nsp_cs_exit(void)
module_init(nsp_cs_init)
module_exit(nsp_cs_exit)
