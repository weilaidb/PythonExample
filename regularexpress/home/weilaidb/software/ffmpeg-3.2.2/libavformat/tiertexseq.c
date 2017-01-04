#define SEQ_FRAME_SIZE         6144
#define SEQ_FRAME_W            256
#define SEQ_FRAME_H            128
#define SEQ_NUM_FRAME_BUFFERS  30
#define SEQ_AUDIO_BUFFER_SIZE  882
#define SEQ_SAMPLE_RATE        22050
#define SEQ_FRAME_RATE         25
typedef struct TiertexSeqFrameBuffer  TiertexSeqFrameBuffer;
typedef struct SeqDemuxContext  SeqDemuxContext;
static int seq_probe(AVProbeData *p)
static int seq_init_frame_buffers(SeqDemuxContext *seq, AVIOContext *pb)
static int seq_fill_buffer(SeqDemuxContext *seq, AVIOContext *pb, int buffer_num, unsigned int data_offs, int data_size)
static int seq_parse_frame_data(SeqDemuxContext *seq, AVIOContext *pb)
static int seq_read_header(AVFormatContext *s)
static int seq_read_packet(AVFormatContext *s, AVPacket *pkt)
static int seq_read_close(AVFormatContext *s)
AVInputFormat ff_tiertexseq_demuxer = ;
