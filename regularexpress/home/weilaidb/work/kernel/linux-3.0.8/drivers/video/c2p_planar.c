static void c2p_32x8(u32 d[8])
static const int perm_c2p_32x8[8] = ;
static inline void store_planar(void *dst, u32 dst_inc, u32 bpp, u32 d[8])
static inline void store_planar_masked(void *dst, u32 dst_inc, u32 bpp,
u32 d[8], u32 mask)
void c2p_planar(void *dst, const void *src, u32 dx, u32 dy, u32 width,
u32 height, u32 dst_nextline, u32 dst_nextplane,
u32 src_nextline, u32 bpp)
EXPORT_SYMBOL_GPL(c2p_planar);
MODULE_LICENSE("GPL");
