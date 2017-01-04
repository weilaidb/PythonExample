extern void c2p_planar(void *dst, const void *src, u32 dx, u32 dy, u32 width,
u32 height, u32 dst_nextline, u32 dst_nextplane,
u32 src_nextline, u32 bpp);
extern void c2p_iplan2(void *dst, const void *src, u32 dx, u32 dy, u32 width,
u32 height, u32 dst_nextline, u32 src_nextline,
u32 bpp);
