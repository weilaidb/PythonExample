#define TPM_HEADER_SIZE 10
enum tis_access ;
enum tis_status ;
enum tis_int_flags ;
enum tis_defaults ;
#define	TPM_ACCESS(l)			(0x0000 | ((l) << 12))
#define	TPM_INT_ENABLE(l)		(0x0008 | ((l) << 12))
#define	TPM_INT_VECTOR(l)		(0x000C | ((l) << 12))
#define	TPM_INT_STATUS(l)		(0x0010 | ((l) << 12))
#define	TPM_INTF_CAPS(l)		(0x0014 | ((l) << 12))
#define	TPM_STS(l)			(0x0018 | ((l) << 12))
#define	TPM_DATA_FIFO(l)		(0x0024 | ((l) << 12))
#define	TPM_DID_VID(l)			(0x0F00 | ((l) << 12))
#define	TPM_RID(l)			(0x0F04 | ((l) << 12))
static LIST_HEAD(tis_chips);
static DEFINE_SPINLOCK(tis_lock);
static int is_itpm(struct pnp_dev *dev)
static int is_itpm(struct pnp_dev *dev)
static int check_locality(struct tpm_chip *chip, int l)
static void release_locality(struct tpm_chip *chip, int l, int force)
static int request_locality(struct tpm_chip *chip, int l)
static u8 tpm_tis_status(struct tpm_chip *chip)
static void tpm_tis_ready(struct tpm_chip *chip)
static int get_burstcount(struct tpm_chip *chip)
static int wait_for_stat(struct tpm_chip *chip, u8 mask, unsigned long timeout,
wait_queue_head_t *queue)
static int recv_data(struct tpm_chip *chip, u8 *buf, size_t count)
static int tpm_tis_recv(struct tpm_chip *chip, u8 *buf, size_t count)
static int itpm;
module_param(itpm, bool, 0444);
MODULE_PARM_DESC(itpm, "Force iTPM workarounds (found on some Lenovo laptops)");
static int tpm_tis_send(struct tpm_chip *chip, u8 *buf, size_t len)
static const struct file_operations tis_ops = ;
static DEVICE_ATTR(pubek, S_IRUGO, tpm_show_pubek, NULL);
static DEVICE_ATTR(pcrs, S_IRUGO, tpm_show_pcrs, NULL);
static DEVICE_ATTR(enabled, S_IRUGO, tpm_show_enabled, NULL);
static DEVICE_ATTR(active, S_IRUGO, tpm_show_active, NULL);
static DEVICE_ATTR(owned, S_IRUGO, tpm_show_owned, NULL);
static DEVICE_ATTR(temp_deactivated, S_IRUGO, tpm_show_temp_deactivated,
NULL);
static DEVICE_ATTR(caps, S_IRUGO, tpm_show_caps_1_2, NULL);
static DEVICE_ATTR(cancel, S_IWUSR | S_IWGRP, NULL, tpm_store_cancel);
static struct attribute *tis_attrs[] = ;
static struct attribute_group tis_attr_grp = ;
static struct tpm_vendor_specific tpm_tis = ;
static irqreturn_t tis_int_probe(int irq, void *dev_id)
static irqreturn_t tis_int_handler(int dummy, void *dev_id)
static int interrupts = 1;
module_param(interrupts, bool, 0444);
MODULE_PARM_DESC(interrupts, "Enable interrupts");
static int tpm_tis_init(struct device *dev, resource_size_t start,
resource_size_t len, unsigned int irq)
static int __devinit tpm_tis_pnp_init(struct pnp_dev *pnp_dev,
const struct pnp_device_id *pnp_id)
static int tpm_tis_pnp_suspend(struct pnp_dev *dev, pm_message_t msg)
static int tpm_tis_pnp_resume(struct pnp_dev *dev)
static struct pnp_device_id tpm_pnp_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pnp, tpm_pnp_tbl);
static __devexit void tpm_tis_pnp_remove(struct pnp_dev *dev)
static struct pnp_driver tis_pnp_driver = ;
#define TIS_HID_USR_IDX sizeof(tpm_pnp_tbl)/sizeof(struct pnp_device_id) -2
module_param_string(hid, tpm_pnp_tbl[TIS_HID_USR_IDX].id,
sizeof(tpm_pnp_tbl[TIS_HID_USR_IDX].id), 0444);
MODULE_PARM_DESC(hid, "Set additional specific HID for this driver to probe");
static int tpm_tis_suspend(struct platform_device *dev, pm_message_t msg)
static int tpm_tis_resume(struct platform_device *dev)
static struct platform_driver tis_drv = ;
static struct platform_device *pdev;
static int force;
module_param(force, bool, 0444);
MODULE_PARM_DESC(force, "Force device probe rather than using ACPI entry");
static int __init init_tis(void)
static void __exit cleanup_tis(void)
module_init(init_tis);
module_exit(cleanup_tis);
MODULE_AUTHOR("Leendert van Doorn (leendert@watson.ibm.com)");
MODULE_DESCRIPTION("TPM Driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
