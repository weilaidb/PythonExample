#define _ASM_POWERPC_ABS_ADDR_H
struct mschunks_map ;
extern struct mschunks_map mschunks_map;
#define MSCHUNKS_CHUNK_SHIFT	(18)
#define MSCHUNKS_CHUNK_SIZE	(1UL << MSCHUNKS_CHUNK_SHIFT)
#define MSCHUNKS_OFFSET_MASK	(MSCHUNKS_CHUNK_SIZE - 1)
static inline unsigned long chunk_to_addr(unsigned long chunk)
static inline unsigned long addr_to_chunk(unsigned long addr)
static inline unsigned long phys_to_abs(unsigned long pa)
#define virt_to_abs(va) phys_to_abs(__pa(va))
#define abs_to_virt(aa) __va(aa)
#define iseries_hv_addr(virtaddr)	\
(0x8000000000000000UL | virt_to_abs(virtaddr))
