#define atmel_getb(chip, offset) readb(chip->vendor->iobase + offset);
#define atmel_putb(val, chip, offset) writeb(val, chip->vendor->iobase + offset)
#define atmel_request_region request_mem_region
#define atmel_release_region release_mem_region
static inline void atmel_put_base_addr(void __iomem *iobase)
static void __iomem * atmel_get_base_addr(unsigned long *base, int *region_size)
#define atmel_getb(chip, offset) inb(chip->vendor->base + offset)
#define atmel_putb(val, chip, offset) outb(val, chip->vendor->base + offset)
#define atmel_request_region request_region
#define atmel_release_region release_region
enum tpm_atmel_addr ;
static int atmel_verify_tpm11(void)
static inline void atmel_put_base_addr(void __iomem *iobase)
static void __iomem * atmel_get_base_addr(unsigned long *base, int *region_size)
