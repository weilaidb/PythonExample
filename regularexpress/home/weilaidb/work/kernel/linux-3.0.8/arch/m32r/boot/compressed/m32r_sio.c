static void putc(char c);
static int puts(const char *s)
#if defined(CONFIG_PLAT_M32700UT) || defined(CONFIG_PLAT_OPSPUT)
#define USE_FPGA_MAP	0
#if USE_FPGA_MAP
#define BOOT_SIO0STS	(volatile unsigned short *)(0x02c00000 + 0x20006)
#define BOOT_SIO0TXB	(volatile unsigned short *)(0x02c00000 + 0x2000c)
#undef PLD_BASE
#if defined(CONFIG_PLAT_OPSPUT)
#define PLD_BASE	0x1cc00000
#define PLD_BASE	0xa4c00000
#define BOOT_SIO0STS	PLD_ESIO0STS
#define BOOT_SIO0TXB	PLD_ESIO0TXB
static void putc(char c)
#if defined(CONFIG_PLAT_MAPPI2)
#define SIO0STS	(volatile unsigned short *)(0xa0efd000 + 14)
#define SIO0TXB	(volatile unsigned short *)(0xa0efd000 + 30)
#define SIO0STS	(volatile unsigned short *)(0x00efd000 + 14)
#define SIO0TXB	(volatile unsigned short *)(0x00efd000 + 30)
static void putc(char c)
