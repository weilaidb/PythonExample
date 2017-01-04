#define MAX_SPATIAL_SEGMENTATION 4096
typedef struct HVCCNALUnitArray  HVCCNALUnitArray;
typedef struct HEVCDecoderConfigurationRecord  HEVCDecoderConfigurationRecord;
typedef struct HVCCProfileTierLevel  HVCCProfileTierLevel;
static void hvcc_update_ptl(HEVCDecoderConfigurationRecord *hvcc,
HVCCProfileTierLevel *ptl)
static void hvcc_parse_ptl(GetBitContext *gb,
HEVCDecoderConfigurationRecord *hvcc,
unsigned int max_sub_layers_minus1)
static void skip_sub_layer_hrd_parameters(GetBitContext *gb,
unsigned int cpb_cnt_minus1,
uint8_t sub_pic_hrd_params_present_flag)
static int skip_hrd_parameters(GetBitContext *gb, uint8_t cprms_present_flag,
unsigned int max_sub_layers_minus1)
static void skip_timing_info(GetBitContext *gb)
static void hvcc_parse_vui(GetBitContext *gb,
HEVCDecoderConfigurationRecord *hvcc,
unsigned int max_sub_layers_minus1)
static void skip_sub_layer_ordering_info(GetBitContext *gb)
static int hvcc_parse_vps(GetBitContext *gb,
HEVCDecoderConfigurationRecord *hvcc)
static void skip_scaling_list_data(GetBitContext *gb)
static int parse_rps(GetBitContext *gb, unsigned int rps_idx,
unsigned int num_rps,
unsigned int num_delta_pocs[MAX_SHORT_TERM_RPS_COUNT])
static int hvcc_parse_sps(GetBitContext *gb,
HEVCDecoderConfigurationRecord *hvcc)
static int hvcc_parse_pps(GetBitContext *gb,
HEVCDecoderConfigurationRecord *hvcc)
static uint8_t *nal_unit_extract_rbsp(const uint8_t *src, uint32_t src_len,
uint32_t *dst_len)
static void nal_unit_parse_header(GetBitContext *gb, uint8_t *nal_type)
static int hvcc_array_add_nal_unit(uint8_t *nal_buf, uint32_t nal_size,
uint8_t nal_type, int ps_array_completeness,
HEVCDecoderConfigurationRecord *hvcc)
static int hvcc_add_nal_unit(uint8_t *nal_buf, uint32_t nal_size,
int ps_array_completeness,
HEVCDecoderConfigurationRecord *hvcc)
static void hvcc_init(HEVCDecoderConfigurationRecord *hvcc)
static void hvcc_close(HEVCDecoderConfigurationRecord *hvcc)
static int hvcc_write(AVIOContext *pb, HEVCDecoderConfigurationRecord *hvcc)
int ff_hevc_annexb2mp4(AVIOContext *pb, const uint8_t *buf_in,
int size, int filter_ps, int *ps_count)
int ff_hevc_annexb2mp4_buf(const uint8_t *buf_in, uint8_t **buf_out,
int *size, int filter_ps, int *ps_count)
int ff_isom_write_hvcc(AVIOContext *pb, const uint8_t *data,
int size, int ps_array_completeness)
