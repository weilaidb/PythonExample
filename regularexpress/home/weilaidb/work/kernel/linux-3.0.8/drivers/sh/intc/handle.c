static unsigned long ack_handle[NR_IRQS];
static intc_enum __init intc_grp_id(struct intc_desc *desc,
intc_enum enum_id)
static unsigned int __init _intc_mask_data(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id,
unsigned int *reg_idx,
unsigned int *fld_idx)
unsigned int __init
intc_get_mask_handle(struct intc_desc *desc, struct intc_desc_int *d,
intc_enum enum_id, int do_grps)
static unsigned int __init _intc_prio_data(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id,
unsigned int *reg_idx,
unsigned int *fld_idx)
unsigned int __init
intc_get_prio_handle(struct intc_desc *desc, struct intc_desc_int *d,
intc_enum enum_id, int do_grps)
static unsigned int __init intc_ack_data(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id)
static void intc_enable_disable(struct intc_desc_int *d,
unsigned long handle, int do_enable)
void __init intc_enable_disable_enum(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id, int enable)
unsigned int __init
intc_get_sense_handle(struct intc_desc *desc, struct intc_desc_int *d,
intc_enum enum_id)
void intc_set_ack_handle(unsigned int irq, struct intc_desc *desc,
struct intc_desc_int *d, intc_enum id)
unsigned long intc_get_ack_handle(unsigned int irq)
