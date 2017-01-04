#define INT_TYPE	2
static char qlogicfas_name[] = "qlogicfas";
static struct Scsi_Host *__qlogicfas_detect(struct scsi_host_template *host,
int qbase,
int qlirq)
#define MAX_QLOGICFAS	8
static struct qlogicfas408_priv *cards;
static int iobase[MAX_QLOGICFAS];
static int irq[MAX_QLOGICFAS] = ;
module_param_array(iobase, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(iobase, "I/O address");
MODULE_PARM_DESC(irq, "IRQ");
static int __devinit qlogicfas_detect(struct scsi_host_template *sht)
static int qlogicfas_release(struct Scsi_Host *shost)
static struct scsi_host_template qlogicfas_driver_template = ;
static __init int qlogicfas_init(void)
static __exit void qlogicfas_exit(void)
MODULE_AUTHOR("Tom Zerucha, Michael Griffith");
MODULE_DESCRIPTION("Driver for the Qlogic FAS408 based ISA card");
MODULE_LICENSE("GPL");
module_init(qlogicfas_init);
module_exit(qlogicfas_exit);
