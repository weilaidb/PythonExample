static void free_lines(SwsSlice *s)
static int alloc_lines(SwsSlice *s, int size, int width)
static int alloc_slice(SwsSlice *s, enum AVPixelFormat fmt, int lumLines, int chrLines, int h_sub_sample, int v_sub_sample, int ring)
static void free_slice(SwsSlice *s)
int ff_rotate_slice(SwsSlice *s, int lum, int chr)
int ff_init_slice_from_src(SwsSlice * s, uint8_t *src[4], int stride[4], int srcW, int lumY, int lumH, int chrY, int chrH, int relative)
static void fill_ones(SwsSlice *s, int n, int is16bit)
int ff_init_filters(SwsContext * c)
int ff_free_filters(SwsContext *c)
