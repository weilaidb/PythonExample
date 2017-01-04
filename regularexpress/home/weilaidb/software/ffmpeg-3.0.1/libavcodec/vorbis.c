#define BITSTREAM_READER_LE
unsigned int ff_vorbis_nth_root(unsigned int x, unsigned int n)
int ff_vorbis_len2vlc(uint8_t *bits, uint32_t *codes, unsigned num)
int ff_vorbis_ready_floor1_list(AVCodecContext *avctx,
vorbis_floor1_entry *list, int values)
static inline void render_line_unrolled(intptr_t x, int y, int x1,
intptr_t sy, int ady, int adx,
float *buf)
static void render_line(int x0, int y0, int x1, int y1, float *buf)
void ff_vorbis_floor1_render_list(vorbis_floor1_entry * list, int values,
uint16_t *y_list, int *flag,
int multiplier, float *out, int samples)
