enum tpm_atmel_write_status ;
enum tpm_atmel_read_status ;
static int tpm_atml_recv(struct tpm_chip *chip, u8 *buf, size_t count)
static int tpm_atml_send(struct tpm_chip *chip, u8 *buf, size_t count)
static void tpm_atml_cancel(struct tpm_chip *chip)
static u8 tpm_atml_status(struct tpm_chip *chip)
static const struct file_operations atmel_ops = ;
static DEVICE_ATTR(pubek, S_IRUGO, tpm_show_pubek, NULL);
static DEVICE_ATTR(pcrs, S_IRUGO, tpm_show_pcrs, NULL);
static DEVICE_ATTR(caps, S_IRUGO, tpm_show_caps, NULL);
static DEVICE_ATTR(cancel, S_IWUSR |S_IWGRP, NULL, tpm_store_cancel);
static struct attribute* atmel_attrs[] = ;
static struct attribute_group atmel_attr_grp = ;
static const struct tpm_vendor_specific tpm_atmel = ;
static struct platform_device *pdev;
static void atml_plat_remove(void)
static int tpm_atml_suspend(struct platform_device *dev, pm_message_t msg)
static int tpm_atml_resume(struct platform_device *dev)
static struct platform_driver atml_drv = ;
static int __init init_atmel(void)
static void __exit cleanup_atmel(void)
module_init(init_atmel);
module_exit(cleanup_atmel);
MODULE_AUTHOR("Leendert van Doorn (leendert@watson.ibm.com)");
MODULE_DESCRIPTION("TPM Driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
