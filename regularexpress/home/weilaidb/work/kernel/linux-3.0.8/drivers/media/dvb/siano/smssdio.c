#define SMSSDIO_DATA		0x00
#define SMSSDIO_INT		0x04
#define SMSSDIO_BLOCK_SIZE	128
static const struct sdio_device_id smssdio_ids[] __devinitconst = ;
MODULE_DEVICE_TABLE(sdio, smssdio_ids);
struct smssdio_device ;
static int smssdio_sendrequest(void *context, void *buffer, size_t size)
static void smssdio_interrupt(struct sdio_func *func)
static int __devinit smssdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void smssdio_remove(struct sdio_func *func)
static struct sdio_driver smssdio_driver = ;
static int __init smssdio_module_init(void)
static void __exit smssdio_module_exit(void)
module_init(smssdio_module_init);
module_exit(smssdio_module_exit);
MODULE_DESCRIPTION("Siano SMS1xxx SDIO driver");
MODULE_AUTHOR("Pierre Ossman");
MODULE_LICENSE("GPL");
