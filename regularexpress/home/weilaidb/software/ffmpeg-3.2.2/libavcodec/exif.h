#define AVCODEC_EXIF_H
#define EXIF_MAX_IFD_RECURSION 2
#define EXIF_TAG_NAME_LENGTH   32
struct exif_tag ;
static const struct exif_tag tag_list[] = ;
int avpriv_exif_decode_ifd(void *logctx, GetByteContext *gbytes, int le,
int depth, AVDictionary **metadata);
