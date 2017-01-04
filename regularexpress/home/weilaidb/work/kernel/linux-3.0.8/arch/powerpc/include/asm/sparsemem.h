#define _ASM_POWERPC_SPARSEMEM_H 1
#define SECTION_SIZE_BITS       24
#define MAX_PHYSADDR_BITS       44
#define MAX_PHYSMEM_BITS        44
extern void create_section_mapping(unsigned long start, unsigned long end);
extern int remove_section_mapping(unsigned long start, unsigned long end);
extern int hot_add_scn_to_nid(unsigned long scn_addr);
static inline int hot_add_scn_to_nid(unsigned long scn_addr)
