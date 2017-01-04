#define AVCODEC_AACENC_PRED_H
#define PRED_RESET_FRAME_MIN 240
#define PRED_RESET_MIN 64
#define PRED_SFB_START 10
void ff_aac_apply_main_pred(AACEncContext *s, SingleChannelElement *sce);
void ff_aac_adjust_common_pred(AACEncContext *s, ChannelElement *cpe);
void ff_aac_search_for_pred(AACEncContext *s, SingleChannelElement *sce);
void ff_aac_encode_main_pred(AACEncContext *s, SingleChannelElement *sce);
