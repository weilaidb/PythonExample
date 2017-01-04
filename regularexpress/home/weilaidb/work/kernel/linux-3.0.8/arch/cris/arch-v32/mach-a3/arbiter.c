#define D(x)
struct crisv32_watch_entry ;
#define NUMBER_OF_BP 4
#define SDRAM_BANDWIDTH 400000000
#define INTMEM_BANDWIDTH 400000000
#define NBR_OF_SLOTS 64
#define NBR_OF_REGIONS 2
#define NBR_OF_CLIENTS 15
#define ARBITERS 2
#define UNASSIGNED 100
struct arbiter ;
static struct crisv32_watch_entry watches[ARBITERS][NUMBER_OF_BP] =
;
struct arbiter arbiters[ARBITERS] =
;
static int max_bandwidth[NBR_OF_REGIONS] = ;
DEFINE_SPINLOCK(arbiter_lock);
static irqreturn_t
crisv32_foo_arbiter_irq(int irq, void *dev_id);
static irqreturn_t
crisv32_bar_arbiter_irq(int irq, void *dev_id);
static void crisv32_arbiter_config(int arbiter, int region, int unused_slots)
extern char _stext, _etext;
static void crisv32_arbiter_init(void)
int crisv32_arbiter_allocate_bandwidth(int client, int region,
unsigned long bandwidth)
void crisv32_arbiter_deallocate_bandwidth(int client, int region)
int crisv32_arbiter_watch(unsigned long start, unsigned long size,
unsigned long clients, unsigned long accesses,
watch_callback *cb)
int crisv32_arbiter_unwatch(int id)
extern void show_registers(struct pt_regs *regs);
static irqreturn_t
crisv32_foo_arbiter_irq(int irq, void *dev_id)
static irqreturn_t
crisv32_bar_arbiter_irq(int irq, void *dev_id)
