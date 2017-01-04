#define AVFORMAT_MOVENC_H
#define MOV_FRAG_INFO_ALLOC_INCREMENT 64
#define MOV_INDEX_CLUSTER_SIZE 1024
#define MOV_TIMESCALE 1000
#define RTP_MAX_PACKET_SIZE 1450
#define MODE_MP4  0x01
#define MODE_MOV  0x02
#define MODE_3GP  0x04
#define MODE_PSP  0x08
#define MODE_3G2  0x10
#define MODE_IPOD 0x20
#define MODE_ISM  0x40
#define MODE_F4V  0x80
typedef struct MOVIentry  MOVIentry;
typedef struct HintSample  HintSample;
typedef struct HintSampleQueue  HintSampleQueue;
typedef struct MOVFragmentInfo  MOVFragmentInfo;
typedef struct MOVTrack  MOVTrack;
typedef enum  MOVEncryptionScheme;
typedef struct MOVMuxContext  MOVMuxContext;
#define FF_MOV_FLAG_RTP_HINT              (1 <<  0)
#define FF_MOV_FLAG_FRAGMENT              (1 <<  1)
#define FF_MOV_FLAG_EMPTY_MOOV            (1 <<  2)
#define FF_MOV_FLAG_FRAG_KEYFRAME         (1 <<  3)
#define FF_MOV_FLAG_SEPARATE_MOOF         (1 <<  4)
#define FF_MOV_FLAG_FRAG_CUSTOM           (1 <<  5)
#define FF_MOV_FLAG_ISML                  (1 <<  6)
#define FF_MOV_FLAG_FASTSTART             (1 <<  7)
#define FF_MOV_FLAG_OMIT_TFHD_OFFSET      (1 <<  8)
#define FF_MOV_FLAG_DISABLE_CHPL          (1 <<  9)
#define FF_MOV_FLAG_DEFAULT_BASE_MOOF     (1 << 10)
#define FF_MOV_FLAG_DASH                  (1 << 11)
#define FF_MOV_FLAG_FRAG_DISCONT          (1 << 12)
#define FF_MOV_FLAG_DELAY_MOOV            (1 << 13)
#define FF_MOV_FLAG_GLOBAL_SIDX           (1 << 14)
#define FF_MOV_FLAG_WRITE_COLR            (1 << 15)
#define FF_MOV_FLAG_WRITE_GAMA            (1 << 16)
#define FF_MOV_FLAG_USE_MDTA              (1 << 17)
int ff_mov_write_packet(AVFormatContext *s, AVPacket *pkt);
int ff_mov_init_hinting(AVFormatContext *s, int index, int src_index);
int ff_mov_add_hinted_packet(AVFormatContext *s, AVPacket *pkt,
int track_index, int sample,
uint8_t *sample_data, int sample_size);
void ff_mov_close_hinting(MOVTrack *track);
