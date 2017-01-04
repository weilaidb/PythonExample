#define AVCODEC_AACENC_TNS_H
void ff_aac_encode_tns_info(AACEncContext *s, SingleChannelElement *sce);
void ff_aac_apply_tns(AACEncContext *s, SingleChannelElement *sce);
void ff_aac_search_for_tns(AACEncContext *s, SingleChannelElement *sce);
