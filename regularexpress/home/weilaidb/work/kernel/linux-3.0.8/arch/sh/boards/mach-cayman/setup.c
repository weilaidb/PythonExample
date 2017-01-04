#define	RES NO_PRIORITY
#define IR0 IRL0_PRIORITY
#define IR1 IRL1_PRIORITY
#define IR2 IRL2_PRIORITY
#define IR3 IRL3_PRIORITY
#define PCA INTA_PRIORITY
#define PCB INTB_PRIORITY
#define PCC INTC_PRIORITY
#define PCD INTD_PRIORITY
#define SER TOP_PRIORITY
#define ERR TOP_PRIORITY
#define PW0 TOP_PRIORITY
#define PW1 TOP_PRIORITY
#define PW2 TOP_PRIORITY
#define PW3 TOP_PRIORITY
#define DM0 NO_PRIORITY
#define DM1 NO_PRIORITY
#define DM2 NO_PRIORITY
#define DM3 NO_PRIORITY
#define DAE NO_PRIORITY
#define TU0 TIMER_PRIORITY
#define TU1 NO_PRIORITY
#define TU2 NO_PRIORITY
#define TI2 NO_PRIORITY
#define ATI NO_PRIORITY
#define PRI NO_PRIORITY
#define CUI RTC_PRIORITY
#define ERI SCIF_PRIORITY
#define RXI SCIF_PRIORITY
#define BRI SCIF_PRIORITY
#define TXI SCIF_PRIORITY
#define ITI TOP_PRIORITY
#define SMSC_SUPERIO_BASE	0x04000000
#define SMSC_CONFIG_PORT_ADDR	0x3f0
#define SMSC_INDEX_PORT_ADDR	SMSC_CONFIG_PORT_ADDR
#define SMSC_DATA_PORT_ADDR	0x3f1
#define SMSC_ENTER_CONFIG_KEY	0x55
#define SMSC_EXIT_CONFIG_KEY	0xaa
#define SMCS_LOGICAL_DEV_INDEX	0x07
#define SMSC_DEVICE_ID_INDEX	0x20
#define SMSC_DEVICE_REV_INDEX	0x21
#define SMSC_ACTIVATE_INDEX	0x30
#define SMSC_PRIMARY_BASE_INDEX  0x60
#define SMSC_SECONDARY_BASE_INDEX 0x62
#define SMSC_PRIMARY_INT_INDEX	0x70
#define SMSC_SECONDARY_INT_INDEX 0x72
#define SMSC_IDE1_DEVICE	1
#define SMSC_KEYBOARD_DEVICE	7
#define SMSC_CONFIG_REGISTERS	8
#define SMSC_SUPERIO_READ_INDEXED(index) ()
#define SMSC_SUPERIO_WRITE_INDEXED(val, index) ()
#define IDE1_PRIMARY_BASE	0x01f0
#define IDE1_SECONDARY_BASE	0x03f6
unsigned long smsc_superio_virt;
int platform_int_priority[NR_INTC_IRQS] = ;
static int __init smsc_superio_setup(void)
device_initcall(smsc_superio_setup);
static void __iomem *cayman_ioport_map(unsigned long port, unsigned int len)
extern void init_cayman_irq(void);
static struct sh_machine_vector mv_cayman __initmv = ;
