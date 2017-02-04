#define SEQ_FRAME_SIZE         6144
#define SEQ_FRAME_W            256
#define SEQ_FRAME_H            128
#define SEQ_NUM_FRAME_BUFFERS  30
#define SEQ_AUDIO_BUFFER_SIZE  882
#define SEQ_SAMPLE_RATE        22050
#define SEQ_FRAME_RATE         25
typedef struct TiertexSeqFrameBuffer  TiertexSeqFrameBuffer;
typedef struct SeqDemuxContext  SeqDemuxContext;
seq_probe
seq_init_frame_buffers
seq_fill_buffer
seq_parse_frame_data
seq_read_header
seq_read_packet
seq_read_close
AVInputFormat ff_tiertexseq_demuxer = ;
