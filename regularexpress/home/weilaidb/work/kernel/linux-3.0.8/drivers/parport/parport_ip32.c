#if !defined(DEBUG_PARPORT_IP32)
#	define DEBUG_PARPORT_IP32  0
#if DEBUG_PARPORT_IP32 == 1
#	warning DEBUG_PARPORT_IP32 == 1
#elif DEBUG_PARPORT_IP32 == 2
#	warning DEBUG_PARPORT_IP32 == 2
#elif DEBUG_PARPORT_IP32 >= 3
#	warning DEBUG_PARPORT_IP32 >= 3
#	if !defined(DEBUG)
#		define DEBUG
#	endif
#if DEBUG_PARPORT_IP32 >= 1
#	define DEFAULT_VERBOSE_PROBING	1
#	define DEFAULT_VERBOSE_PROBING	0
#define PPIP32 "parport_ip32: "
#define PARPORT_IP32_ENABLE_IRQ	(1U << 0)
#define PARPORT_IP32_ENABLE_DMA	(1U << 1)
#define PARPORT_IP32_ENABLE_SPP	(1U << 2)
#define PARPORT_IP32_ENABLE_EPP	(1U << 3)
#define PARPORT_IP32_ENABLE_ECP	(1U << 4)
static unsigned int features =	~0U;
static int verbose_probing =	DEFAULT_VERBOSE_PROBING;
static struct parport *this_port = NULL;
#define FIFO_NFAULT_TIMEOUT	100
#define FIFO_POLLING_INTERVAL	50
struct parport_ip32_regs ;
#define DSR_nBUSY		(1U << 7)
#define DSR_nACK		(1U << 6)
#define DSR_PERROR		(1U << 5)
#define DSR_SELECT		(1U << 4)
#define DSR_nFAULT		(1U << 3)
#define DSR_nPRINT		(1U << 2)
#define DSR_TIMEOUT		(1U << 0)
#define DCR_DIR			(1U << 5)
#define DCR_IRQ			(1U << 4)
#define DCR_SELECT		(1U << 3)
#define DCR_nINIT		(1U << 2)
#define DCR_AUTOFD		(1U << 1)
#define DCR_STROBE		(1U << 0)
#define CNFGA_IRQ		(1U << 7)
#define CNFGA_ID_MASK		((1U << 6) | (1U << 5) | (1U << 4))
#define CNFGA_ID_SHIFT		4
#define CNFGA_ID_16		(00U << CNFGA_ID_SHIFT)
#define CNFGA_ID_8		(01U << CNFGA_ID_SHIFT)
#define CNFGA_ID_32		(02U << CNFGA_ID_SHIFT)
#define CNFGA_nBYTEINTRANS	(1U << 2)
#define CNFGA_PWORDLEFT		((1U << 1) | (1U << 0))
#define CNFGB_COMPRESS		(1U << 7)
#define CNFGB_INTRVAL		(1U << 6)
#define CNFGB_IRQ_MASK		((1U << 5) | (1U << 4) | (1U << 3))
#define CNFGB_IRQ_SHIFT		3
#define CNFGB_DMA_MASK		((1U << 2) | (1U << 1) | (1U << 0))
#define CNFGB_DMA_SHIFT		0
#define ECR_MODE_MASK		((1U << 7) | (1U << 6) | (1U << 5))
#define ECR_MODE_SHIFT		5
#define ECR_MODE_SPP		(00U << ECR_MODE_SHIFT)
#define ECR_MODE_PS2		(01U << ECR_MODE_SHIFT)
#define ECR_MODE_PPF		(02U << ECR_MODE_SHIFT)
#define ECR_MODE_ECP		(03U << ECR_MODE_SHIFT)
#define ECR_MODE_EPP		(04U << ECR_MODE_SHIFT)
#define ECR_MODE_TST		(06U << ECR_MODE_SHIFT)
#define ECR_MODE_CFG		(07U << ECR_MODE_SHIFT)
#define ECR_nERRINTR		(1U << 4)
#define ECR_DMAEN		(1U << 3)
#define ECR_SERVINTR		(1U << 2)
#define ECR_F_FULL		(1U << 1)
#define ECR_F_EMPTY		(1U << 0)
enum parport_ip32_irq_mode ;
struct parport_ip32_private ;
#if DEBUG_PARPORT_IP32 >= 1
#	define pr_debug1(...)	printk(KERN_DEBUG __VA_ARGS__)
#	define pr_debug1(...)	do  while (0)
#define __pr_trace(pr, p, fmt, ...)					\
pr("%s: %s" fmt "\n",						\
(),		\
__func__ , ##__VA_ARGS__)
#define pr_trace(p, fmt, ...)	__pr_trace(pr_debug, p, fmt , ##__VA_ARGS__)
#define pr_trace1(p, fmt, ...)	__pr_trace(pr_debug1, p, fmt , ##__VA_ARGS__)
#define __pr_probe(...)							\
do  while (0)
#define pr_probe(p, fmt, ...)						\
__pr_probe(KERN_INFO PPIP32 "0x%lx: " fmt, (p)->base , ##__VA_ARGS__)
#if DEBUG_PARPORT_IP32 >= 2
static void parport_ip32_dump_state(struct parport *p, char *str,
unsigned int show_ecp_config)
#define parport_ip32_dump_state(...)	do  while (0)
#if DEBUG_PARPORT_IP32 >= 1
#define CHECK_EXTRA_BITS(p, b, m)					\
do  while (0)
#define CHECK_EXTRA_BITS(...)	do  while (0)
struct parport_ip32_dma_data ;
static struct parport_ip32_dma_data parport_ip32_dma;
static void parport_ip32_dma_setup_context(unsigned int limit)
static irqreturn_t parport_ip32_dma_interrupt(int irq, void *dev_id)
#if DEBUG_PARPORT_IP32
static irqreturn_t parport_ip32_merr_interrupt(int irq, void *dev_id)
static int parport_ip32_dma_start(enum dma_data_direction dir,
void *addr, size_t count)
static void parport_ip32_dma_stop(void)
static inline size_t parport_ip32_dma_get_residue(void)
static int parport_ip32_dma_register(void)
static void parport_ip32_dma_unregister(void)
static inline void parport_ip32_wakeup(struct parport *p)
static irqreturn_t parport_ip32_interrupt(int irq, void *dev_id)
static inline unsigned int parport_ip32_read_econtrol(struct parport *p)
static inline void parport_ip32_write_econtrol(struct parport *p,
unsigned int c)
static inline void parport_ip32_frob_econtrol(struct parport *p,
unsigned int mask,
unsigned int val)
static void parport_ip32_set_mode(struct parport *p, unsigned int mode)
static inline unsigned char parport_ip32_read_data(struct parport *p)
static inline void parport_ip32_write_data(struct parport *p, unsigned char d)
static inline unsigned char parport_ip32_read_status(struct parport *p)
static inline unsigned int __parport_ip32_read_control(struct parport *p)
static inline void __parport_ip32_write_control(struct parport *p,
unsigned int c)
static inline void __parport_ip32_frob_control(struct parport *p,
unsigned int mask,
unsigned int val)
static inline unsigned char parport_ip32_read_control(struct parport *p)
static inline void parport_ip32_write_control(struct parport *p,
unsigned char c)
static inline unsigned char parport_ip32_frob_control(struct parport *p,
unsigned char mask,
unsigned char val)
static inline void parport_ip32_disable_irq(struct parport *p)
static inline void parport_ip32_enable_irq(struct parport *p)
static inline void parport_ip32_data_forward(struct parport *p)
static inline void parport_ip32_data_reverse(struct parport *p)
static void parport_ip32_init_state(struct pardevice *dev,
struct parport_state *s)
static void parport_ip32_save_state(struct parport *p,
struct parport_state *s)
static void parport_ip32_restore_state(struct parport *p,
struct parport_state *s)
static unsigned int parport_ip32_clear_epp_timeout(struct parport *p)
static size_t parport_ip32_epp_read(void __iomem *eppreg,
struct parport *p, void *buf,
size_t len, int flags)
static size_t parport_ip32_epp_write(void __iomem *eppreg,
struct parport *p, const void *buf,
size_t len, int flags)
static size_t parport_ip32_epp_read_data(struct parport *p, void *buf,
size_t len, int flags)
static size_t parport_ip32_epp_write_data(struct parport *p, const void *buf,
size_t len, int flags)
static size_t parport_ip32_epp_read_addr(struct parport *p, void *buf,
size_t len, int flags)
static size_t parport_ip32_epp_write_addr(struct parport *p, const void *buf,
size_t len, int flags)
static unsigned int parport_ip32_fifo_wait_break(struct parport *p,
unsigned long expire)
static unsigned int parport_ip32_fwp_wait_polling(struct parport *p)
static unsigned int parport_ip32_fwp_wait_interrupt(struct parport *p)
static size_t parport_ip32_fifo_write_block_pio(struct parport *p,
const void *buf, size_t len)
static size_t parport_ip32_fifo_write_block_dma(struct parport *p,
const void *buf, size_t len)
static size_t parport_ip32_fifo_write_block(struct parport *p,
const void *buf, size_t len)
static unsigned int parport_ip32_drain_fifo(struct parport *p,
unsigned long timeout)
static unsigned int parport_ip32_get_fifo_residue(struct parport *p,
unsigned int mode)
static size_t parport_ip32_compat_write_data(struct parport *p,
const void *buf, size_t len,
int flags)
static size_t parport_ip32_ecp_write_data(struct parport *p,
const void *buf, size_t len,
int flags)
static __initdata struct parport_operations parport_ip32_ops = ;
static __init unsigned int parport_ip32_ecp_supported(struct parport *p)
static __init unsigned int parport_ip32_fifo_supported(struct parport *p)
static void __init
parport_ip32_make_isa_registers(struct parport_ip32_regs *regs,
void __iomem *base, void __iomem *base_hi,
unsigned int regshift)
static __init struct parport *parport_ip32_probe_port(void)
static __exit void parport_ip32_unregister_port(struct parport *p)
static int __init parport_ip32_init(void)
static void __exit parport_ip32_exit(void)
MODULE_AUTHOR("Arnaud Giersch <arnaud.giersch@free.fr>");
MODULE_DESCRIPTION("SGI IP32 built-in parallel port driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.6");
module_init(parport_ip32_init);
module_exit(parport_ip32_exit);
module_param(verbose_probing, bool, S_IRUGO);
MODULE_PARM_DESC(verbose_probing, "Log chit-chat during initialization");
module_param(features, uint, S_IRUGO);
MODULE_PARM_DESC(features,
"Bit mask of features to enable"
", bit 0: IRQ support"
", bit 1: DMA support"
", bit 2: hardware SPP mode"
", bit 3: hardware EPP mode"
", bit 4: hardware ECP mode");
