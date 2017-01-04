static const uint8_t dnxhd_1235_luma_weight[] = ;
static const uint8_t dnxhd_1235_chroma_weight[] = ;
static const uint8_t dnxhd_1237_luma_weight[] = ;
static const uint8_t dnxhd_1237_chroma_weight[] = ;
static const uint8_t dnxhd_1238_luma_weight[] = ;
static const uint8_t dnxhd_1238_chroma_weight[] = ;
static const uint8_t dnxhd_1241_luma_weight[] = ;
static const uint8_t dnxhd_1241_chroma_weight[] = ;
static const uint8_t dnxhd_1242_luma_weight[] = ;
static const uint8_t dnxhd_1242_chroma_weight[] = ;
static const uint8_t dnxhd_1243_luma_weight[] = ;
static const uint8_t dnxhd_1243_chroma_weight[] = ;
static const uint8_t dnxhd_1250_luma_weight[] = ;
static const uint8_t dnxhd_1250_chroma_weight[] = ;
static const uint8_t dnxhd_1251_luma_weight[] = ;
static const uint8_t dnxhd_1251_chroma_weight[] = ;
static const uint8_t dnxhd_1252_luma_weight[] = ;
static const uint8_t dnxhd_1252_chroma_weight[] = ;
static const uint8_t dnxhd_1260_luma_weight[] = ;
static const uint8_t dnxhd_1260_chroma_weight[] = ;
static const uint8_t dnxhd_1235_dc_codes[14] = ;
static const uint8_t dnxhd_1235_dc_bits[14] = ;
static const uint8_t dnxhd_1237_dc_codes[12] = ;
static const uint8_t dnxhd_1237_dc_bits[12] = ;
static const uint16_t dnxhd_1237_ac_codes[257] = ;
static const uint8_t dnxhd_1237_ac_bits[257] = ;
static const uint8_t dnxhd_1237_ac_info[2*257] = ;
static const uint16_t dnxhd_1238_ac_codes[257] = ;
static const uint8_t dnxhd_1238_ac_bits[257] = ;
static const uint8_t dnxhd_1238_ac_info[2*257] = ;
static const uint16_t dnxhd_1235_ac_codes[257] = ;
static const uint8_t dnxhd_1235_ac_bits[257] = ;
static const uint8_t dnxhd_1235_ac_info[2*257] = ;
static const uint16_t dnxhd_1250_ac_codes[257] = ;
static const uint8_t dnxhd_1250_ac_bits[257] = ;
static const uint8_t dnxhd_1250_ac_info[2*257] = ;
static const uint16_t dnxhd_1251_ac_codes[257] = ;
static const uint8_t dnxhd_1251_ac_bits[257] = ;
static const uint8_t dnxhd_1251_ac_info[2*257] = ;
static const uint16_t dnxhd_1252_ac_codes[257] = ;
static const uint8_t dnxhd_1252_ac_bits[257] = ;
static const uint8_t dnxhd_1252_ac_info[2*257] = ;
static const uint16_t dnxhd_1235_run_codes[62] = ;
static const uint8_t dnxhd_1235_run_bits[62] = ;
static const uint8_t dnxhd_1235_run[62] = ;
static const uint16_t dnxhd_1237_run_codes[62] = ;
static const uint8_t dnxhd_1237_run_bits[62] = ;
static const uint8_t dnxhd_1237_run[62] = ;
static const uint8_t dnxhd_1238_run[62] = ;
static const uint16_t dnxhd_1250_run_codes[62] = ;
static const uint8_t dnxhd_1250_run_bits[62] = ;
static const uint8_t dnxhd_1250_run[62] = ;
const CIDEntry ff_dnxhd_cid_table[] = ;
int ff_dnxhd_get_cid_table(int cid)
int avpriv_dnxhd_get_frame_size(int cid)
int avpriv_dnxhd_get_interlaced(int cid)
#if LIBAVCODEC_VERSION_MAJOR < 58
uint64_t avpriv_dnxhd_parse_header_prefix(const uint8_t *buf)
static int dnxhd_find_hr_cid(AVCodecContext *avctx)
int ff_dnxhd_find_cid(AVCodecContext *avctx, int bit_depth)
void ff_dnxhd_print_profiles(AVCodecContext *avctx, int loglevel)
