#define DRV_NAME "mpc5xxx_can"
struct mpc5xxx_can_data ;
static struct of_device_id __devinitdata mpc52xx_cdm_ids[] = ;
static u32 __devinit mpc52xx_can_get_clock(struct platform_device *ofdev,
const char *clock_name,
int *mscan_clksrc)
static u32 __devinit mpc52xx_can_get_clock(struct platform_device *ofdev,
const char *clock_name,
int *mscan_clksrc)
struct mpc512x_clockctl ;
static struct of_device_id __devinitdata mpc512x_clock_ids[] = ;
static u32 __devinit mpc512x_can_get_clock(struct platform_device *ofdev,
const char *clock_name,
int *mscan_clksrc)
static u32 __devinit mpc512x_can_get_clock(struct platform_device *ofdev,
const char *clock_name,
int *mscan_clksrc)
static struct of_device_id mpc5xxx_can_table[];
static int __devinit mpc5xxx_can_probe(struct platform_device *ofdev)
static int __devexit mpc5xxx_can_remove(struct platform_device *ofdev)
static struct mscan_regs saved_regs;
static int mpc5xxx_can_suspend(struct platform_device *ofdev, pm_message_t state)
static int mpc5xxx_can_resume(struct platform_device *ofdev)
static struct mpc5xxx_can_data __devinitdata mpc5200_can_data = ;
static struct mpc5xxx_can_data __devinitdata mpc5121_can_data = ;
static struct of_device_id __devinitdata mpc5xxx_can_table[] = ;
static struct platform_driver mpc5xxx_can_driver = ;
static int __init mpc5xxx_can_init(void)
module_init(mpc5xxx_can_init);
static void __exit mpc5xxx_can_exit(void)
;
module_exit(mpc5xxx_can_exit);
MODULE_AUTHOR("Wolfgang Grandegger <wg@grandegger.com>");
MODULE_DESCRIPTION("Freescale MPC5xxx CAN driver");
MODULE_LICENSE("GPL v2");
