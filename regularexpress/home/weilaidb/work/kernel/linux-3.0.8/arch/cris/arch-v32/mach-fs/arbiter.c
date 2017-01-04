struct crisv32_watch_entry ;
#define NUMBER_OF_BP 4
#define NBR_OF_CLIENTS 14
#define NBR_OF_SLOTS 64
#define SDRAM_BANDWIDTH 100000000
#define INTMEM_BANDWIDTH 400000000
#define NBR_OF_REGIONS 2
static struct crisv32_watch_entry watches[NUMBER_OF_BP] = ;
static u8 requested_slots[NBR_OF_REGIONS][NBR_OF_CLIENTS];
static u8 active_clients[NBR_OF_REGIONS][NBR_OF_CLIENTS];
static int max_bandwidth[NBR_OF_REGIONS] =
;
DEFINE_SPINLOCK(arbiter_lock);
static irqreturn_t crisv32_arbiter_irq(int irq, void *dev_id);
static void crisv32_arbiter_config(int region, int unused_slots)
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
static irqreturn_t crisv32_arbiter_irq(int irq, void *dev_id)
