#define FLIC_FILE_MAGIC_1 0xAF11
#define FLIC_FILE_MAGIC_2 0xAF12
#define FLIC_FILE_MAGIC_3 0xAF44
#define FLIC_CHUNK_MAGIC_1 0xF1FA
#define FLIC_CHUNK_MAGIC_2 0xF5FA
#define FLIC_MC_SPEED 5
#define FLIC_DEFAULT_SPEED 5
#define FLIC_TFTD_CHUNK_AUDIO 0xAAAA
#define FLIC_TFTD_SAMPLE_RATE 22050
#define FLIC_HEADER_SIZE 128
#define FLIC_PREAMBLE_SIZE 6
typedef struct FlicDemuxContext  FlicDemuxContext;
static int flic_probe(AVProbeData *p)
static int flic_read_header(AVFormatContext *s)
{
FlicDemuxContext *flic = s->priv_data;
AVIOContext *pb = s->pb;
unsigned char header[FLIC_HEADER_SIZE];
AVStream *st, *ast;
int speed;
int magic_number;
unsigned char preamble[FLIC_PREAMBLE_SIZE];
flic->frame_number = 0;
if (avio_read(pb, header, FLIC_HEADER_SIZE) != FLIC_HEADER_SIZE)
return AVERROR(EIO);
magic_number = AV_RL16(&header[4]);
speed = AV_RL32(&header[0x10]);
if (speed == 0)
speed = FLIC_DEFAULT_SPEED;
st = avformat_new_stream(s, NULL);
if (!st)
return AVERROR(ENOMEM);
flic->video_stream_index = st->index;
st->codec->codec_type = AVMEDIA_TYPE_VIDEO;
st->codec->codec_id = AV_CODEC_ID_FLIC;
st->codec->codec_tag = 0;
st->codec->width = AV_RL16(&header[0x08]);
st->codec->height = AV_RL16(&header[0x0A]);
if (!st->codec->width || !st->codec->height)
static int flic_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_flic_demuxer = ;
