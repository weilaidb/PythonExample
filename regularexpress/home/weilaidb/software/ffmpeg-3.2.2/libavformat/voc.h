#define AVFORMAT_VOC_H
typedef struct voc_dec_context  VocDecContext;
typedef enum voc_type  VocType;
extern const unsigned char ff_voc_magic[21];
extern const AVCodecTag ff_voc_codec_tags[];
ff_voc_get_packet;
