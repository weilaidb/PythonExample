#define _ASM_MMZONE_H_
#define pfn_to_nid(pfn)		pa_to_nid((pfn) << PAGE_SHIFT)
