#define _ASM_TILE_CACHE_H
#define L1_CACHE_SHIFT		CHIP_L1D_LOG_LINE_SIZE()
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)
#define L2_CACHE_SHIFT		CHIP_L2_LOG_LINE_SIZE()
#define L2_CACHE_BYTES		(1 << L2_CACHE_SHIFT)
#define L2_CACHE_ALIGN(x)	(((x)+(L2_CACHE_BYTES-1)) & -L2_CACHE_BYTES)
#define ARCH_DMA_MINALIGN	L2_CACHE_BYTES
#define SMP_CACHE_BYTES_SHIFT	L2_CACHE_SHIFT
#define SMP_CACHE_BYTES		L2_CACHE_BYTES
#define INTERNODE_CACHE_SHIFT   L2_CACHE_SHIFT
#define INTERNODE_CACHE_BYTES   L2_CACHE_BYTES
#define __read_mostly __attribute__((__section__(".data..read_mostly")))
#define __write_once __attribute__((__section__(".w1data")))
