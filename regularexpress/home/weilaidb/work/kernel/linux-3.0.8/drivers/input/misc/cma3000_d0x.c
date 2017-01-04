#define CMA3000_WHOAMI      0x00
#define CMA3000_REVID       0x01
#define CMA3000_CTRL        0x02
#define CMA3000_STATUS      0x03
#define CMA3000_RSTR        0x04
#define CMA3000_INTSTATUS   0x05
#define CMA3000_DOUTX       0x06
#define CMA3000_DOUTY       0x07
#define CMA3000_DOUTZ       0x08
#define CMA3000_MDTHR       0x09
#define CMA3000_MDFFTMR     0x0A
#define CMA3000_FFTHR       0x0B
#define CMA3000_RANGE2G    (1 << 7)
#define CMA3000_RANGE8G    (0 << 7)
#define CMA3000_BUSI2C     (0 << 4)
#define CMA3000_MODEMASK   (7 << 1)
#define CMA3000_GRANGEMASK (1 << 7)
#define CMA3000_STATUS_PERR    1
#define CMA3000_INTSTATUS_FFDET (1 << 2)
#define CMA3000_SETDELAY    30
#define CMA3000_INTDELAY    44
#define BIT_TO_2G  18
#define BIT_TO_8G  71
struct cma3000_accl_data ;
#define CMA3000_READ(data, reg, msg) \
(data->bus_ops->read(data->dev, reg, msg))
#define CMA3000_SET(data, reg, val, msg) \
((data)->bus_ops->write(data->dev, reg, val, msg))
static int mode_to_mg[8][2] = ;
static void decode_mg(struct cma3000_accl_data *data, int *datax,
int *datay, int *dataz)
static irqreturn_t cma3000_thread_irq(int irq, void *dev_id)
static int cma3000_reset(struct cma3000_accl_data *data)
static int cma3000_poweron(struct cma3000_accl_data *data)
static int cma3000_poweroff(struct cma3000_accl_data *data)
static int cma3000_open(struct input_dev *input_dev)
static void cma3000_close(struct input_dev *input_dev)
void cma3000_suspend(struct cma3000_accl_data *data)
EXPORT_SYMBOL(cma3000_suspend);
void cma3000_resume(struct cma3000_accl_data *data)
EXPORT_SYMBOL(cma3000_resume);
struct cma3000_accl_data *cma3000_init(struct device *dev, int irq,
const struct cma3000_bus_ops *bops)
EXPORT_SYMBOL(cma3000_init);
void cma3000_exit(struct cma3000_accl_data *data)
EXPORT_SYMBOL(cma3000_exit);
MODULE_DESCRIPTION("CMA3000-D0x Accelerometer Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hemanth V <hemanthv@ti.com>");
