#define MPSC_CHR_1		0x000c
#define MPSC_CHR_2		0x0010
#define MPSC_CHR_2_TA		(1<<7)
#define MPSC_CHR_2_TCS		(1<<9)
#define MPSC_CHR_2_RA		(1<<23)
#define MPSC_CHR_2_CRD		(1<<25)
#define MPSC_CHR_2_EH		(1<<31)
#define MPSC_CHR_4		0x0018
#define MPSC_CHR_4_Z		(1<<29)
#define MPSC_CHR_5		0x001c
#define MPSC_CHR_5_CTL1_INTR	(1<<12)
#define MPSC_CHR_5_CTL1_VALID	(1<<15)
#define MPSC_CHR_10		0x0030
#define MPSC_INTR_CAUSE		0x0000
#define MPSC_INTR_CAUSE_RCC	(1<<6)
#define MPSC_INTR_MASK		0x0080
#define SDMA_SDCM		0x0008
#define SDMA_SDCM_AR		(1<<15)
#define SDMA_SDCM_AT		(1<<31)
static volatile char *mpsc_base;
static volatile char *mpscintr_base;
static u32 chr1, chr2;
static int mpsc_open(void)
static void mpsc_putc(unsigned char c)
static unsigned char mpsc_getc(void)
static u8 mpsc_tstc(void)
static void mpsc_stop_dma(volatile char *sdma_base)
static volatile char *mpsc_get_virtreg_of_phandle(void *devp, char *prop)
int mpsc_console_init(void *devp, struct serial_console_data *scdp)
