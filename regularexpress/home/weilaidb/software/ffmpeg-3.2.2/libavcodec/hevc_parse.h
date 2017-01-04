#define AVCODEC_HEVC_PARSE_H
int ff_hevc_decode_extradata(const uint8_t *data, int size, HEVCParamSets *ps,
int *is_nalff, int *nal_length_size,
int err_recognition, void *logctx);
