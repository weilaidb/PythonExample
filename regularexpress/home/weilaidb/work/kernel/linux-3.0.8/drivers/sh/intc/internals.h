#define _INTC_MK(fn, mode, addr_e, addr_d, width, shift) \
((shift) | ((width) << 5) | ((fn) << 9) | ((mode) << 13) | \
((addr_e) << 16) | ((addr_d << 24)))
#define _INTC_SHIFT(h)		(h & 0x1f)
#define _INTC_WIDTH(h)		((h >> 5) & 0xf)
#define _INTC_FN(h)		((h >> 9) & 0xf)
#define _INTC_MODE(h)		((h >> 13) & 0x7)
#define _INTC_ADDR_E(h)		((h >> 16) & 0xff)
#define _INTC_ADDR_D(h)		((h >> 24) & 0xff)
#define IS_SMP(x)		(x.smp)
#define INTC_REG(d, x, c)	(d->reg[(x)] + ((d->smp[(x)] & 0xff) * c))
#define SMP_NR(d, x)		((d->smp[(x)] >> 8) ? (d->smp[(x)] >> 8) : 1)
#define IS_SMP(x)		0
#define INTC_REG(d, x, c)	(d->reg[(x)])
#define SMP_NR(d, x)		1
struct intc_handle_int ;
struct intc_window ;
struct intc_map_entry ;
struct intc_subgroup_entry ;
struct intc_desc_int ;
enum ;
enum ;
static inline struct intc_desc_int *get_intc_desc(unsigned int irq)
static inline void activate_irq(int irq)
extern unsigned long
(*intc_reg_fns[])(unsigned long addr, unsigned long h, unsigned long data);
extern unsigned long
(*intc_enable_fns[])(unsigned long addr, unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long, unsigned long),
unsigned int irq);
extern unsigned long
(*intc_disable_fns[])(unsigned long addr, unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long, unsigned long),
unsigned int irq);
extern unsigned long
(*intc_enable_noprio_fns[])(unsigned long addr, unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long, unsigned long),
unsigned int irq);
unsigned long intc_phys_to_virt(struct intc_desc_int *d, unsigned long address);
unsigned int intc_get_reg(struct intc_desc_int *d, unsigned long address);
unsigned int intc_set_field_from_handle(unsigned int value,
unsigned int field_value,
unsigned int handle);
unsigned long intc_get_field_from_handle(unsigned int value,
unsigned int handle);
void intc_balancing_enable(unsigned int irq);
void intc_balancing_disable(unsigned int irq);
void intc_set_dist_handle(unsigned int irq, struct intc_desc *desc,
struct intc_desc_int *d, intc_enum id);
static inline void intc_balancing_enable(unsigned int irq)
static inline void intc_balancing_disable(unsigned int irq)
static inline void
intc_set_dist_handle(unsigned int irq, struct intc_desc *desc,
struct intc_desc_int *d, intc_enum id)
extern struct irq_chip intc_irq_chip;
void _intc_enable(struct irq_data *data, unsigned long handle);
extern struct list_head intc_list;
extern raw_spinlock_t intc_big_lock;
extern unsigned int nr_intc_controllers;
extern struct sysdev_class intc_sysdev_class;
unsigned int intc_get_dfl_prio_level(void);
unsigned int intc_get_prio_level(unsigned int irq);
void intc_set_prio_level(unsigned int irq, unsigned int level);
unsigned int intc_get_mask_handle(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id, int do_grps);
unsigned int intc_get_prio_handle(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id, int do_grps);
unsigned int intc_get_sense_handle(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id);
void intc_set_ack_handle(unsigned int irq, struct intc_desc *desc,
struct intc_desc_int *d, intc_enum id);
unsigned long intc_get_ack_handle(unsigned int irq);
void intc_enable_disable_enum(struct intc_desc *desc, struct intc_desc_int *d,
intc_enum enum_id, int enable);
void intc_subgroup_init(struct intc_desc *desc, struct intc_desc_int *d);
void intc_irq_xlate_set(unsigned int irq, intc_enum id, struct intc_desc_int *d);
struct intc_map_entry *intc_irq_xlate_get(unsigned int irq);
