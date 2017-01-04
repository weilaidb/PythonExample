#define REG_PIH_ISR_P1			0x01
#define REG_PIH_ISR_P2			0x02
#define REG_PIH_SIR			0x03
static int irq_line;
struct sih ;
static const struct sih *sih_modules;
static int nr_sih_modules;
#define SIH_INITIALIZER(modname, nbits) \
.module		= TWL4030_MODULE_ ## modname, \
.control_offset = TWL4030_ ## modname ## _SIH_CTRL, \
.bits		= nbits, \
.bytes_ixr	= DIV_ROUND_UP(nbits, 8), \
.edr_offset	= TWL4030_ ## modname ## _EDR, \
.bytes_edr	= DIV_ROUND_UP((2*(nbits)), 8), \
.irq_lines	= 2, \
.mask = ,
#define TWL4030_INT_PWR_EDR		TWL4030_INT_PWR_EDR1
#define TWL4030_MODULE_KEYPAD_KEYP	TWL4030_MODULE_KEYPAD
#define TWL4030_MODULE_INT_PWR		TWL4030_MODULE_INT
static const struct sih sih_modules_twl4030[6] = ;
static const struct sih sih_modules_twl5031[8] = ;
#undef TWL4030_MODULE_KEYPAD_KEYP
#undef TWL4030_MODULE_INT_PWR
#undef TWL4030_INT_PWR_EDR
static unsigned twl4030_irq_base;
static struct completion irq_event;
static int twl4030_irq_thread(void *data)
static irqreturn_t handle_twl4030_pih(int irq, void *devid)
static int twl4030_init_sih_modules(unsigned line)
static inline void activate_irq(int irq)
static DEFINE_SPINLOCK(sih_agent_lock);
static struct workqueue_struct *wq;
struct sih_agent ;
static void twl4030_sih_do_mask(struct work_struct *work)
static void twl4030_sih_do_edge(struct work_struct *work)
static void twl4030_sih_mask(struct irq_data *data)
static void twl4030_sih_unmask(struct irq_data *data)
static int twl4030_sih_set_type(struct irq_data *data, unsigned trigger)
static struct irq_chip twl4030_sih_irq_chip = ;
static inline int sih_read_isr(const struct sih *sih)
static void handle_twl4030_sih(unsigned irq, struct irq_desc *desc)
static unsigned twl4030_irq_next;
int twl4030_sih_setup(int module)
#define twl_irq_line	0
int twl4030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end)
int twl4030_exit_irq(void)
int twl4030_init_chip_irq(const char *chip)
