#define AVCODEC_GOLOMB_H
#define INVALID_VLC           0x80000000
extern const uint8_t ff_golomb_vlc_len[512];
extern const uint8_t ff_ue_golomb_vlc_code[512];
extern const  int8_t ff_se_golomb_vlc_code[512];
extern const uint8_t ff_ue_golomb_len[256];
extern const uint8_t ff_interleaved_golomb_vlc_len[256];
extern const uint8_t ff_interleaved_ue_golomb_vlc_code[256];
extern const  int8_t ff_interleaved_se_golomb_vlc_code[256];
extern const uint8_t ff_interleaved_dirac_golomb_vlc_code[256];
get_ue_golomb
get_ue_golomb_long
get_ue_golomb_31
get_interleaved_ue_golomb
get_te0_golomb
get_te_golomb
get_se_golomb
get_se_golomb_long
get_interleaved_se_golomb
dirac_get_se_golomb
get_ur_golomb
get_ur_golomb_jpegls
get_sr_golomb
get_sr_golomb_flac
get_ur_golomb_shorten
get_sr_golomb_shorten
get_ue
get_se
get_te
get_ue_golomb get_ue(a, __FILE__, __PRETTY_FUNCTION__, __LINE__)
get_se_golomb get_se(a, __FILE__, __PRETTY_FUNCTION__, __LINE__)
get_te_golomb  get_te(a, r, __FILE__, __PRETTY_FUNCTION__, __LINE__)
get_te0_golomb get_te(a, r, __FILE__, __PRETTY_FUNCTION__, __LINE__)
set_ue_golomb
set_te_golomb
set_se_golomb
set_ur_golomb
set_ur_golomb_jpegls
set_sr_golomb
set_sr_golomb_flac
