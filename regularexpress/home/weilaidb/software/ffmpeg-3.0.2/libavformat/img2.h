#define AVFORMAT_IMG2_H
#if HAVE_GLOB
enum PatternType ;
typedef struct VideoDemuxData  VideoDemuxData;
typedef struct IdStrMap  IdStrMap;
extern const IdStrMap ff_img_tags[];
extern const AVOption ff_img_options[];
int ff_img_read_header(AVFormatContext *s1);
int ff_img_read_packet(AVFormatContext *s1, AVPacket *pkt);
