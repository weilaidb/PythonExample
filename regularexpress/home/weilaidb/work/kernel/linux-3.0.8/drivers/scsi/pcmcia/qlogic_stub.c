#define INT_TYPE	0
static char qlogic_name[] = "qlogic_cs";
static struct scsi_host_template qlogicfas_driver_template = ;
typedef struct scsi_info_t  scsi_info_t;
static void qlogic_release(struct pcmcia_device *link);
static void qlogic_detach(struct pcmcia_device *p_dev);
static int qlogic_config(struct pcmcia_device * link);
static struct Scsi_Host *qlogic_detect(struct scsi_host_template *host,
struct pcmcia_device *link, int qbase, int qlirq)
static int qlogic_probe(struct pcmcia_device *link)
static void qlogic_detach(struct pcmcia_device *link)
static int qlogic_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int qlogic_config(struct pcmcia_device * link)
static void qlogic_release(struct pcmcia_device *link)
static int qlogic_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id qlogic_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, qlogic_ids);
static struct pcmcia_driver qlogic_cs_driver = ;
static int __init init_qlogic_cs(void)
static void __exit exit_qlogic_cs(void)
MODULE_AUTHOR("Tom Zerucha, Michael Griffith");
MODULE_DESCRIPTION("Driver for the PCMCIA Qlogic FAS SCSI controllers");
MODULE_LICENSE("GPL");
module_init(init_qlogic_cs);
module_exit(exit_qlogic_cs);
