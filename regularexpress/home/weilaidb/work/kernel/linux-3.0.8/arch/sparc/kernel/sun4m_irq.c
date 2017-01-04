struct sun4m_irq_percpu __iomem *sun4m_irq_percpu[SUN4M_NCPUS];
struct sun4m_irq_global __iomem *sun4m_irq_global;
struct sun4m_handler_data ;
#define SUN4M_INT_ENABLE	0x80000000
#define SUN4M_INT_E14		0x00000080
#define SUN4M_INT_E10		0x00080000
#define SUN4M_HARD_INT(x)	(0x000000001 << (x))
#define SUN4M_SOFT_INT(x)	(0x000010000 << (x))
#define	SUN4M_INT_MASKALL	0x80000000
#define	SUN4M_INT_MODULE_ERR	0x40000000
#define	SUN4M_INT_M2S_WRITE_ERR	0x20000000
#define	SUN4M_INT_ECC_ERR	0x10000000
#define	SUN4M_INT_VME_ERR	0x08000000
#define	SUN4M_INT_FLOPPY	0x00400000
#define	SUN4M_INT_MODULE	0x00200000
#define	SUN4M_INT_VIDEO		0x00100000
#define	SUN4M_INT_REALTIME	0x00080000
#define	SUN4M_INT_SCSI		0x00040000
#define	SUN4M_INT_AUDIO		0x00020000
#define	SUN4M_INT_ETHERNET	0x00010000
#define	SUN4M_INT_SERIAL	0x00008000
#define	SUN4M_INT_KBDMS		0x00004000
#define	SUN4M_INT_SBUSBITS	0x00003F80
#define	SUN4M_INT_VMEBITS	0x0000007F
#define	SUN4M_INT_ERROR		(SUN4M_INT_MODULE_ERR |    \
SUN4M_INT_M2S_WRITE_ERR | \
SUN4M_INT_ECC_ERR |       \
SUN4M_INT_VME_ERR)
#define SUN4M_INT_SBUS(x)	(1 << (x+7))
#define SUN4M_INT_VME(x)	(1 << (x))
#define	OBP_INT_LEVEL_SOFT	0x10
#define	OBP_INT_LEVEL_ONBOARD	0x20
#define	OBP_INT_LEVEL_SBUS	0x30
#define	OBP_INT_LEVEL_VME	0x40
#define SUN4M_TIMER_IRQ         (OBP_INT_LEVEL_ONBOARD | 10)
#define SUN4M_PROFILE_IRQ       (OBP_INT_LEVEL_ONBOARD | 14)
static unsigned long sun4m_imask[0x50] = ;
static void sun4m_mask_irq(struct irq_data *data)
static void sun4m_unmask_irq(struct irq_data *data)
static unsigned int sun4m_startup_irq(struct irq_data *data)
static void sun4m_shutdown_irq(struct irq_data *data)
static struct irq_chip sun4m_irq = ;
static unsigned int sun4m_build_device_irq(struct platform_device *op,
unsigned int real_irq)
static void sun4m_send_ipi(int cpu, int level)
static void sun4m_clear_ipi(int cpu, int level)
static void sun4m_set_udt(int cpu)
struct sun4m_timer_percpu ;
static struct sun4m_timer_percpu __iomem *timers_percpu[SUN4M_NCPUS];
struct sun4m_timer_global ;
static struct sun4m_timer_global __iomem *timers_global;
unsigned int lvl14_resolution = (((1000000/HZ) + 1) << 10);
static void sun4m_clear_clock_irq(void)
void sun4m_nmi(struct pt_regs *regs)
void sun4m_unmask_profile_irq(void)
void sun4m_clear_profile_irq(int cpu)
static void sun4m_load_profile_irq(int cpu, unsigned int limit)
static void __init sun4m_init_timers(irq_handler_t counter_fn)
void __init sun4m_init_IRQ(void)
