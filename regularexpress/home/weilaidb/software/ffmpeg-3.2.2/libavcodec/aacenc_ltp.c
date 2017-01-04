void ff_aac_encode_ltp_info(AACEncContext *s, SingleChannelElement *sce,
int common_window)
void ff_aac_ltp_insert_new_frame(AACEncContext *s)
static void get_lag(float *buf, const float *new, LongTermPrediction *ltp)
static void generate_samples(float *buf, LongTermPrediction *ltp)
void ff_aac_update_ltp(AACEncContext *s, SingleChannelElement *sce)
void ff_aac_adjust_common_ltp(AACEncContext *s, ChannelElement *cpe)
void ff_aac_search_for_ltp(AACEncContext *s, SingleChannelElement *sce,
int common_window)
