#define EXI_CLK_32MHZ           5
#define EXI_CSR                 0x00
#define   EXI_CSR_CLKMASK       (0x7<<4)
#define     EXI_CSR_CLK_32MHZ   (EXI_CLK_32MHZ<<4)
#define   EXI_CSR_CSMASK        (0x7<<7)
#define     EXI_CSR_CS_0        (0x1<<7)
#define EXI_CR                  0x0c
#define   EXI_CR_TSTART         (1<<0)
#define   EXI_CR_WRITE		(1<<2)
#define   EXI_CR_READ_WRITE     (2<<2)
#define   EXI_CR_TLEN(len)      (((len)-1)<<4)
#define EXI_DATA                0x10
#define UG_READ_ATTEMPTS	100
#define UG_WRITE_ATTEMPTS	100
static void __iomem *ug_io_base;
static u32 ug_io_transaction(u32 in)
static int ug_is_adapter_present(void)
static int ug_is_txfifo_ready(void)
static void ug_raw_putc(char ch)
static void ug_putc(char ch)
static int ug_is_rxfifo_ready(void)
static int ug_raw_getc(void)
static int ug_getc(void)
void ug_udbg_putc(char ch)
static int ug_udbg_getc(void)
static int ug_udbg_getc_poll(void)
static void __iomem *ug_udbg_setup_exi_io_base(struct device_node *np)
static void __iomem *ug_udbg_probe(void __iomem *exi_io_base)
void __init ug_udbg_init(void)
static phys_addr_t __init ug_early_grab_io_addr(void)
void __init udbg_init_usbgecko(void)
