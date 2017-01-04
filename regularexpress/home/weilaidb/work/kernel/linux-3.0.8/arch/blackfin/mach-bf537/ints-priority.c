void __init program_IAR(void)
#define SPI_ERR_MASK   (BIT_STAT_TXCOL | BIT_STAT_RBSY | BIT_STAT_MODF | BIT_STAT_TXE)
#define SPORT_ERR_MASK (ROVF | RUVF | TOVF | TUVF)
#define PPI_ERR_MASK   (0xFFFF & ~FLD)
#define EMAC_ERR_MASK  (PHYINT | MMCINT | RXFSINT | TXFSINT | WAKEDET | RXDMAERR | TXDMAERR | STMDONE)
#define UART_ERR_MASK  (0x6)
#define CAN_ERR_MASK   (EWTIF | EWRIF | EPIF | BOIF | WUIF | UIAIF | AAIF | RMLIF | UCEIF | EXTIF | ADIF)
static int error_int_mask;
static void bf537_generic_error_mask_irq(struct irq_data *d)
static void bf537_generic_error_unmask_irq(struct irq_data *d)
static struct irq_chip bf537_generic_error_irqchip = ;
static void bf537_demux_error_irq(unsigned int int_err_irq,
struct irq_desc *inta_desc)
#if defined(CONFIG_BFIN_MAC) || defined(CONFIG_BFIN_MAC_MODULE)
static int mac_rx_int_mask;
static void bf537_mac_rx_mask_irq(struct irq_data *d)
static void bf537_mac_rx_unmask_irq(struct irq_data *d)
static struct irq_chip bf537_mac_rx_irqchip = ;
static void bf537_demux_mac_rx_irq(unsigned int int_irq,
struct irq_desc *desc)
void __init init_mach_irq(void)
