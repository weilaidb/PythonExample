static unsigned int nvram_size;
static unsigned char nvram_buf[4];
static DEFINE_SPINLOCK(nvram_lock);
static unsigned char chrp_nvram_read(int addr)
static void chrp_nvram_write(int addr, unsigned char val)
void __init chrp_nvram_init(void)
