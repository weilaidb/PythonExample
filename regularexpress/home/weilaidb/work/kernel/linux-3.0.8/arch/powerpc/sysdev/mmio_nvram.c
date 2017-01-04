static void __iomem *mmio_nvram_start;
static long mmio_nvram_len;
static DEFINE_SPINLOCK(mmio_nvram_lock);
static ssize_t mmio_nvram_read(char *buf, size_t count, loff_t *index)
static unsigned char mmio_nvram_read_val(int addr)
static ssize_t mmio_nvram_write(char *buf, size_t count, loff_t *index)
void mmio_nvram_write_val(int addr, unsigned char val)
static ssize_t mmio_nvram_get_size(void)
int __init mmio_nvram_init(void)
