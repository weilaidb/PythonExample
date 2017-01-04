struct vm_struct *xen_alloc_vm_area(unsigned long size)
EXPORT_SYMBOL_GPL(xen_alloc_vm_area);
void xen_free_vm_area(struct vm_struct *area)
EXPORT_SYMBOL_GPL(xen_free_vm_area);
int arch_gnttab_map_shared(unsigned long *frames, unsigned long nr_gframes,
unsigned long max_nr_gframes,
struct grant_entry **__shared)
void arch_gnttab_unmap_shared(struct grant_entry *shared,
unsigned long nr_gframes)
static void
gnttab_map_grant_ref_pre(struct gnttab_map_grant_ref *uop)
int
HYPERVISOR_grant_table_op(unsigned int cmd, void *uop, unsigned int count)
EXPORT_SYMBOL(HYPERVISOR_grant_table_op);
