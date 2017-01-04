#define _ASM_PROC_CACHE_H
#define L1_CACHE_NWAYS		4
#define L1_CACHE_NENTRIES	256
#define L1_CACHE_BYTES		16
#define L1_CACHE_SHIFT		4
#define L1_CACHE_WAYDISP	0x1000
#define L1_CACHE_TAG_VALID	0x00000001
#define L1_CACHE_TAG_DIRTY	0x00000008
#define L1_CACHE_TAG_ENTRY	0x00000ff0
#define L1_CACHE_TAG_ADDRESS	0xfffff000
#define L1_CACHE_TAG_MASK	+(L1_CACHE_TAG_ADDRESS|L1_CACHE_TAG_ENTRY)
#define MN10300_DCACHE_INV_RANGE_INTR_LOG2_INTERVAL	4
#define MN10300_DCACHE_FLUSH_BORDER	\
+(L1_CACHE_NWAYS * L1_CACHE_NENTRIES * L1_CACHE_BYTES)
#define MN10300_DCACHE_FLUSH_INV_BORDER	\
+(L1_CACHE_NWAYS * L1_CACHE_NENTRIES * L1_CACHE_BYTES)