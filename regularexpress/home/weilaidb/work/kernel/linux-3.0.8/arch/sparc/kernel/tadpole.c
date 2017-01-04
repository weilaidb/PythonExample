#define MACIO_SCSI_CSR_ADDR	0x78400000
#define MACIO_EN_DMA		0x00000200
#define CLOCK_INIT_DONE		1
static int clk_state;
static volatile unsigned char *clk_ctrl;
void (*cpu_pwr_save)(void);
static inline unsigned int ldphys(unsigned int addr)
static void clk_init(void)
static void clk_slow(void)
static void tsu_clockstop(void)
static void swift_clockstop(void)
void __init clock_stop_probe(void)
