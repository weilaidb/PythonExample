#define DS1WM_CMD	0x00
#define DS1WM_DATA	0x01
#define DS1WM_INT	0x02
#define DS1WM_INT_EN	0x03
#define DS1WM_CLKDIV	0x04
#define DS1WM_CNTRL	0x05
#define DS1WM_CMD_1W_RESET  (1 << 0)
#define DS1WM_CMD_SRA	    (1 << 1)
#define DS1WM_CMD_DQ_OUTPUT (1 << 2)
#define DS1WM_CMD_DQ_INPUT  (1 << 3)
#define DS1WM_CMD_RST	    (1 << 5)
#define DS1WM_CMD_OD	    (1 << 7)
#define DS1WM_INT_PD	    (1 << 0)
#define DS1WM_INT_PDR	    (1 << 1)
#define DS1WM_INT_TBE	    (1 << 2)
#define DS1WM_INT_TSRE	    (1 << 3)
#define DS1WM_INT_RBF	    (1 << 4)
#define DS1WM_INT_RSRF	    (1 << 5)
#define DS1WM_INTEN_EPD	    (1 << 0)
#define DS1WM_INTEN_IAS	    (1 << 1)
#define DS1WM_INTEN_ETBE    (1 << 2)
#define DS1WM_INTEN_ETMT    (1 << 3)
#define DS1WM_INTEN_ERBF    (1 << 4)
#define DS1WM_INTEN_ERSRF   (1 << 5)
#define DS1WM_INTEN_DQO	    (1 << 6)
#define DS1WM_INTEN_NOT_IAS (~DS1WM_INTEN_IAS)
#define DS1WM_TIMEOUT (HZ * 5)
static struct  freq[] = ;
struct ds1wm_data ;
static inline void ds1wm_write_register(struct ds1wm_data *ds1wm_data, u32 reg,
u8 val)
static inline u8 ds1wm_read_register(struct ds1wm_data *ds1wm_data, u32 reg)
static irqreturn_t ds1wm_isr(int isr, void *data)
static int ds1wm_reset(struct ds1wm_data *ds1wm_data)
static int ds1wm_write(struct ds1wm_data *ds1wm_data, u8 data)
static u8 ds1wm_read(struct ds1wm_data *ds1wm_data, unsigned char write_data)
static int ds1wm_find_divisor(int gclk)
static void ds1wm_up(struct ds1wm_data *ds1wm_data)
static void ds1wm_down(struct ds1wm_data *ds1wm_data)
static u8 ds1wm_read_byte(void *data)
static void ds1wm_write_byte(void *data, u8 byte)
static u8 ds1wm_reset_bus(void *data)
static void ds1wm_search(void *data, struct w1_master *master_dev,
u8 search_type, w1_slave_found_callback slave_found)
static struct w1_bus_master ds1wm_master = ;
static int ds1wm_probe(struct platform_device *pdev)
static int ds1wm_suspend(struct platform_device *pdev, pm_message_t state)
static int ds1wm_resume(struct platform_device *pdev)
#define ds1wm_suspend NULL
#define ds1wm_resume NULL
static int ds1wm_remove(struct platform_device *pdev)
static struct platform_driver ds1wm_driver = ;
static int __init ds1wm_init(void)
static void __exit ds1wm_exit(void)
module_init(ds1wm_init);
module_exit(ds1wm_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Szabolcs Gyurko <szabolcs.gyurko@tlt.hu>, "
"Matt Reimer <mreimer@vpop.net>,"
"Jean-Francois Dagenais <dagenaisj@sonatest.com>");
MODULE_DESCRIPTION("DS1WM w1 busmaster driver");
