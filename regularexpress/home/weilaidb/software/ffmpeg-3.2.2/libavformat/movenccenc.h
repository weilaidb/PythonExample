#define AVFORMAT_MOVENCCENC_H
#define CENC_KID_SIZE (16)
struct MOVTrack;
typedef struct  MOVMuxCencContext;
ff_mov_cenc_init;
ff_mov_cenc_free;
ff_mov_cenc_write_packet;
ff_mov_cenc_avc_parse_nal_units;
ff_mov_cenc_avc_write_nal_units;
ff_mov_cenc_write_stbl_atoms;
ff_mov_cenc_write_sinf_tag;
