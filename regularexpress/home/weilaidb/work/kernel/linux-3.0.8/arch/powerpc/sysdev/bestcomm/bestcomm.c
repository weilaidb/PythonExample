#define DRIVER_NAME "bestcomm-core"
static struct of_device_id mpc52xx_sram_ids[] __devinitdata = ;
struct bcom_engine *bcom_eng = NULL;
EXPORT_SYMBOL_GPL(bcom_eng);
struct bcom_task *
bcom_task_alloc(int bd_count, int bd_size, int priv_size)
EXPORT_SYMBOL_GPL(bcom_task_alloc);
void
bcom_task_free(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_task_free);
int
bcom_load_image(int task, u32 *task_image)
EXPORT_SYMBOL_GPL(bcom_load_image);
void
bcom_set_initiator(int task, int initiator)
EXPORT_SYMBOL_GPL(bcom_set_initiator);
void
bcom_enable(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_enable);
void
bcom_disable(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_disable);
static u32 fdt_ops[] = ;
static int __devinit
bcom_engine_init(void)
static void
bcom_engine_cleanup(void)
static int __devinit mpc52xx_bcom_probe(struct platform_device *op)
static int mpc52xx_bcom_remove(struct platform_device *op)
static struct of_device_id mpc52xx_bcom_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc52xx_bcom_of_match);
static struct platform_driver mpc52xx_bcom_of_platform_driver = ;
static int __init
mpc52xx_bcom_init(void)
static void __exit
mpc52xx_bcom_exit(void)
subsys_initcall(mpc52xx_bcom_init);
module_exit(mpc52xx_bcom_exit);
MODULE_DESCRIPTION("Freescale MPC52xx BestComm DMA");
MODULE_AUTHOR("Sylvain Munaut <tnt@246tNt.com>");
MODULE_AUTHOR("Andrey Volkov <avolkov@varma-el.com>");
MODULE_AUTHOR("Dale Farnsworth <dfarnsworth@mvista.com>");
MODULE_LICENSE("GPL v2");
