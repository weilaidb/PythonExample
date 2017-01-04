#define VERSION "1.3"
#undef	AEDSP16_DEBUG
#undef	AEDSP16_DEBUG_MORE
#undef	AEDSP16_INFO
#if defined(AEDSP16_DEBUG)
# define DBG(x)  printk x
# if defined(AEDSP16_DEBUG_MORE)
#  define DBG1(x) printk x
# else
#  define DBG1(x)
# endif
# define DBG(x)
# define DBG1(x)
#define TRUE	1
#define FALSE	0
#define IOBASE_REGION_SIZE	0x10
#define DEF_AEDSP16_IOB 0x220
#define DEF_AEDSP16_IRQ 7
#define DEF_AEDSP16_MRQ 0
#define DEF_AEDSP16_DMA 1
#define WRITE_MDIRQ_CFG   0x50
#define COMMAND_52        0x52
#define READ_HARD_CFG     0x58
#define COMMAND_5C        0x5c
#define COMMAND_60        0x60
#define COMMAND_66        0x66
#define COMMAND_6C        0x6c
#define COMMAND_6E        0x6e
#define COMMAND_88        0x88
#define DSP_INIT_MSS      0x8c
#define COMMAND_C5        0xc5
#define GET_DSP_VERSION   0xe1
#define GET_DSP_COPYRIGHT 0xe3
#define DSP_RESET    0x06
#define DSP_READ     0x0a
#define DSP_WRITE    0x0c
#define DSP_COMMAND  0x0c
#define DSP_STATUS   0x0c
#define DSP_DATAVAIL 0x0e
#define RETRY           10
#define STATUSRETRY   1000
#define HARDRETRY   500000
#define CARDNAMELEN	15
#define CARDVERLEN	10
#define CARDVERDIGITS	2
#if defined(CONFIG_SC6600)
#define IOBASE(xl)		((xl & 0x01)?0x240:0x220)
#define JOY(xl)  		(xl & 0x02)
#define MPUADDR(xl)		( 			\
(xl & 0x0C)?0x330:	\
(xl & 0x08)?0x320:	\
(xl & 0x04)?0x310:	\
0x300)
#define WSSADDR(xl)		((xl & 0x10)?0xE80:0x530)
#define CDROM(xh)		(xh & 0x20)
#define CDROMADDR(xh)		(((xh & 0x1F) << 4) + 0x200)
#define BLDIOBASE(xl, val)
#define BLDJOY(xl, val)
#define BLDMPUADDR(xl, val)
#define BLDWSSADDR(xl, val)
#define BLDCDROM(xh, val)
#define BLDCDROMADDR(xh, val)
#define INIT_NONE   (0   )
#define INIT_SBPRO  (1<<0)
#define INIT_MSS    (1<<1)
#define INIT_MPU401 (1<<2)
static int      soft_cfg __initdata = 0;
static int      soft_cfg_mss __initdata = 0;
static int      ver[CARDVERDIGITS] __initdata = ;
#if defined(CONFIG_SC6600)
static int	hard_cfg[2]
__initdata = ;
#if defined(CONFIG_SC6600)
struct	d_hcfg ;
static struct d_hcfg decoded_hcfg __initdata = ;
struct orVals ;
struct aedsp16_info ;
static struct orVals orIRQ[] __initdata = ;
static struct orVals orMIRQ[] __initdata = ;
static struct orVals orDMA[] __initdata = ;
static struct aedsp16_info ae_config = ;
static char     DSPCopyright[CARDNAMELEN + 1] __initdata = ;
static char     DSPVersion[CARDVERLEN + 1] __initdata = ;
static int __init aedsp16_wait_data(int port)
static int __init aedsp16_read(int port)
static int __init aedsp16_test_dsp(int port)
static int __init aedsp16_dsp_reset(int port)
static int __init aedsp16_write(int port, int cmd)
#if defined(CONFIG_SC6600)
#if defined(AEDSP16_INFO) || defined(AEDSP16_DEBUG)
void __init aedsp16_pinfo(void)
static void __init aedsp16_hard_decode(void)
static void __init aedsp16_hard_encode(void)
static int __init aedsp16_hard_write(int port)
static int __init aedsp16_hard_read(int port)
static int __init aedsp16_ext_cfg_write(int port)
static int __init aedsp16_cfg_write(int port)
static int __init aedsp16_init_mss(int port)
static int __init aedsp16_setup_board(int port)
static int __init aedsp16_stdcfg(int port)
static int __init aedsp16_dsp_version(int port)
static int __init aedsp16_dsp_copyright(int port)
static void __init aedsp16_init_tables(void)
static int __init aedsp16_init_board(void)
static int __init init_aedsp16_sb(void)
static void uninit_aedsp16_sb(void)
static int __init init_aedsp16_mss(void)
static void uninit_aedsp16_mss(void)
static int __init init_aedsp16_mpu(void)
static void uninit_aedsp16_mpu(void)
static int __init init_aedsp16(void)
static void __exit uninit_aedsp16(void)
static int __initdata io = -1;
static int __initdata irq = -1;
static int __initdata dma = -1;
static int __initdata mpu_irq = -1;
static int __initdata mss_base = -1;
static int __initdata mpu_base = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O base address (0x220 0x240)");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "IRQ line (5 7 9 10 11)");
module_param(dma, int, 0);
MODULE_PARM_DESC(dma, "dma line (0 1 3)");
module_param(mpu_irq, int, 0);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ line (5 7 9 10 0)");
module_param(mss_base, int, 0);
MODULE_PARM_DESC(mss_base, "MSS emulation I/O base address (0x530 0xE80)");
module_param(mpu_base, int, 0);
MODULE_PARM_DESC(mpu_base,"MPU-401 I/O base address (0x300 0x310 0x320 0x330)");
MODULE_AUTHOR("Riccardo Facchetti <fizban@tin.it>");
MODULE_DESCRIPTION("Audio Excel DSP 16 Driver Version " VERSION);
MODULE_LICENSE("GPL");
static int __init do_init_aedsp16(void)
static void __exit cleanup_aedsp16(void)
module_init(do_init_aedsp16);
module_exit(cleanup_aedsp16);
static int __init setup_aedsp16(char *str)
__setup("aedsp16=", setup_aedsp16);
