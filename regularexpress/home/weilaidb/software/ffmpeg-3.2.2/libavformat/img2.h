#define AVFORMAT_IMG2_H
#if HAVE_GLOB
enum PatternType ;
typedef struct VideoDemuxData  VideoDemuxData;
typedef struct IdStrMap  IdStrMap;
extern const IdStrMap ff_img_tags[];
extern const AVOption ff_img_options[];
ff_img_read_header;
ff_img_read_packet;
