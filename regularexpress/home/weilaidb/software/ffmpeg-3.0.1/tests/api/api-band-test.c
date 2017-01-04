uint8_t *slice_byte_buffer;
uint8_t slice_byte_buffer_size;
int draw_horiz_band_called;
static void draw_horiz_band(AVCodecContext *ctx, const AVFrame *fr, int offset[4],
int slice_position, int type, int height)
static int video_decode(const char *input_filename)
int main(int argc, char **argv)
