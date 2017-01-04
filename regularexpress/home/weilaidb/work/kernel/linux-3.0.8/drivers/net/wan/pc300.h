#define	_PC300_H
#define PC300_PROTO_MLPPP 1
#define	PC300_MAXCHAN	2
#define	PC300_RAMSIZE	0x40000
#define	PC300_FALCSIZE	0x400
#define PC300_OSC_CLOCK	24576000
#define PC300_PCI_CLOCK	33000000
#define BD_DEF_LEN	0x0800
#define DMA_TX_MEMSZ	0x8000
#define DMA_RX_MEMSZ	0x10000
#define N_DMA_TX_BUF	(DMA_TX_MEMSZ / BD_DEF_LEN)
#define N_DMA_RX_BUF	(DMA_RX_MEMSZ / BD_DEF_LEN)
#define DMA_TX_BASE	((N_DMA_TX_BUF + N_DMA_RX_BUF) *	\
PC300_MAXCHAN * sizeof(pcsca_bd_t))
#define DMA_RX_BASE	(DMA_TX_BASE + PC300_MAXCHAN*DMA_TX_MEMSZ)
#define DMA_TX_BD_BASE	0x0000
#define DMA_RX_BD_BASE	(DMA_TX_BD_BASE + ((PC300_MAXCHAN*DMA_TX_MEMSZ / \
BD_DEF_LEN) * sizeof(pcsca_bd_t)))
#define TX_BD_ADDR(chan, n)	(DMA_TX_BD_BASE + \
((N_DMA_TX_BUF*chan) + n) * sizeof(pcsca_bd_t))
#define RX_BD_ADDR(chan, n)	(DMA_RX_BD_BASE + \
((N_DMA_RX_BUF*chan) + n) * sizeof(pcsca_bd_t))
#define F_REG(reg, chan)	(0x200*(chan) + ((reg)<<2))
#define cpc_writeb(port,val)
#define cpc_writew(port,val)
#define cpc_writel(port,val)
#define cpc_readb(port)		readb(port)
#define cpc_readw(port)		readw(port)
#define cpc_readl(port)		readl(port)
struct RUNTIME_9050 ;
#define PLX_9050_LINT1_ENABLE	0x01
#define PLX_9050_LINT1_POL	0x02
#define PLX_9050_LINT1_STATUS	0x04
#define PLX_9050_LINT2_ENABLE	0x08
#define PLX_9050_LINT2_POL	0x10
#define PLX_9050_LINT2_STATUS	0x20
#define PLX_9050_INTR_ENABLE	0x40
#define PLX_9050_SW_INTR	0x80
#define	PC300_CLKSEL_MASK		(0x00000004UL)
#define	PC300_CHMEDIA_MASK(chan)	(0x00000020UL<<(chan*3))
#define	PC300_CTYPE_MASK		(0x00000800UL)
#define CPLD_REG1	0x140
#define CPLD_REG2	0x144
#define CPLD_V2_REG1	0x100
#define CPLD_V2_REG2	0x104
#define CPLD_ID_REG	0x108
#define CPLD_REG1_FALC_RESET	0x01
#define CPLD_REG1_SCA_RESET	0x02
#define CPLD_REG1_GLOBAL_CLK	0x08
#define CPLD_REG1_FALC_DCD	0x10
#define CPLD_REG1_FALC_CTS	0x20
#define CPLD_REG2_FALC_TX_CLK	0x01
#define CPLD_REG2_FALC_RX_CLK	0x02
#define CPLD_REG2_FALC_LED1	0x10
#define CPLD_REG2_FALC_LED2	0x20
#define PC300_FALC_MAXLOOP	0x0000ffff
typedef struct falc  falc_t;
typedef struct falc_status  falc_status_t;
typedef struct rsv_x21_status  rsv_x21_status_t;
typedef struct pc300stats  pc300stats_t;
typedef struct pc300status  pc300status_t;
typedef struct pc300loopback  pc300loopback_t;
typedef struct pc300patterntst  pc300patterntst_t;
typedef struct pc300dev pc300dev_t;
typedef struct pc300hw  pc300hw_t;
typedef struct pc300chconf  pc300chconf_t;
typedef struct pc300ch  pc300ch_t;
typedef struct pc300  pc300_t;
typedef struct pc300conf  pc300conf_t;
#define	N_SPPP_IOCTLS	2
enum pc300_ioctl_cmds ;
enum pc300_loopback_cmds ;
#define	PC300_RSV	0x01
#define	PC300_X21	0x02
#define	PC300_TE	0x03
#define	PC300_PCI	0x00
#define	PC300_PMC	0x01
#define PC300_LC_AMI	0x01
#define PC300_LC_B8ZS	0x02
#define PC300_LC_NRZ	0x03
#define PC300_LC_HDB3	0x04
#define PC300_FR_ESF		0x01
#define PC300_FR_D4		0x02
#define PC300_FR_ESF_JAPAN	0x03
#define PC300_FR_MF_CRC4	0x04
#define PC300_FR_MF_NON_CRC4	0x05
#define PC300_FR_UNFRAMED	0x06
#define PC300_LBO_0_DB		0x00
#define PC300_LBO_7_5_DB	0x01
#define PC300_LBO_15_DB		0x02
#define PC300_LBO_22_5_DB	0x03
#define PC300_RX_SENS_SH	0x01
#define PC300_RX_SENS_LH	0x02
#define PC300_TX_TIMEOUT	(2*HZ)
#define PC300_TX_QUEUE_LEN	100
#define	PC300_DEF_MTU		1600
int cpc_open(struct net_device *dev);
