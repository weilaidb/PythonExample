#define	TPM_MAX_WTX_PACKAGES 	50
#define	TPM_WTX_MSLEEP_TIME 	20
#define	TPM_MSLEEP_TIME 	3
#define	TPM_MAX_TRIES		5000
#define	TPM_INFINEON_DEV_VEN_VALUE	0x15D1
#define TPM_INF_IO_PORT		0x0
#define TPM_INF_IO_MEM		0x1
#define TPM_INF_ADDR		0x0
#define TPM_INF_DATA		0x1
struct tpm_inf_dev ;
static struct tpm_inf_dev tpm_dev;
static inline void tpm_data_out(unsigned char data, unsigned char offset)
static inline unsigned char tpm_data_in(unsigned char offset)
static inline void tpm_config_out(unsigned char data, unsigned char offset)
static inline unsigned char tpm_config_in(unsigned char offset)
enum infineon_tpm_header ;
enum infineon_tpm_register ;
enum infineon_tpm_command_bits ;
enum infineon_tpm_status_bits ;
enum infineon_tpm_values ;
static int number_of_wtx;
static int empty_fifo(struct tpm_chip *chip, int clear_wrfifo)
static int wait(struct tpm_chip *chip, int wait_for_bit)
;
static void wait_and_send(struct tpm_chip *chip, u8 sendbyte)
static void tpm_wtx(struct tpm_chip *chip)
static void tpm_wtx_abort(struct tpm_chip *chip)
static int tpm_inf_recv(struct tpm_chip *chip, u8 * buf, size_t count)
static int tpm_inf_send(struct tpm_chip *chip, u8 * buf, size_t count)
static void tpm_inf_cancel(struct tpm_chip *chip)
static u8 tpm_inf_status(struct tpm_chip *chip)
static DEVICE_ATTR(pubek, S_IRUGO, tpm_show_pubek, NULL);
static DEVICE_ATTR(pcrs, S_IRUGO, tpm_show_pcrs, NULL);
static DEVICE_ATTR(caps, S_IRUGO, tpm_show_caps, NULL);
static DEVICE_ATTR(cancel, S_IWUSR | S_IWGRP, NULL, tpm_store_cancel);
static struct attribute *inf_attrs[] = ;
static struct attribute_group inf_attr_grp = ;
static const struct file_operations inf_ops = ;
static const struct tpm_vendor_specific tpm_inf = ;
static const struct pnp_device_id tpm_inf_pnp_tbl[] = ;
MODULE_DEVICE_TABLE(pnp, tpm_inf_pnp_tbl);
static int __devinit tpm_inf_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *dev_id)
static __devexit void tpm_inf_pnp_remove(struct pnp_dev *dev)
static int tpm_inf_pnp_suspend(struct pnp_dev *dev, pm_message_t pm_state)
static int tpm_inf_pnp_resume(struct pnp_dev *dev)
static struct pnp_driver tpm_inf_pnp_driver = ;
static int __init init_inf(void)
static void __exit cleanup_inf(void)
module_init(init_inf);
module_exit(cleanup_inf);
MODULE_AUTHOR("Marcel Selhorst <m.selhorst@sirrix.com>");
MODULE_DESCRIPTION("Driver for Infineon TPM SLD 9630 TT 1.1 / SLB 9635 TT 1.2");
MODULE_VERSION("1.9.2");
MODULE_LICENSE("GPL");
