#define _ASM_IA64_XEN_GRANT_TABLE_H
struct vm_struct *xen_alloc_vm_area(unsigned long size);
void xen_free_vm_area(struct vm_struct *area);
