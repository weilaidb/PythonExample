#define KB              1024
#define MB              (1024*KB)
#define GB              (1024*MB)
#define SMC_DEBUG   0
#define __SMC37c669_H
#define SMC37c669_DEVICE_IRQ_MASK	0x80000000
#define SMC37c669_DEVICE_IRQ( __i )	\
((SMC37c669_DEVICE_IRQ_MASK) | (__i))
#define SMC37c669_IS_DEVICE_IRQ(__i)	\
(((__i) & (SMC37c669_DEVICE_IRQ_MASK)) == (SMC37c669_DEVICE_IRQ_MASK))
#define SMC37c669_RAW_DEVICE_IRQ(__i)	\
((__i) & ~(SMC37c669_DEVICE_IRQ_MASK))
#define SMC37c669_DEVICE_DRQ_MASK	0x80000000
#define SMC37c669_DEVICE_DRQ(__d)	\
((SMC37c669_DEVICE_DRQ_MASK) | (__d))
#define SMC37c669_IS_DEVICE_DRQ(__d)	\
(((__d) & (SMC37c669_DEVICE_DRQ_MASK)) == (SMC37c669_DEVICE_DRQ_MASK))
#define SMC37c669_RAW_DEVICE_DRQ(__d)	\
((__d) & ~(SMC37c669_DEVICE_DRQ_MASK))
#define SMC37c669_DEVICE_ID	0x3
#define SERIAL_0	0
#define SERIAL_1	1
#define PARALLEL_0	2
#define FLOPPY_0	3
#define IDE_0		4
#define NUM_FUNCS	5
#define COM1_BASE	0x3F8
#define COM1_IRQ	4
#define COM2_BASE	0x2F8
#define COM2_IRQ	3
#define PARP_BASE	0x3BC
#define PARP_IRQ	7
#define PARP_DRQ	3
#define FDC_BASE	0x3F0
#define FDC_IRQ		6
#define FDC_DRQ		2
#define SMC37c669_CONFIG_ON_KEY		0x55
#define SMC37c669_CONFIG_OFF_KEY	0xAA
#define SMC37c669_DEVICE_IRQ_A	    ( SMC37c669_DEVICE_IRQ( 0x01 ) )
#define SMC37c669_DEVICE_IRQ_B	    ( SMC37c669_DEVICE_IRQ( 0x02 ) )
#define SMC37c669_DEVICE_IRQ_C	    ( SMC37c669_DEVICE_IRQ( 0x03 ) )
#define SMC37c669_DEVICE_IRQ_D	    ( SMC37c669_DEVICE_IRQ( 0x04 ) )
#define SMC37c669_DEVICE_IRQ_E	    ( SMC37c669_DEVICE_IRQ( 0x05 ) )
#define SMC37c669_DEVICE_IRQ_F	    ( SMC37c669_DEVICE_IRQ( 0x06 ) )
#define SMC37c669_DEVICE_IRQ_H	    ( SMC37c669_DEVICE_IRQ( 0x08 ) )
#define SMC37c669_DEVICE_DRQ_A		    ( SMC37c669_DEVICE_DRQ( 0x01 ) )
#define SMC37c669_DEVICE_DRQ_B		    ( SMC37c669_DEVICE_DRQ( 0x02 ) )
#define SMC37c669_DEVICE_DRQ_C		    ( SMC37c669_DEVICE_DRQ( 0x03 ) )
#define SMC37c669_CR00_INDEX	    0x00
#define SMC37c669_CR01_INDEX	    0x01
#define SMC37c669_CR02_INDEX	    0x02
#define SMC37c669_CR03_INDEX	    0x03
#define SMC37c669_CR04_INDEX	    0x04
#define SMC37c669_CR05_INDEX	    0x05
#define SMC37c669_CR06_INDEX	    0x06
#define SMC37c669_CR07_INDEX	    0x07
#define SMC37c669_CR08_INDEX	    0x08
#define SMC37c669_CR09_INDEX	    0x09
#define SMC37c669_CR0A_INDEX	    0x0A
#define SMC37c669_CR0B_INDEX	    0x0B
#define SMC37c669_CR0C_INDEX	    0x0C
#define SMC37c669_CR0D_INDEX	    0x0D
#define SMC37c669_CR0E_INDEX	    0x0E
#define SMC37c669_CR0F_INDEX	    0x0F
#define SMC37c669_CR10_INDEX	    0x10
#define SMC37c669_CR11_INDEX	    0x11
#define SMC37c669_CR12_INDEX	    0x12
#define SMC37c669_CR13_INDEX	    0x13
#define SMC37c669_CR14_INDEX	    0x14
#define SMC37c669_CR15_INDEX	    0x15
#define SMC37c669_CR16_INDEX	    0x16
#define SMC37c669_CR17_INDEX	    0x17
#define SMC37c669_CR18_INDEX	    0x18
#define SMC37c669_CR19_INDEX	    0x19
#define SMC37c669_CR1A_INDEX	    0x1A
#define SMC37c669_CR1B_INDEX	    0x1B
#define SMC37c669_CR1C_INDEX	    0x1C
#define SMC37c669_CR1D_INDEX	    0x1D
#define SMC37c669_CR1E_INDEX	    0x1E
#define SMC37c669_CR1F_INDEX	    0x1F
#define SMC37c669_CR20_INDEX	    0x20
#define SMC37c669_CR21_INDEX	    0x21
#define SMC37c669_CR22_INDEX	    0x22
#define SMC37c669_CR23_INDEX	    0x23
#define SMC37c669_CR24_INDEX	    0x24
#define SMC37c669_CR25_INDEX	    0x25
#define SMC37c669_CR26_INDEX	    0x26
#define SMC37c669_CR27_INDEX	    0x27
#define SMC37c669_CR28_INDEX	    0x28
#define SMC37c669_CR29_INDEX	    0x29
#define SMC37c669_DEVICE_ID_INDEX		    SMC37c669_CR0D_INDEX
#define SMC37c669_DEVICE_REVISION_INDEX		    SMC37c669_CR0E_INDEX
#define SMC37c669_FDC_BASE_ADDRESS_INDEX	    SMC37c669_CR20_INDEX
#define SMC37c669_IDE_BASE_ADDRESS_INDEX	    SMC37c669_CR21_INDEX
#define SMC37c669_IDE_ALTERNATE_ADDRESS_INDEX	    SMC37c669_CR22_INDEX
#define SMC37c669_PARALLEL0_BASE_ADDRESS_INDEX	    SMC37c669_CR23_INDEX
#define SMC37c669_SERIAL0_BASE_ADDRESS_INDEX	    SMC37c669_CR24_INDEX
#define SMC37c669_SERIAL1_BASE_ADDRESS_INDEX	    SMC37c669_CR25_INDEX
#define SMC37c669_PARALLEL_FDC_DRQ_INDEX	    SMC37c669_CR26_INDEX
#define SMC37c669_PARALLEL_FDC_IRQ_INDEX	    SMC37c669_CR27_INDEX
#define SMC37c669_SERIAL_IRQ_INDEX		    SMC37c669_CR28_INDEX
typedef struct _SMC37c669_CONFIG_REGS  SMC37c669_CONFIG_REGS;
typedef union _SMC37c669_CR00  SMC37c669_CR00;
typedef union _SMC37c669_CR01  SMC37c669_CR01;
typedef union _SMC37c669_CR02  SMC37c669_CR02;
typedef union _SMC37c669_CR03  SMC37c669_CR03;
typedef union _SMC37c669_CR04  SMC37c669_CR04;
typedef union _SMC37c669_CR05  SMC37c669_CR05;
typedef union _SMC37c669_CR06  SMC37c669_CR06;
typedef union _SMC37c669_CR07  SMC37c669_CR07;
typedef union _SMC37c669_CR08  SMC37c669_CR08;
typedef union _SMC37c669_CR09  SMC37c669_CR09;
typedef union _SMC37c669_CR0A  SMC37c669_CR0A;
typedef union _SMC37c669_CR0B  SMC37c669_CR0B;
typedef union _SMC37c669_CR0C  SMC37c669_CR0C;
typedef union _SMC37c669_CR0D  SMC37c669_CR0D;
typedef union _SMC37c669_CR0E  SMC37c669_CR0E;
typedef union _SMC37c669_CR0F  SMC37c669_CR0F;
typedef union _SMC37c669_CR10  SMC37c669_CR10;
typedef union _SMC37c669_CR11  SMC37c669_CR11;
typedef union _SMC37c66_CR1E  SMC37c669_CR1E;
typedef union _SMC37c669_CR1F  SMC37c669_CR1F;
typedef union _SMC37c669_CR20  SMC37c669_CR20;
typedef union _SMC37c669_CR21  SMC37c669_CR21;
typedef union _SMC37c669_CR22  SMC37c669_CR22;
typedef union _SMC37c669_CR23  SMC37c669_CR23;
typedef union _SMC37c669_CR24  SMC37c669_CR24;
typedef union _SMC37c669_CR25  SMC37c669_CR25;
typedef union _SMC37c669_CR26  SMC37c669_CR26;
typedef union _SMC37c669_CR27  SMC37c669_CR27;
typedef union _SMC37c669_CR28  SMC37c669_CR28;
typedef union _SMC37c669_CR29  SMC37c669_CR29;
typedef SMC37c669_CR0D SMC37c669_DEVICE_ID_REGISTER;
typedef SMC37c669_CR0E SMC37c669_DEVICE_REVISION_REGISTER;
typedef SMC37c669_CR20 SMC37c669_FDC_BASE_ADDRESS_REGISTER;
typedef SMC37c669_CR21 SMC37c669_IDE_ADDRESS_REGISTER;
typedef SMC37c669_CR23 SMC37c669_PARALLEL_BASE_ADDRESS_REGISTER;
typedef SMC37c669_CR24 SMC37c669_SERIAL_BASE_ADDRESS_REGISTER;
typedef SMC37c669_CR26 SMC37c669_PARALLEL_FDC_DRQ_REGISTER;
typedef SMC37c669_CR27 SMC37c669_PARALLEL_FDC_IRQ_REGISTER;
typedef SMC37c669_CR28 SMC37c669_SERIAL_IRQ_REGISTER;
typedef struct _SMC37c669_IRQ_TRANSLATION_ENTRY  SMC37c669_IRQ_TRANSLATION_ENTRY;
typedef struct _SMC37c669_DRQ_TRANSLATION_ENTRY  SMC37c669_DRQ_TRANSLATION_ENTRY;
SMC37c669_CONFIG_REGS *SMC37c669_detect(
int
);
unsigned int SMC37c669_enable_device(
unsigned int func
);
unsigned int SMC37c669_disable_device(
unsigned int func
);
unsigned int SMC37c669_configure_device(
unsigned int func,
int port,
int irq,
int drq
);
void SMC37c669_display_device_info(
void
);
#define TRUE 1
#define FALSE 0
#define wb( _x_, _y_ )	outb( _y_, (unsigned int)((unsigned long)_x_) )
#define rb( _x_ )	inb( (unsigned int)((unsigned long)_x_) )
static struct DEVICE_CONFIG  local_config [NUM_FUNCS];
static unsigned long SMC37c669_Addresses[] __initdata =
;
static SMC37c669_CONFIG_REGS *SMC37c669 __initdata = NULL;
static SMC37c669_IRQ_TRANSLATION_ENTRY *SMC37c669_irq_table __initdata;
static SMC37c669_IRQ_TRANSLATION_ENTRY SMC37c669_default_irq_table[]
__initdata =
;
static SMC37c669_IRQ_TRANSLATION_ENTRY SMC37c669_monet_irq_table[]
__initdata =
;
static SMC37c669_IRQ_TRANSLATION_ENTRY *SMC37c669_irq_tables[] __initdata =
;
static SMC37c669_DRQ_TRANSLATION_ENTRY *SMC37c669_drq_table __initdata;
static SMC37c669_DRQ_TRANSLATION_ENTRY SMC37c669_default_drq_table[]
__initdata =
;
static unsigned int SMC37c669_is_device_enabled(
unsigned int func
);
static void SMC37c669_config_mode(
unsigned int enable
);
static unsigned char SMC37c669_read_config(
unsigned char index
);
static void SMC37c669_write_config(
unsigned char index,
unsigned char data
);
static void SMC37c669_init_local_config( void );
static struct DEVICE_CONFIG *SMC37c669_get_config(
unsigned int func
);
static int SMC37c669_xlate_irq(
int irq
);
static int SMC37c669_xlate_drq(
int drq
);
static  __cacheline_aligned DEFINE_SPINLOCK(smc_lock);
SMC37c669_CONFIG_REGS * __init SMC37c669_detect( int index )
unsigned int __init SMC37c669_enable_device ( unsigned int func )
unsigned int __init SMC37c669_disable_device ( unsigned int func )
unsigned int __init SMC37c669_configure_device (
unsigned int func,
int port,
int irq,
int drq )
static unsigned int __init SMC37c669_is_device_enabled ( unsigned int func )
void __init SMC37c669_display_device_info ( void )
static void __init SMC37c669_config_mode(
unsigned int enable )
static unsigned char __init SMC37c669_read_config(
unsigned char index )
static void __init SMC37c669_write_config(
unsigned char index,
unsigned char data )
static void __init SMC37c669_init_local_config ( void )
static struct DEVICE_CONFIG * __init SMC37c669_get_config( unsigned int func )
static int __init SMC37c669_xlate_irq ( int irq )
static int __init SMC37c669_xlate_drq ( int drq )
void __init
SMC37c669_dump_registers(void)
void __init SMC669_Init ( int index )
