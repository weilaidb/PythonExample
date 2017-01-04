#define __IP_SET_BITMAP_H
enum ;
#define IPSET_BITMAP_MAX_RANGE	0x0000FFFF
static inline u32
range_to_mask(u32 from, u32 to, u8 *bits)
