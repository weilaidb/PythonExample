#define JV_PREAMBLE_SIZE 5
typedef struct JVFrame  JVFrame;
typedef struct JVDemuxContext  JVDemuxContext;
#define MAGIC " Compression by John M Phillips Copyright (C) 1995 The Bitmap Brothers Ltd."
static int read_probe(AVProbeData *pd)
static int read_close(AVFormatContext *s)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index,
int64_t ts, int flags)
AVInputFormat ff_jv_demuxer = ;
