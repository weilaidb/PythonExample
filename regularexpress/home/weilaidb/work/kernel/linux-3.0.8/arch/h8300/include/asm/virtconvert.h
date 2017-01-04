#define __H8300_VIRT_CONVERT__
#define phys_to_virt(vaddr)	((void *) (vaddr))
#define virt_to_phys(vaddr)	((unsigned long) (vaddr))
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
