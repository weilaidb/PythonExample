#define AVFORMAT_MOVENCCENC_H
#define CENC_KID_SIZE (16)
struct MOVTrack;
typedef struct  MOVMuxCencContext;
int ff_mov_cenc_init(MOVMuxCencContext* ctx, uint8_t* encryption_key, int use_subsamples, int bitexact);
void ff_mov_cenc_free(MOVMuxCencContext* ctx);
int ff_mov_cenc_write_packet(MOVMuxCencContext* ctx, AVIOContext *pb, const uint8_t *buf_in, int size);
int ff_mov_cenc_avc_parse_nal_units(MOVMuxCencContext* ctx, AVIOContext *pb, const uint8_t *buf_in, int size);
int ff_mov_cenc_avc_write_nal_units(AVFormatContext *s, MOVMuxCencContext* ctx, int nal_length_size,
AVIOContext *pb, const uint8_t *buf_in, int size);
void ff_mov_cenc_write_stbl_atoms(MOVMuxCencContext* ctx, AVIOContext *pb);
int ff_mov_cenc_write_sinf_tag(struct MOVTrack* track, AVIOContext *pb, uint8_t* kid);
