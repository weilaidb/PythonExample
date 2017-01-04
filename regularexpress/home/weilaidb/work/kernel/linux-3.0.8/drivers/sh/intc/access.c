unsigned long intc_phys_to_virt(struct intc_desc_int *d, unsigned long address)
unsigned int intc_get_reg(struct intc_desc_int *d, unsigned long address)
unsigned int intc_set_field_from_handle(unsigned int value,
unsigned int field_value,
unsigned int handle)
unsigned long intc_get_field_from_handle(unsigned int value, unsigned int handle)
static unsigned long test_8(unsigned long addr, unsigned long h,
unsigned long ignore)
static unsigned long test_16(unsigned long addr, unsigned long h,
unsigned long ignore)
static unsigned long test_32(unsigned long addr, unsigned long h,
unsigned long ignore)
static unsigned long write_8(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long write_16(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long write_32(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long modify_8(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long modify_16(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long modify_32(unsigned long addr, unsigned long h,
unsigned long data)
static unsigned long intc_mode_field(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq)
static unsigned long intc_mode_zero(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq)
static unsigned long intc_mode_prio(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq)
unsigned long (*intc_reg_fns[])(unsigned long addr,
unsigned long h,
unsigned long data) = ;
unsigned long (*intc_enable_fns[])(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq) = ;
unsigned long (*intc_disable_fns[])(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq) = ;
unsigned long (*intc_enable_noprio_fns[])(unsigned long addr,
unsigned long handle,
unsigned long (*fn)(unsigned long,
unsigned long,
unsigned long),
unsigned int irq) = ;
