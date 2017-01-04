#if CONFIG_ZLIB
#if CONFIG_LZMA
#define LZMA_API_STATIC
typedef struct TiffContext  TiffContext;
static void free_geotags(TiffContext *const s)
#define RET_GEOKEY(TYPE, array, element)\
if (key >= TIFF_##TYPE##_KEY_ID_OFFSET &&\
key - TIFF_##TYPE##_KEY_ID_OFFSET < FF_ARRAY_ELEMS(ff_tiff_##array##_name_type_map))\
return ff_tiff_##array##_name_type_map[key - TIFF_##TYPE##_KEY_ID_OFFSET].element;
static const char *get_geokey_name(int key)
static int get_geokey_type(int key)
static int cmp_id_key(const void *id, const void *k)
static const char *search_keyval(const TiffGeoTagKeyName *keys, int n, int id)
static char *get_geokey_val(int key, int val)
static char *doubles2str(double *dp, int count, const char *sep)
static int add_metadata(int count, int type,
const char *name, const char *sep, TiffContext *s, AVFrame *frame)
static void av_always_inline horizontal_fill(unsigned int bpp, uint8_t* dst,
int usePtr, const uint8_t *src,
uint8_t c, int width, int offset)
static int deinvert_buffer(TiffContext *s, const uint8_t *src, int size)
static void unpack_yuv(TiffContext *s, AVFrame *p,
const uint8_t *src, int lnum)
#if CONFIG_ZLIB
static int tiff_uncompress(uint8_t *dst, unsigned long *len, const uint8_t *src,
int size)
static int tiff_unpack_zlib(TiffContext *s, AVFrame *p, uint8_t *dst, int stride,
const uint8_t *src, int size, int width, int lines,
int strip_start, int is_yuv)
#if CONFIG_LZMA
static int tiff_uncompress_lzma(uint8_t *dst, uint64_t *len, const uint8_t *src,
int size)
static int tiff_unpack_lzma(TiffContext *s, AVFrame *p, uint8_t *dst, int stride,
const uint8_t *src, int size, int width, int lines,
int strip_start, int is_yuv)
static int tiff_unpack_fax(TiffContext *s, uint8_t *dst, int stride,
const uint8_t *src, int size, int width, int lines)
static int tiff_unpack_strip(TiffContext *s, AVFrame *p, uint8_t *dst, int stride,
const uint8_t *src, int size, int strip_start, int lines)
static int init_image(TiffContext *s, ThreadFrame *frame)
static void set_sar(TiffContext *s, unsigned tag, unsigned num, unsigned den)
static int tiff_decode_tag(TiffContext *s, AVFrame *frame)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int tiff_init(AVCodecContext *avctx)
static av_cold int tiff_end(AVCodecContext *avctx)
AVCodec ff_tiff_decoder = ;
