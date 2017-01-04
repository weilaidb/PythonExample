static u16 c_can_plat_read_reg_aligned_to_16bit(struct c_can_priv *priv,
void *reg)
static void c_can_plat_write_reg_aligned_to_16bit(struct c_can_priv *priv,
void *reg, u16 val)
static u16 c_can_plat_read_reg_aligned_to_32bit(struct c_can_priv *priv,
void *reg)
static void c_can_plat_write_reg_aligned_to_32bit(struct c_can_priv *priv,
void *reg, u16 val)
static int __devinit c_can_plat_probe(struct platform_device *pdev)
static int __devexit c_can_plat_remove(struct platform_device *pdev)
static struct platform_driver c_can_plat_driver = ;
static int __init c_can_plat_init(void)
module_init(c_can_plat_init);
static void __exit c_can_plat_exit(void)
module_exit(c_can_plat_exit);
MODULE_AUTHOR("Bhupesh Sharma <bhupesh.sharma@st.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Platform CAN bus driver for Bosch C_CAN controller");
