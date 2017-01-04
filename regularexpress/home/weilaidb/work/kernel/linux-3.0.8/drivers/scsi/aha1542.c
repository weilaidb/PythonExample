#define SCSI_BUF_PA(address)	isa_virt_to_bus(address)
#define SCSI_SG_PA(sgent)	(isa_page_to_bus(sg_page((sgent))) + (sgent)->offset)
#define DEB(x) x
#define DEB(x)
#define MAXBOARDS 4
static unsigned int bases[MAXBOARDS] __initdata = ;
static int setup_called[MAXBOARDS];
static int setup_buson[MAXBOARDS];
static int setup_busoff[MAXBOARDS];
static int setup_dmaspeed[MAXBOARDS] __initdata = ;
#if defined(MODULE)
static int isapnp = 0;
static int aha1542[] = ;
module_param_array(aha1542, int, NULL, 0);
module_param(isapnp, bool, 0);
static struct isapnp_device_id id_table[] __initdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static int isapnp = 1;
#define BIOS_TRANSLATION_1632 0
#define BIOS_TRANSLATION_6432 1
#define BIOS_TRANSLATION_25563 2
struct aha1542_hostdata ;
#define HOSTDATA(host) ((struct aha1542_hostdata *) &host->hostdata)
static DEFINE_SPINLOCK(aha1542_lock);
#define WAITnexttimeout 3000000
static void setup_mailboxes(int base_io, struct Scsi_Host *shpnt);
static int aha1542_restart(struct Scsi_Host *shost);
static void aha1542_intr_handle(struct Scsi_Host *shost);
#define aha1542_intr_reset(base)  outb(IRST, CONTROL(base))
#define WAIT(port, mask, allof, noneof)					\
#define WAITd(port, mask, allof, noneof, timeout)			\
static void aha1542_stat(void)
static int aha1542_out(unsigned int base, unchar * cmdp, int len)
static int __init aha1542_in(unsigned int base, unchar * cmdp, int len)
static int __init aha1542_in1(unsigned int base, unchar * cmdp, int len)
static int makecode(unsigned hosterr, unsigned scsierr)
static int __init aha1542_test_port(int bse, struct Scsi_Host *shpnt)
static irqreturn_t do_aha1542_intr_handle(int dummy, void *dev_id)
static void aha1542_intr_handle(struct Scsi_Host *shost)
static int aha1542_queuecommand_lck(Scsi_Cmnd * SCpnt, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(aha1542_queuecommand)
static void setup_mailboxes(int bse, struct Scsi_Host *shpnt)
static int __init aha1542_getconfig(int base_io, unsigned char *irq_level, unsigned char *dma_chan, unsigned char *scsi_id)
static int __init aha1542_mbenable(int base)
static int __init aha1542_query(int base_io, int *transl)
static char *setup_str[MAXBOARDS] __initdata;
static int setup_idx = 0;
static void __init aha1542_setup(char *str, int *ints)
static int __init do_setup(char *str)
__setup("aha1542=",do_setup);
static int __init aha1542_detect(struct scsi_host_template * tpnt)
static int aha1542_release(struct Scsi_Host *shost)
static int aha1542_restart(struct Scsi_Host *shost)
static int aha1542_dev_reset(Scsi_Cmnd * SCpnt)
static int aha1542_bus_reset(Scsi_Cmnd * SCpnt)
static int aha1542_host_reset(Scsi_Cmnd * SCpnt)
DEB(printk("aha1542_abort\n"));
return SCSI_ABORT_SNOOZE;
}
static int aha1542_old_reset(Scsi_Cmnd * SCpnt, unsigned int reset_flags)
static int aha1542_biosparam(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int *ip)
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template = ;
