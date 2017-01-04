static int qlcfg5 = (XTALFREQ << 5);
static int qlcfg6 = SYNCXFRPD;
static int qlcfg7 = SYNCOFFST;
static int qlcfg8 = (SLOWCABLE << 7) | (QL_ENABLE_PARITY << 4);
static int qlcfg9 = ((XTALFREQ + 4) / 5);
static int qlcfgc = (FASTCLK << 3) | (FASTSCSI << 4);
static void ql_zap(struct qlogicfas408_priv *priv)
static int ql_pdma(struct qlogicfas408_priv *priv, int phase, char *request, int reqlen)
static int ql_wai(struct qlogicfas408_priv *priv)
static void ql_icmd(struct scsi_cmnd *cmd)
static unsigned int ql_pcmd(struct scsi_cmnd *cmd)
static void ql_ihandl(void *dev_id)
irqreturn_t qlogicfas408_ihandl(int irq, void *dev_id)
static int qlogicfas408_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done) (struct scsi_cmnd *))
DEF_SCSI_QCMD(qlogicfas408_queuecommand)
int qlogicfas408_biosparam(struct scsi_device *disk, struct block_device *dev,
sector_t capacity, int ip[])
int qlogicfas408_abort(struct scsi_cmnd *cmd)
int qlogicfas408_bus_reset(struct scsi_cmnd *cmd)
const char *qlogicfas408_info(struct Scsi_Host *host)
int qlogicfas408_get_chip_type(int qbase, int int_type)
void qlogicfas408_setup(int qbase, int id, int int_type)
int qlogicfas408_detect(int qbase, int int_type)
void qlogicfas408_disable_ints(struct qlogicfas408_priv *priv)
static int __init qlogicfas408_init(void)
static void __exit qlogicfas408_exit(void)
MODULE_AUTHOR("Tom Zerucha, Michael Griffith");
MODULE_DESCRIPTION("Driver for the Qlogic FAS SCSI controllers");
MODULE_LICENSE("GPL");
module_init(qlogicfas408_init);
module_exit(qlogicfas408_exit);
EXPORT_SYMBOL(qlogicfas408_info);
EXPORT_SYMBOL(qlogicfas408_queuecommand);
EXPORT_SYMBOL(qlogicfas408_abort);
EXPORT_SYMBOL(qlogicfas408_bus_reset);
EXPORT_SYMBOL(qlogicfas408_biosparam);
EXPORT_SYMBOL(qlogicfas408_ihandl);
EXPORT_SYMBOL(qlogicfas408_get_chip_type);
EXPORT_SYMBOL(qlogicfas408_setup);
EXPORT_SYMBOL(qlogicfas408_detect);
EXPORT_SYMBOL(qlogicfas408_disable_ints);
