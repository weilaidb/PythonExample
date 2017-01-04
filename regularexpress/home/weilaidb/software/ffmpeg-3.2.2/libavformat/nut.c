const AVCodecTag ff_nut_subtitle_tags[] = ;
const AVCodecTag ff_nut_data_tags[] = ;
const AVCodecTag ff_nut_video_tags[] = ;
const AVCodecTag ff_nut_audio_extra_tags[] = ;
const AVCodecTag ff_nut_audio_tags[] = ;
const AVCodecTag * const ff_nut_codec_tags[] = ;
void ff_nut_reset_ts(NUTContext *nut, AVRational time_base, int64_t val)
int64_t ff_lsb2full(StreamContext *stream, int64_t lsb)
int ff_nut_sp_pos_cmp(const void *a, const void *b)
int ff_nut_sp_pts_cmp(const void *a, const void *b)
int ff_nut_add_sp(NUTContext *nut, int64_t pos, int64_t back_ptr, int64_t ts)
static int enu_free(void *opaque, void *elem)
void ff_nut_free_sp(NUTContext *nut)
const Dispositions ff_nut_dispositions[] = ;
const AVMetadataConv ff_nut_metadata_conv[] = ;
