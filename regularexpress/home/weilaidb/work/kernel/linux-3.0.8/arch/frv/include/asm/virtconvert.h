#define _ASM_VIRTCONVERT_H
#define phys_to_virt(vaddr)	((void *) ((unsigned long)(vaddr) + PAGE_OFFSET))
#define virt_to_phys(vaddr)	((unsigned long) (vaddr) - PAGE_OFFSET)
#define phys_to_virt(vaddr)	((void *) (vaddr))
#define virt_to_phys(vaddr)	((unsigned long) (vaddr))
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
#define __page_address(page)	(PAGE_OFFSET + (((page) - mem_map) << PAGE_SHIFT))
#define page_to_phys(page)	virt_to_phys((void *)__page_address(page))
