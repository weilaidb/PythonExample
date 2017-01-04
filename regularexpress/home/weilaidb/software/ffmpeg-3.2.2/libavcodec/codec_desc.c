#define MT(...) (const char *const[])
static const AVCodecDescriptor codec_descriptors[] = ;
const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id)
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev)
const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name)
enum AVMediaType avcodec_get_type(enum AVCodecID codec_id)
