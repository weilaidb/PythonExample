static const char *exif_get_tag_name(uint16_t id)
static int exif_add_metadata(AVCodecContext *avctx, int count, int type,
const char *name, const char *sep,
GetByteContext *gb, int le,
AVDictionary **metadata)
static int exif_decode_tag(AVCodecContext *avctx, GetByteContext *gbytes, int le,
int depth, AVDictionary **metadata)
int avpriv_exif_decode_ifd(AVCodecContext *avctx, GetByteContext *gbytes, int le,
int depth, AVDictionary **metadata)
