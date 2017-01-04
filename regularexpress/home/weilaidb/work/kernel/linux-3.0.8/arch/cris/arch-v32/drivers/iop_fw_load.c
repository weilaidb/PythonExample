#define IOP_TIMEOUT 100
#error "This driver is broken with regard to its driver core usage."
#error "Please contact <greg@kroah.com> for details on how to fix it properly."
static struct device iop_spu_device[2] = ;
static struct device iop_mpu_device = ;
static int wait_mpu_idle(void)
int iop_fw_load_spu(const unsigned char *fw_name, unsigned int spu_inst)
int iop_fw_load_mpu(unsigned char *fw_name)
int iop_start_mpu(unsigned int start_addr)
static int __init iop_fw_load_init(void)
static void __exit iop_fw_load_exit(void)
module_init(iop_fw_load_init);
module_exit(iop_fw_load_exit);
MODULE_DESCRIPTION("ETRAX FS IO-Processor Firmware Loader");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(iop_fw_load_spu);
EXPORT_SYMBOL(iop_fw_load_mpu);
EXPORT_SYMBOL(iop_start_mpu);
