enum MovChannelLayoutTag ;
struct MovChannelLayoutMap ;
static const struct MovChannelLayoutMap mov_ch_layout_map_misc[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_1ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_2ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_3ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_4ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_5ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_6ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_7ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_8ch[] = ;
static const struct MovChannelLayoutMap mov_ch_layout_map_9ch[] = ;
static const struct MovChannelLayoutMap * const mov_ch_layout_map[] = ;
static const enum MovChannelLayoutTag mov_ch_layouts_aac[] = ;
static const enum MovChannelLayoutTag mov_ch_layouts_ac3[] = ;
static const enum MovChannelLayoutTag mov_ch_layouts_alac[] = ;
static const enum MovChannelLayoutTag mov_ch_layouts_wav[] = ;
static const struct  mov_codec_ch_layouts[] = ;
uint64_t ff_mov_get_channel_layout(uint32_t tag, uint32_t bitmap)
static uint32_t mov_get_channel_label(uint32_t label)
uint32_t ff_mov_get_channel_layout_tag(enum AVCodecID codec_id,
uint64_t channel_layout,
uint32_t *bitmap)
int ff_mov_read_chan(AVFormatContext *s, AVIOContext *pb, AVStream *st,
int64_t size)
