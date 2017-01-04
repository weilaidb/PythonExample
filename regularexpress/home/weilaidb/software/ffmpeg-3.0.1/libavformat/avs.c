typedef struct avs_format  AvsFormat;
typedef enum avs_block_type  AvsBlockType;
static int avs_probe(AVProbeData * p)
static int avs_read_header(AVFormatContext * s)
static int
avs_read_video_packet(AVFormatContext * s, AVPacket * pkt,
AvsBlockType type, int sub_type, int size,
uint8_t * palette, int palette_size)
static int avs_read_audio_packet(AVFormatContext * s, AVPacket * pkt)
static int avs_read_packet(AVFormatContext * s, AVPacket * pkt)
static int avs_read_close(AVFormatContext * s)
AVInputFormat ff_avs_demuxer = ;
