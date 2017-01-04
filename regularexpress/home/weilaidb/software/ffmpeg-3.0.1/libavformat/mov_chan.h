#define AVFORMAT_MOV_CHAN_H
uint64_t ff_mov_get_channel_layout(uint32_t tag, uint32_t bitmap);
uint32_t ff_mov_get_channel_layout_tag(enum AVCodecID codec_id,
uint64_t channel_layout,
uint32_t *bitmap);
int ff_mov_read_chan(AVFormatContext *s, AVIOContext *pb, AVStream *st,
int64_t size);
