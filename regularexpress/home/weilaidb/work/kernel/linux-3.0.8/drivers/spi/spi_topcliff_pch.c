#define PCH_SPCR		0x00
#define PCH_SPBRR		0x04
#define PCH_SPSR		0x08
#define PCH_SPDWR		0x0C
#define PCH_SPDRR		0x10
#define PCH_SSNXCR		0x18
#define PCH_SRST		0x1C
#define PCH_SPSR_TFD		0x000007C0
#define PCH_SPSR_RFD		0x0000F800
#define PCH_READABLE(x)		(((x) & PCH_SPSR_RFD)>>11)
#define PCH_WRITABLE(x)		(((x) & PCH_SPSR_TFD)>>6)
#define PCH_RX_THOLD		7
#define PCH_RX_THOLD_MAX	15
#define PCH_MAX_BAUDRATE	5000000
#define PCH_MAX_FIFO_DEPTH	16
#define STATUS_RUNNING		1
#define STATUS_EXITING		2
#define PCH_SLEEP_TIME		10
#define PCH_ADDRESS_SIZE	0x20
#define SSN_LOW			0x02U
#define SSN_NO_CONTROL		0x00U
#define PCH_MAX_CS		0xFF
#define PCI_DEVICE_ID_GE_SPI	0x8816
#define SPCR_SPE_BIT		(1 << 0)
#define SPCR_MSTR_BIT		(1 << 1)
#define SPCR_LSBF_BIT		(1 << 4)
#define SPCR_CPHA_BIT		(1 << 5)
#define SPCR_CPOL_BIT		(1 << 6)
#define SPCR_TFIE_BIT		(1 << 8)
#define SPCR_RFIE_BIT		(1 << 9)
#define SPCR_FIE_BIT		(1 << 10)
#define SPCR_ORIE_BIT		(1 << 11)
#define SPCR_MDFIE_BIT		(1 << 12)
#define SPCR_FICLR_BIT		(1 << 24)
#define SPSR_TFI_BIT		(1 << 0)
#define SPSR_RFI_BIT		(1 << 1)
#define SPSR_FI_BIT		(1 << 2)
#define SPBRR_SIZE_BIT		(1 << 10)
#define PCH_ALL			(SPCR_TFIE_BIT|SPCR_RFIE_BIT|SPCR_FIE_BIT|SPCR_ORIE_BIT|SPCR_MDFIE_BIT)
#define SPCR_RFIC_FIELD		20
#define SPCR_TFIC_FIELD		16
#define SPSR_INT_BITS		0x1F
#define MASK_SPBRR_SPBR_BITS	(~((1 << 10) - 1))
#define MASK_RFIC_SPCR_BITS	(~(0xf << 20))
#define MASK_TFIC_SPCR_BITS	(~(0xf000f << 12))
#define PCH_CLOCK_HZ		50000000
#define PCH_MAX_SPBR		1023
struct pch_spi_data ;
struct pch_spi_board_data ;
static struct pci_device_id pch_spi_pcidev_id[] = ;
static inline void pch_spi_writereg(struct spi_master *master, int idx, u32 val)
static inline u32 pch_spi_readreg(struct spi_master *master, int idx)
static inline void pch_spi_setclr_reg(struct spi_master *master, int idx,
u32 set, u32 clr)
static void pch_spi_set_master_mode(struct spi_master *master)
static void pch_spi_clear_fifo(struct spi_master *master)
static void pch_spi_handler_sub(struct pch_spi_data *data, u32 reg_spsr_val,
void __iomem *io_remap_addr)
static irqreturn_t pch_spi_handler(int irq, void *dev_id)
static void pch_spi_set_baud_rate(struct spi_master *master, u32 speed_hz)
static void pch_spi_set_bits_per_word(struct spi_master *master,
u8 bits_per_word)
static void pch_spi_setup_transfer(struct spi_device *spi)
static void pch_spi_reset(struct spi_master *master)
static int pch_spi_setup(struct spi_device *pspi)
static int pch_spi_transfer(struct spi_device *pspi, struct spi_message *pmsg)
static inline void pch_spi_select_chip(struct pch_spi_data *data,
struct spi_device *pspi)
static void pch_spi_set_tx(struct pch_spi_data *data, int *bpw,
struct spi_message **ppmsg)
static void pch_spi_nomore_transfer(struct pch_spi_data *data,
struct spi_message *pmsg)
static void pch_spi_set_ir(struct pch_spi_data *data)
static void pch_spi_copy_rx_data(struct pch_spi_data *data, int bpw)
static void pch_spi_process_messages(struct work_struct *pwork)
static void pch_spi_free_resources(struct pch_spi_board_data *board_dat)
static int pch_spi_get_resources(struct pch_spi_board_data *board_dat)
static int pch_spi_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void pch_spi_remove(struct pci_dev *pdev)
static int pch_spi_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_spi_resume(struct pci_dev *pdev)
#define pch_spi_suspend NULL
#define pch_spi_resume NULL
static struct pci_driver pch_spi_pcidev = ;
static int __init pch_spi_init(void)
module_init(pch_spi_init);
static void __exit pch_spi_exit(void)
module_exit(pch_spi_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Topcliff PCH SPI PCI Driver");
