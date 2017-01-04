static void c2p_16x8(u32 d[4])
static const int perm_c2p_16x8[4] = ;
static inline void store_iplan2(void *dst, u32 bpp, u32 d[4])
static inline void store_iplan2_masked(void *dst, u32 bpp, u32 d[4], u32 mask)
void c2p_iplan2(void *dst, const void *src, u32 dx, u32 dy, u32 width,
u32 height, u32 dst_nextline, u32 src_nextline, u32 bpp)
EXPORT_SYMBOL_GPL(c2p_iplan2);
MODULE_LICENSE("GPL");
