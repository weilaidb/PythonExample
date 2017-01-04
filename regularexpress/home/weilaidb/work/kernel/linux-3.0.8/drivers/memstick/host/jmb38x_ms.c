#define DRIVER_NAME "jmb38x_ms"
static int no_dma;
module_param(no_dma, bool, 0644);
enum ;
struct jmb38x_ms_host ;
struct jmb38x_ms ;
#define BLOCK_COUNT_MASK       0xffff0000
#define BLOCK_SIZE_MASK        0x00000fff
#define DMA_CONTROL_ENABLE     0x00000001
#define TPC_DATA_SEL           0x00008000
#define TPC_DIR                0x00004000
#define TPC_WAIT_INT           0x00002000
#define TPC_GET_INT            0x00000800
#define TPC_CODE_SZ_MASK       0x00000700
#define TPC_DATA_SZ_MASK       0x00000007
#define HOST_CONTROL_TDELAY_EN 0x00040000
#define HOST_CONTROL_HW_OC_P   0x00010000
#define HOST_CONTROL_RESET_REQ 0x00008000
#define HOST_CONTROL_REI       0x00004000
#define HOST_CONTROL_LED       0x00000400
#define HOST_CONTROL_FAST_CLK  0x00000200
#define HOST_CONTROL_RESET     0x00000100
#define HOST_CONTROL_POWER_EN  0x00000080
#define HOST_CONTROL_CLOCK_EN  0x00000040
#define HOST_CONTROL_REO       0x00000008
#define HOST_CONTROL_IF_SHIFT  4
#define HOST_CONTROL_IF_SERIAL 0x0
#define HOST_CONTROL_IF_PAR4   0x1
#define HOST_CONTROL_IF_PAR8   0x3
#define STATUS_BUSY             0x00080000
#define STATUS_MS_DAT7          0x00040000
#define STATUS_MS_DAT6          0x00020000
#define STATUS_MS_DAT5          0x00010000
#define STATUS_MS_DAT4          0x00008000
#define STATUS_MS_DAT3          0x00004000
#define STATUS_MS_DAT2          0x00002000
#define STATUS_MS_DAT1          0x00001000
#define STATUS_MS_DAT0          0x00000800
#define STATUS_HAS_MEDIA        0x00000400
#define STATUS_FIFO_EMPTY       0x00000200
#define STATUS_FIFO_FULL        0x00000100
#define STATUS_MS_CED           0x00000080
#define STATUS_MS_ERR           0x00000040
#define STATUS_MS_BRQ           0x00000020
#define STATUS_MS_CNK           0x00000001
#define INT_STATUS_TPC_ERR      0x00080000
#define INT_STATUS_CRC_ERR      0x00040000
#define INT_STATUS_TIMER_TO     0x00020000
#define INT_STATUS_HSK_TO       0x00010000
#define INT_STATUS_ANY_ERR      0x00008000
#define INT_STATUS_FIFO_WRDY    0x00000080
#define INT_STATUS_FIFO_RRDY    0x00000040
#define INT_STATUS_MEDIA_OUT    0x00000010
#define INT_STATUS_MEDIA_IN     0x00000008
#define INT_STATUS_DMA_BOUNDARY 0x00000004
#define INT_STATUS_EOTRAN       0x00000002
#define INT_STATUS_EOTPC        0x00000001
#define INT_STATUS_ALL          0x000f801f
#define PAD_OUTPUT_ENABLE_MS  0x0F3F
#define PAD_PU_PD_OFF         0x7FFF0000
#define PAD_PU_PD_ON_MS_SOCK0 0x5f8f0000
#define PAD_PU_PD_ON_MS_SOCK1 0x0f0f0000
#define CLOCK_CONTROL_BY_MMIO 0x00000008
#define CLOCK_CONTROL_40MHZ   0x00000001
#define CLOCK_CONTROL_50MHZ   0x00000002
#define CLOCK_CONTROL_60MHZ   0x00000010
#define CLOCK_CONTROL_62_5MHZ 0x00000004
#define CLOCK_CONTROL_OFF     0x00000000
#define PCI_CTL_CLOCK_DLY_ADDR   0x000000b0
enum ;
static unsigned int jmb38x_ms_read_data(struct jmb38x_ms_host *host,
unsigned char *buf, unsigned int length)
static unsigned int jmb38x_ms_read_reg_data(struct jmb38x_ms_host *host,
unsigned char *buf,
unsigned int length)
static unsigned int jmb38x_ms_write_data(struct jmb38x_ms_host *host,
unsigned char *buf,
unsigned int length)
static unsigned int jmb38x_ms_write_reg_data(struct jmb38x_ms_host *host,
unsigned char *buf,
unsigned int length)
static int jmb38x_ms_transfer_data(struct jmb38x_ms_host *host)
static int jmb38x_ms_issue_cmd(struct memstick_host *msh)
static void jmb38x_ms_complete_cmd(struct memstick_host *msh, int last)
static irqreturn_t jmb38x_ms_isr(int irq, void *dev_id)
static void jmb38x_ms_abort(unsigned long data)
static void jmb38x_ms_req_tasklet(unsigned long data)
static void jmb38x_ms_dummy_submit(struct memstick_host *msh)
static void jmb38x_ms_submit_req(struct memstick_host *msh)
static int jmb38x_ms_reset(struct jmb38x_ms_host *host)
static int jmb38x_ms_set_param(struct memstick_host *msh,
enum memstick_param param,
int value)
#define PCI_PMOS0_CONTROL		0xae
#define  PMOS0_ENABLE			0x01
#define  PMOS0_OVERCURRENT_LEVEL_2_4V	0x06
#define  PMOS0_EN_OVERCURRENT_DEBOUNCE	0x40
#define  PMOS0_SW_LED_POLARITY_ENABLE	0x80
#define  PMOS0_ACTIVE_BITS (PMOS0_ENABLE | PMOS0_EN_OVERCURRENT_DEBOUNCE | \
PMOS0_OVERCURRENT_LEVEL_2_4V)
#define PCI_PMOS1_CONTROL		0xbd
#define  PMOS1_ACTIVE_BITS		0x4a
#define PCI_CLOCK_CTL			0xb9
static int jmb38x_ms_pmos(struct pci_dev *pdev, int flag)
static int jmb38x_ms_suspend(struct pci_dev *dev, pm_message_t state)
static int jmb38x_ms_resume(struct pci_dev *dev)
#define jmb38x_ms_suspend NULL
#define jmb38x_ms_resume NULL
static int jmb38x_ms_count_slots(struct pci_dev *pdev)
static struct memstick_host *jmb38x_ms_alloc_host(struct jmb38x_ms *jm, int cnt)
static void jmb38x_ms_free_host(struct memstick_host *msh)
static int jmb38x_ms_probe(struct pci_dev *pdev,
const struct pci_device_id *dev_id)
static void jmb38x_ms_remove(struct pci_dev *dev)
static struct pci_device_id jmb38x_ms_id_tbl [] = ;
static struct pci_driver jmb38x_ms_driver = ;
static int __init jmb38x_ms_init(void)
static void __exit jmb38x_ms_exit(void)
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("JMicron jmb38x MemoryStick driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, jmb38x_ms_id_tbl);
module_init(jmb38x_ms_init);
module_exit(jmb38x_ms_exit);
