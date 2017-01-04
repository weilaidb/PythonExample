#define _ASM_TILE_SWAB_H
#define __arch_swab32(x) __builtin_bswap32(x)
#define __arch_swab64(x) __builtin_bswap64(x)
#define __arch_swab16(x) (__builtin_bswap32(x) >> 16)
