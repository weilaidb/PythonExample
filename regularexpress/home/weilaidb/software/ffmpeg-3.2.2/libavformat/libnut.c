#define ID_STRING
#define ID_LENGTH (strlen(ID_STRING) + 1)
typedef struct  NUTContext;
static const AVCodecTag nut_tags[] = ;
#if CONFIG_LIBNUT_MUXER
av_write
nut_write_header
nut_write_packet
nut_write_trailer
AVOutputFormat ff_libnut_muxer = ;
nut_probe
av_read
av_seek
nut_read_header
nut_read_packet
nut_read_seek
nut_read_close
AVInputFormat ff_libnut_demuxer = ;
