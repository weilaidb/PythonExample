#define GO7007_HPI_DEBUG
enum hpi_address ;
enum gpio_command ;
struct saa7134_go7007 ;
static struct go7007_board_info board_voyager = ;
MODULE_FIRMWARE("go7007tv.bin");
static int gpio_write(struct saa7134_dev *dev, u8 addr, u16 data)
static int gpio_read(struct saa7134_dev *dev, u8 addr, u16 *data)
static int saa7134_go7007_interface_reset(struct go7007 *go)
static int saa7134_go7007_write_interrupt(struct go7007 *go, int addr, int data)
static int saa7134_go7007_read_interrupt(struct go7007 *go)
static void saa7134_go7007_irq_ts_done(struct saa7134_dev *dev,
unsigned long status)
static int saa7134_go7007_stream_start(struct go7007 *go)
static int saa7134_go7007_stream_stop(struct go7007 *go)
static int saa7134_go7007_send_firmware(struct go7007 *go, u8 *data, int len)
static int saa7134_go7007_send_command(struct go7007 *go, unsigned int cmd,
void *arg)
static struct go7007_hpi_ops saa7134_go7007_hpi_ops = ;
static int saa7134_go7007_init(struct saa7134_dev *dev)
static int saa7134_go7007_fini(struct saa7134_dev *dev)
static struct saa7134_mpeg_ops saa7134_go7007_ops = ;
static int __init saa7134_go7007_mod_init(void)
static void __exit saa7134_go7007_mod_cleanup(void)
module_init(saa7134_go7007_mod_init);
module_exit(saa7134_go7007_mod_cleanup);
MODULE_LICENSE("GPL v2");
