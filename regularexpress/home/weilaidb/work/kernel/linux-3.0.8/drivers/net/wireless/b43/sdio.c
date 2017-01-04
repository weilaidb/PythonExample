#define HNBU_CHIPID		0x01
#define B43_SDIO_BLOCK_SIZE	64
static const struct b43_sdio_quirk  b43_sdio_quirks[] = ;
static unsigned int b43_sdio_get_quirks(u16 vendor, u16 device)
static void b43_sdio_interrupt_dispatcher(struct sdio_func *func)
int b43_sdio_request_irq(struct b43_wldev *dev,
void (*handler)(struct b43_wldev *dev))
void b43_sdio_free_irq(struct b43_wldev *dev)
static int b43_sdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void b43_sdio_remove(struct sdio_func *func)
static const struct sdio_device_id b43_sdio_ids[] = ;
static struct sdio_driver b43_sdio_driver = ;
int b43_sdio_init(void)
void b43_sdio_exit(void)
