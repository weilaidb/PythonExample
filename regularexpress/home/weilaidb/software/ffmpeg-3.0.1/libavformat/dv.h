#define AVFORMAT_DV_H
typedef struct DVDemuxContext DVDemuxContext;
DVDemuxContext* avpriv_dv_init_demux(AVFormatContext* s);
int avpriv_dv_get_packet(DVDemuxContext*, AVPacket *);
int avpriv_dv_produce_packet(DVDemuxContext*, AVPacket*, uint8_t*, int, int64_t);
void ff_dv_offset_reset(DVDemuxContext *c, int64_t frame_offset);
typedef struct DVMuxContext DVMuxContext;
