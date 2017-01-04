#define AVFORMAT_VORBISCOMMENT_H
int64_t ff_vorbiscomment_length(AVDictionary *m, const char *vendor_string);
int ff_vorbiscomment_write(uint8_t **p, AVDictionary **m,
const char *vendor_string);
extern const AVMetadataConv ff_vorbiscomment_metadata_conv[];
