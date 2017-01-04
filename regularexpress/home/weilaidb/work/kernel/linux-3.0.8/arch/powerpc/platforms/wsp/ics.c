struct wsp_ics ;
#define to_wsp_ics(ics)	container_of(ics, struct wsp_ics, ics)
#define INT_SRC_LAYER_BUID_REG(base)	((base) + 0x00)
#define IODA_TBL_ADDR_REG(base)		((base) + 0x18)
#define IODA_TBL_DATA_REG(base)		((base) + 0x20)
#define XIVE_UPDATE_REG(base)		((base) + 0x28)
#define ICS_INT_CAPS_REG(base)		((base) + 0x30)
#define TBL_AUTO_INCREMENT	((1UL << 63) | (1UL << 15))
#define TBL_SELECT_XIST		(1UL << 48)
#define TBL_SELECT_XIVT		(1UL << 49)
#define IODA_IRQ(irq)		((irq) & (0x7FFULL))
#define XIST_REQUIRED		0x8
#define XIST_REJECTED		0x4
#define XIST_PRESENTED		0x2
#define XIST_PENDING		0x1
#define XIVE_SERVER_SHIFT	42
#define XIVE_SERVER_MASK	0xFFFFULL
#define XIVE_PRIORITY_MASK	0xFFULL
#define XIVE_PRIORITY_SHIFT	32
#define XIVE_WRITE_ENABLE	(1ULL << 63)
#define WSP_ICS_CHIP_SHIFT		17
static struct wsp_ics *ics_list;
static int num_ics;
static u64 wsp_ics_get_xive(struct wsp_ics *ics, unsigned int irq)
static void wsp_ics_set_xive(struct wsp_ics *ics, unsigned int irq, u64 xive)
static u64 xive_set_server(u64 xive, unsigned int server)
static u64 xive_set_priority(u64 xive, unsigned int priority)
void cpus_on_chip(int chip_id, cpumask_t *mask, cpumask_t *ret)
static int cache_hwirq_map(struct wsp_ics *ics, unsigned int hwirq,
const cpumask_t *affinity)
static void alloc_irq_map(struct wsp_ics *ics)
static int get_irq_server(struct wsp_ics *ics, unsigned int hwirq)
static int cache_hwirq_map(struct wsp_ics *ics, unsigned int hwirq,
const cpumask_t *affinity)
static int get_irq_server(struct wsp_ics *ics, unsigned int hwirq)
static void alloc_irq_map(struct wsp_ics *ics)
static void wsp_chip_unmask_irq(struct irq_data *d)
static unsigned int wsp_chip_startup(struct irq_data *d)
static void wsp_mask_real_irq(unsigned int hw_irq, struct wsp_ics *ics)
static void wsp_chip_mask_irq(struct irq_data *d)
static int wsp_chip_set_affinity(struct irq_data *d,
const struct cpumask *cpumask, bool force)
static struct irq_chip wsp_irq_chip = ;
static int wsp_ics_host_match(struct ics *ics, struct device_node *dn)
static int wsp_ics_match_hwirq(struct wsp_ics *wsp_ics, unsigned int hwirq)
static int wsp_ics_map(struct ics *ics, unsigned int virq)
static void wsp_ics_mask_unknown(struct ics *ics, unsigned long hw_irq)
static long wsp_ics_get_server(struct ics *ics, unsigned long hw_irq)
static struct wsp_ics *wsp_ics_find_dn_ics(struct device_node *dn)
int wsp_ics_alloc_irq(struct device_node *dn, int num)
void wsp_ics_free_irq(struct device_node *dn, unsigned int irq)
static int __init wsp_ics_bitmap_setup(struct wsp_ics *ics,
struct device_node *dn)
static int __init wsp_ics_setup(struct wsp_ics *ics, struct device_node *dn)
static void __init wsp_ics_set_default_server(void)
static int __init wsp_ics_init(void)
void __init wsp_init_irq(void)
