const uint8_t ff_png_pass_ymask[NB_PASSES] = ;
static const uint8_t ff_png_pass_xmin[NB_PASSES] = ;
static const uint8_t ff_png_pass_xshift[NB_PASSES] = ;
void *ff_png_zalloc(void *opaque, unsigned int items, unsigned int size)
void ff_png_zfree(void *opaque, void *ptr)
int ff_png_get_nb_channels(int color_type)
int ff_png_pass_row_size(int pass, int bits_per_pixel, int width)
