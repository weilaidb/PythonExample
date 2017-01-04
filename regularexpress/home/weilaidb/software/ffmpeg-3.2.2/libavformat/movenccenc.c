static int auxiliary_info_alloc_size(MOVMuxCencContext* ctx, int size)
static int auxiliary_info_write(MOVMuxCencContext* ctx,
const uint8_t *buf_in, int size)
static int auxiliary_info_add_subsample(MOVMuxCencContext* ctx,
uint16_t clear_bytes, uint32_t encrypted_bytes)
static void mov_cenc_write_encrypted(MOVMuxCencContext* ctx, AVIOContext *pb,
const uint8_t *buf_in, int size)
static int mov_cenc_start_packet(MOVMuxCencContext* ctx)
static int mov_cenc_end_packet(MOVMuxCencContext* ctx)
int ff_mov_cenc_write_packet(MOVMuxCencContext* ctx, AVIOContext *pb,
const uint8_t *buf_in, int size)
int ff_mov_cenc_avc_parse_nal_units(MOVMuxCencContext* ctx, AVIOContext *pb,
const uint8_t *buf_in, int size)
int ff_mov_cenc_avc_write_nal_units(AVFormatContext *s, MOVMuxCencContext* ctx,
int nal_length_size, AVIOContext *pb, const uint8_t *buf_in, int size)
static int64_t update_size(AVIOContext *pb, int64_t pos)
static int mov_cenc_write_senc_tag(MOVMuxCencContext* ctx, AVIOContext *pb,
int64_t* auxiliary_info_offset)
static int mov_cenc_write_saio_tag(AVIOContext *pb, int64_t auxiliary_info_offset)
static int mov_cenc_write_saiz_tag(MOVMuxCencContext* ctx, AVIOContext *pb)
void ff_mov_cenc_write_stbl_atoms(MOVMuxCencContext* ctx, AVIOContext *pb)
static int mov_cenc_write_schi_tag(AVIOContext *pb, uint8_t* kid)
int ff_mov_cenc_write_sinf_tag(MOVTrack* track, AVIOContext *pb, uint8_t* kid)
int ff_mov_cenc_init(MOVMuxCencContext* ctx, uint8_t* encryption_key,
int use_subsamples, int bitexact)
void ff_mov_cenc_free(MOVMuxCencContext* ctx)
