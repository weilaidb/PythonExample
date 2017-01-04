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
static void *ug_io_base;
static u32 ug_io_transaction(u32 in)
static int ug_is_txfifo_ready(void)
static void ug_raw_putc(char ch)
static void ug_putc(char ch)
void ug_console_write(const char *buf, int len)
static int ug_is_adapter_present(void)
static void *ug_grab_exi_io_base(void)
void *ug_probe(void)
