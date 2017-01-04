enum tpm_nsc_addr;
enum tpm_nsc_index ;
enum tpm_nsc_status_loc ;
enum tpm_nsc_status ;
enum tpm_nsc_cmd_mode ;
static int wait_for_stat(struct tpm_chip *chip, u8 mask, u8 val, u8 * data)
static int nsc_wait_for_ready(struct tpm_chip *chip)
static int tpm_nsc_recv(struct tpm_chip *chip, u8 * buf, size_t count)
static int tpm_nsc_send(struct tpm_chip *chip, u8 * buf, size_t count)
static void tpm_nsc_cancel(struct tpm_chip *chip)
static u8 tpm_nsc_status(struct tpm_chip *chip)
static const struct file_operations nsc_ops = ;
static DEVICE_ATTR(pubek, S_IRUGO, tpm_show_pubek, NULL);
static DEVICE_ATTR(pcrs, S_IRUGO, tpm_show_pcrs, NULL);
static DEVICE_ATTR(caps, S_IRUGO, tpm_show_caps, NULL);
static DEVICE_ATTR(cancel, S_IWUSR|S_IWGRP, NULL, tpm_store_cancel);
static struct attribute * nsc_attrs[] = ;
static struct attribute_group nsc_attr_grp = ;
static const struct tpm_vendor_specific tpm_nsc = ;
static struct platform_device *pdev = NULL;
static void tpm_nsc_remove(struct device *dev)
static int tpm_nsc_suspend(struct platform_device *dev, pm_message_t msg)
static int tpm_nsc_resume(struct platform_device *dev)
static struct platform_driver nsc_drv = ;
static int __init init_nsc(void)
static void __exit cleanup_nsc(void)
module_init(init_nsc);
module_exit(cleanup_nsc);
MODULE_AUTHOR("Leendert van Doorn (leendert@watson.ibm.com)");
MODULE_DESCRIPTION("TPM Driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
