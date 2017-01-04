static int edac_dev_idx;
static int edac_pci_idx;
static int edac_mc_idx;
static u32 orig_ddr_err_disable;
static u32 orig_ddr_err_sbe;
static u32 orig_pci_err_cap_dr;
static u32 orig_pci_err_en;
static u32 orig_l2_err_disable;
static u32 orig_hid1[2];
static ssize_t mpc85xx_mc_inject_data_hi_show(struct mem_ctl_info *mci,
char *data)
static ssize_t mpc85xx_mc_inject_data_lo_show(struct mem_ctl_info *mci,
char *data)
static ssize_t mpc85xx_mc_inject_ctrl_show(struct mem_ctl_info *mci, char *data)
static ssize_t mpc85xx_mc_inject_data_hi_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t mpc85xx_mc_inject_data_lo_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t mpc85xx_mc_inject_ctrl_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static struct mcidev_sysfs_attribute mpc85xx_mc_sysfs_attributes[] = ;
static void mpc85xx_set_mc_sysfs_attributes(struct mem_ctl_info *mci)
static void mpc85xx_pci_check(struct edac_pci_ctl_info *pci)
static irqreturn_t mpc85xx_pci_isr(int irq, void *dev_id)
static int __devinit mpc85xx_pci_err_probe(struct platform_device *op)
static int mpc85xx_pci_err_remove(struct platform_device *op)
static struct of_device_id mpc85xx_pci_err_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc85xx_pci_err_of_match);
static struct platform_driver mpc85xx_pci_err_driver = ;
static ssize_t mpc85xx_l2_inject_data_hi_show(struct edac_device_ctl_info
*edac_dev, char *data)
static ssize_t mpc85xx_l2_inject_data_lo_show(struct edac_device_ctl_info
*edac_dev, char *data)
static ssize_t mpc85xx_l2_inject_ctrl_show(struct edac_device_ctl_info
*edac_dev, char *data)
static ssize_t mpc85xx_l2_inject_data_hi_store(struct edac_device_ctl_info
*edac_dev, const char *data,
size_t count)
static ssize_t mpc85xx_l2_inject_data_lo_store(struct edac_device_ctl_info
*edac_dev, const char *data,
size_t count)
static ssize_t mpc85xx_l2_inject_ctrl_store(struct edac_device_ctl_info
*edac_dev, const char *data,
size_t count)
static struct edac_dev_sysfs_attribute mpc85xx_l2_sysfs_attributes[] = ;
static void mpc85xx_set_l2_sysfs_attributes(struct edac_device_ctl_info
*edac_dev)
static void mpc85xx_l2_check(struct edac_device_ctl_info *edac_dev)
static irqreturn_t mpc85xx_l2_isr(int irq, void *dev_id)
static int __devinit mpc85xx_l2_err_probe(struct platform_device *op)
static int mpc85xx_l2_err_remove(struct platform_device *op)
static struct of_device_id mpc85xx_l2_err_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc85xx_l2_err_of_match);
static struct platform_driver mpc85xx_l2_err_driver = ;
static unsigned int ecc_table[16] = ;
static u8 calculate_ecc(u32 high, u32 low)
static u8 syndrome_from_bit(unsigned int bit)
static void sbe_ecc_decode(u32 cap_high, u32 cap_low, u32 cap_ecc,
int *bad_data_bit, int *bad_ecc_bit)
static void mpc85xx_mc_check(struct mem_ctl_info *mci)
static irqreturn_t mpc85xx_mc_isr(int irq, void *dev_id)
static void __devinit mpc85xx_init_csrows(struct mem_ctl_info *mci)
static int __devinit mpc85xx_mc_err_probe(struct platform_device *op)
static int mpc85xx_mc_err_remove(struct platform_device *op)
static struct of_device_id mpc85xx_mc_err_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc85xx_mc_err_of_match);
static struct platform_driver mpc85xx_mc_err_driver = ;
static void __init mpc85xx_mc_clear_rfxe(void *data)
static int __init mpc85xx_mc_init(void)
module_init(mpc85xx_mc_init);
static void __exit mpc85xx_mc_restore_hid1(void *data)
static void __exit mpc85xx_mc_exit(void)
module_exit(mpc85xx_mc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Montavista Software, Inc.");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state,
"EDAC Error Reporting state: 0=Poll, 2=Interrupt");
