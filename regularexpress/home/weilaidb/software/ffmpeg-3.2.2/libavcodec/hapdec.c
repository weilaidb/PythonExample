static int parse_section_header(GetByteContext *gbc, int *section_size,
enum HapSectionType *section_type)
static int hap_parse_decode_instructions(HapContext *ctx, int size)
static int hap_can_use_tex_in_place(HapContext *ctx)
static int hap_parse_frame_header(AVCodecContext *avctx)
static int decompress_chunks_thread(AVCodecContext *avctx, void *arg,
int chunk_nb, int thread_nb)
static int decompress_texture_thread(AVCodecContext *avctx, void *arg,
int slice, int thread_nb)
static int hap_decode(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int hap_init(AVCodecContext *avctx)
static av_cold int hap_close(AVCodecContext *avctx)
AVCodec ff_hap_decoder = ;
