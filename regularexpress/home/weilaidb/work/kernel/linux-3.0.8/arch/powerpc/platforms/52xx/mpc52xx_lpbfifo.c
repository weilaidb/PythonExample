MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("MPC5200 LocalPlus FIFO device driver");
MODULE_LICENSE("GPL");
#define LPBFIFO_REG_PACKET_SIZE		(0x00)
#define LPBFIFO_REG_START_ADDRESS	(0x04)
#define LPBFIFO_REG_CONTROL		(0x08)
#define LPBFIFO_REG_ENABLE		(0x0C)
#define LPBFIFO_REG_BYTES_DONE_STATUS	(0x14)
#define LPBFIFO_REG_FIFO_DATA		(0x40)
#define LPBFIFO_REG_FIFO_STATUS		(0x44)
#define LPBFIFO_REG_FIFO_CONTROL	(0x48)
#define LPBFIFO_REG_FIFO_ALARM		(0x4C)
struct mpc52xx_lpbfifo ;
static struct mpc52xx_lpbfifo lpbfifo;
static void mpc52xx_lpbfifo_kick(struct mpc52xx_lpbfifo_request *req)
static irqreturn_t mpc52xx_lpbfifo_irq(int irq, void *dev_id)
static irqreturn_t mpc52xx_lpbfifo_bcom_irq(int irq, void *dev_id)
void mpc52xx_lpbfifo_poll(void)
EXPORT_SYMBOL(mpc52xx_lpbfifo_poll);
int mpc52xx_lpbfifo_submit(struct mpc52xx_lpbfifo_request *req)
EXPORT_SYMBOL(mpc52xx_lpbfifo_submit);
void mpc52xx_lpbfifo_abort(struct mpc52xx_lpbfifo_request *req)
EXPORT_SYMBOL(mpc52xx_lpbfifo_abort);
static int __devinit mpc52xx_lpbfifo_probe(struct platform_device *op)
static int __devexit mpc52xx_lpbfifo_remove(struct platform_device *op)
static struct of_device_id mpc52xx_lpbfifo_match[] __devinitconst = ;
static struct platform_driver mpc52xx_lpbfifo_driver = ;
static int __init mpc52xx_lpbfifo_init(void)
module_init(mpc52xx_lpbfifo_init);
static void __exit mpc52xx_lpbfifo_exit(void)
module_exit(mpc52xx_lpbfifo_exit);
