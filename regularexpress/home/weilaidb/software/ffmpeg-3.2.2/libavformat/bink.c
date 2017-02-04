enum BinkAudFlags ;
#define BINK_EXTRADATA_SIZE     1
#define BINK_MAX_AUDIO_TRACKS   256
#define BINK_MAX_WIDTH          7680
#define BINK_MAX_HEIGHT         4800
#define SMUSH_BLOCK_SIZE        512
typedef struct BinkDemuxContext  BinkDemuxContext;
probe
read_header
read_packet
read_seek
AVInputFormat ff_bink_demuxer = ;
