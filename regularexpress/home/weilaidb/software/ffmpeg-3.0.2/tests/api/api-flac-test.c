#define NUMBER_OF_FRAMES 200
#define NAME_BUFF_SIZE 100
static int generate_raw_frame(uint16_t *frame_data, int i, int sample_rate,
int channels, int frame_size)
static int init_encoder(AVCodec *enc, AVCodecContext **enc_ctx,
int64_t ch_layout, int sample_rate)
static int init_decoder(AVCodec *dec, AVCodecContext **dec_ctx,
int64_t ch_layout)
static int run_test(AVCodec *enc, AVCodec *dec, AVCodecContext *enc_ctx,
AVCodecContext *dec_ctx)
static int close_encoder(AVCodecContext **enc_ctx)
static int close_decoder(AVCodecContext **dec_ctx)
int main(void)
