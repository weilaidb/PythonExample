#define AVFORMAT_METADATA_H
typedef struct AVMetadataConv  AVMetadataConv;
void ff_metadata_conv(AVDictionary **pm, const AVMetadataConv *d_conv,
const AVMetadataConv *s_conv);
void ff_metadata_conv_ctx(AVFormatContext *ctx, const AVMetadataConv *d_conv,
const AVMetadataConv *s_conv);
