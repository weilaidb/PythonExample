#define PLL0		0x00
#define PLL1		0x01
#define OTHER		0x02
#define EXT		0x03
#define MSOFFSET	0x0C
#define ATAOFFSET	0x0a
#define LCDOFFSET	0x06
#define AUDOFFSET	0x04
#define CPUOFFSET	0x00
static DEFINE_MUTEX(clksel_sem);
static void clock_source_select(const char *dev_id, unsigned int clkval)
void nuc900_clock_source(struct device *dev, unsigned char *src)
EXPORT_SYMBOL(nuc900_clock_source);
