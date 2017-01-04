#define AVCODEC_BSF_H
int ff_bsf_get_packet(AVBSFContext *ctx, AVPacket **pkt);
int ff_bsf_get_packet_ref(AVBSFContext *ctx, AVPacket *pkt);
const AVClass *ff_bsf_child_class_next(const AVClass *prev);
