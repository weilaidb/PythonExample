typedef struct VScalerContext
VScalerContext;
static int lum_planar_vscale(SwsContext *c, SwsFilterDescriptor *desc, int sliceY, int sliceH)
static int chr_planar_vscale(SwsContext *c, SwsFilterDescriptor *desc, int sliceY, int sliceH)
static int packed_vscale(SwsContext *c, SwsFilterDescriptor *desc, int sliceY, int sliceH)
static int any_vscale(SwsContext *c, SwsFilterDescriptor *desc, int sliceY, int sliceH)
int ff_init_vscale(SwsContext *c, SwsFilterDescriptor *desc, SwsSlice *src, SwsSlice *dst)
void ff_init_vscale_pfn(SwsContext *c,
yuv2planar1_fn yuv2plane1,
yuv2planarX_fn yuv2planeX,
yuv2interleavedX_fn yuv2nv12cX,
yuv2packed1_fn yuv2packed1,
yuv2packed2_fn yuv2packed2,
yuv2packedX_fn yuv2packedX,
yuv2anyX_fn yuv2anyX, int use_mmx)
