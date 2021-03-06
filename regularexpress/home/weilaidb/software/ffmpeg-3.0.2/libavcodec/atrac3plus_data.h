#define AVCODEC_ATRAC3PLUS_DATA_H
static const uint8_t atrac3p_wl_huff_code1[3] = ;
static const uint8_t atrac3p_wl_huff_bits1[3] = ;
static const uint8_t atrac3p_wl_huff_xlat1[3] = ;
static const uint8_t atrac3p_wl_huff_code2[5] = ;
static const uint8_t atrac3p_wl_huff_bits2[5] = ;
static const uint8_t atrac3p_wl_huff_xlat2[5] = ;
static const uint8_t atrac3p_wl_huff_code3[8] = ;
static const uint8_t atrac3p_wl_huff_bits3[8] = ;
static const uint8_t atrac3p_wl_huff_code4[8] = ;
static const uint8_t atrac3p_wl_huff_bits4[8] = ;
static const uint16_t atrac3p_sf_huff_code1[64] = ;
static const uint8_t atrac3p_sf_huff_bits1[64] = ;
static const uint8_t atrac3p_sf_huff_xlat1[64] = ;
static const uint8_t atrac3p_sf_huff_xlat2[64] = ;
static const uint16_t atrac3p_sf_huff_code2[64] = ;
static const uint8_t atrac3p_sf_huff_bits2[64] = ;
static const uint16_t atrac3p_sf_huff_code3[64] = ;
static const uint8_t atrac3p_sf_huff_bits3[64] = ;
static const uint16_t atrac3p_sf_huff_code4[16] = ;
static const uint8_t atrac3p_sf_huff_bits4[16] = ;
static const uint8_t atrac3p_sf_huff_xlat4[16] = ;
static const uint8_t atrac3p_sf_huff_xlat5[16] = ;
static const uint16_t atrac3p_sf_huff_code5[16] = ;
static const uint8_t atrac3p_sf_huff_bits5[16] = ;
static const uint16_t atrac3p_sf_huff_code6[16] = ;
static const uint8_t atrac3p_sf_huff_bits6[16] = ;
static const uint8_t atrac3p_ct_huff_code1[4] = ;
static const uint8_t atrac3p_ct_huff_bits1[4] = ;
static const uint8_t atrac3p_ct_huff_code2[8] = ;
static const uint8_t atrac3p_ct_huff_bits2[8] = ;
static const uint8_t atrac3p_ct_huff_xlat1[8] = ;
static const uint8_t atrac3p_ct_huff_code3[8] = ;
static const uint8_t atrac3p_ct_huff_bits3[8] = ;
static const int8_t atrac3p_wl_weights[6][32] = ;
static const int8_t atrac3p_sf_weights[2][32] = ;
static const uint8_t atrac3p_qu_num_to_seg[32] = ;
static const uint8_t atrac3p_qu_to_subband[32] = ;
static const int atrac3p_subband_to_num_powgrps[16] = ;
static const int8_t atrac3p_wl_shapes[8][16][9] = ;
static const int8_t atrac3p_sf_shapes[64][9] = ;
static const uint8_t atrac3p_ct_restricted_to_full[2][7][4] = ;
static const uint8_t huff_a01_cb[14] = ;
static const uint8_t huff_a01_xlat[81] = ;
static const uint8_t huff_a02_cb[13] = ;
static const uint8_t huff_a02_xlat[81] = ;
static const uint8_t huff_a03_cb[9] = ;
static const uint8_t huff_a03_xlat[49] = ;
static const uint8_t huff_a04_cb[4]   = ;
static const uint8_t huff_a04_xlat[6] = ;
static const uint8_t huff_a05_cb[12] = ;
static const uint8_t huff_a05_xlat[225] = ;
static const uint8_t huff_a06_cb[7] = ;
static const uint8_t huff_a06_xlat[16] = ;
static const uint8_t huff_a07_cb[11] = ;
static const uint8_t huff_a07_xlat[63] = ;
static const uint8_t huff_a11_cb[13] = ;
static const uint8_t huff_a11_xlat[81] = ;
static const uint8_t huff_a12_cb[8] = ;
static const uint8_t huff_a12_xlat[81] = ;
static const uint8_t huff_a13_cb[12] = ;
static const uint8_t huff_a13_xlat[49] = ;
static const uint8_t huff_a14_cb[12] = ;
static const uint8_t huff_a14_xlat[121] = ;
static const uint8_t huff_a15_cb[9] = ;
static const uint8_t huff_a15_xlat[225] = ;
static const uint8_t huff_a16_cb[13] = ;
static const uint8_t huff_a16_xlat[256] = ;
static const uint8_t huff_a17_cb[9] = ;
static const uint8_t huff_a17_xlat[63] = ;
static const uint8_t huff_a21_cb[14] = ;
static const uint8_t huff_a21_xlat[81] = ;
static const uint8_t huff_a22_cb[10] = ;
static const uint8_t huff_a22_xlat[25] = ;
static const uint8_t huff_a23_cb[9] = ;
static const uint8_t huff_a23_xlat[49] = ;
static const uint8_t huff_a24_cb[5] = ;
static const uint8_t huff_a25_cb[5] = ;
static const uint8_t huff_a25_xlat[8] = ;
static const uint8_t huff_a26_cb[10] = ;
static const uint8_t huff_a26_xlat[256] = ;
static const uint8_t huff_a27_cb[7] = ;
static const uint8_t huff_a27_xlat[63] = ;
static const uint8_t huff_a31_cb[8] = ;
static const uint8_t huff_a31_xlat[9] = ;
static const uint8_t huff_a32_cb[13] = ;
static const uint8_t huff_a32_xlat[81] = ;
static const uint8_t huff_a33_cb[12] = ;
static const uint8_t huff_a33_xlat[256] = ;
static const uint8_t huff_a34_cb[7] = ;
static const uint8_t huff_a34_xlat[6] = ;
static const uint8_t huff_a35_cb[11] = ;
static const uint8_t huff_a35_xlat[225] = ;
static const uint8_t huff_a36_cb[12] = ;
static const uint8_t huff_a36_xlat[256] = ;
static const uint8_t huff_a37_cb[7] = ;
static const uint8_t huff_a37_xlat[63] = ;
static const uint8_t huff_a41_cb[14] = ;
static const uint8_t huff_a41_xlat[81] = ;
static const uint8_t huff_a42_cb[10] = ;
static const uint8_t huff_a42_xlat[81] = ;
static const uint8_t huff_a43_cb[5] = ;
static const uint8_t huff_a43_xlat[7] = ;
static const uint8_t huff_a44_cb[9] = ;
static const uint8_t huff_a44_xlat[121] = ;
static const uint8_t huff_a45_cb[5] = ;
static const uint8_t huff_a45_xlat[8] = ;
static const uint8_t huff_a46_cb[7] = ;
static const uint8_t huff_a46_xlat[256] = ;
static const uint8_t huff_a47_cb[8] = ;
static const uint8_t huff_a47_xlat[63] = ;
static const uint8_t huff_a51_cb[12] = ;
static const uint8_t huff_a51_xlat[81] = ;
static const uint8_t huff_a52_cb[12] = ;
static const uint8_t huff_a52_xlat[25] = ;
static const uint8_t huff_a53_xlat[7] = ;
static const uint8_t huff_a54_cb[8] = ;
static const uint8_t huff_a54_xlat[121] = ;
static const uint8_t huff_a55_cb[8] = ;
static const uint8_t huff_a55_xlat[8] = ;
static const uint8_t huff_a56_cb[7] = ;
static const uint8_t huff_a56_xlat[31] = ;
static const uint8_t huff_a57_cb[9] = ;
static const uint8_t huff_a57_xlat[63] = ;
static const uint8_t huff_a61_cb[12] = ;
static const uint8_t huff_a61_xlat[81] = ;
static const uint8_t huff_a62_cb[8] = ;
static const uint8_t huff_a62_xlat[25] = ;
static const uint8_t huff_a63_cb[11] = ;
static const uint8_t huff_a63_xlat[256] = ;
static const uint8_t huff_a64_cb[8] = ;
static const uint8_t huff_a64_xlat[121] = ;
static const uint8_t huff_a65_cb[8] = ;
static const uint8_t huff_a65_xlat[15] = ;
static const uint8_t huff_a66_cb[11] = ;
static const uint8_t huff_a66_xlat[31] = ;
static const uint8_t huff_a67_cb[10] = ;
static const uint8_t huff_a67_xlat[63] = ;
static const uint8_t huff_a71_cb[5] = ;
static const uint8_t huff_a72_cb[12] = ;
static const uint8_t huff_a72_xlat[81] = ;
static const uint8_t huff_a73_cb[11] = ;
static const uint8_t huff_a73_xlat[49] = ;
static const uint8_t huff_a74_cb[14] = ;
static const uint8_t huff_a74_xlat[121] = ;
static const uint8_t huff_a75_cb[7] = ;
static const uint8_t huff_a75_xlat[15] = ;
static const uint8_t huff_a76_cb[12] = ;
static const uint8_t huff_a76_xlat[256] = ;
static const uint8_t huff_b01_cb[14] = ;
static const uint8_t huff_b01_xlat[81] = ;
static const uint8_t huff_b02_cb[14] = ;
static const uint8_t huff_b02_xlat[81] = ;
static const uint8_t huff_b03_cb[11] = ;
static const uint8_t huff_b03_xlat[49] = ;
static const uint8_t huff_b04_cb[12] = ;
static const uint8_t huff_b04_xlat[121] = ;
static const uint8_t huff_b05_cb[11] = ;
static const uint8_t huff_b05_xlat[225] = ;
static const uint8_t huff_b07_cb[9] = ;
static const uint8_t huff_b07_xlat[63] = ;
static const uint8_t huff_b12_cb[10] = ;
static const uint8_t huff_b12_xlat[81] = ;
static const uint8_t huff_b14_cb[14] = ;
static const uint8_t huff_b14_xlat[121] = ;
static const uint8_t huff_b16_cb[11] = ;
static const uint8_t huff_b16_xlat[256] = ;
static const uint8_t huff_b26_cb[12] = ;
static const uint8_t huff_b26_xlat[256] = ;
static const uint8_t huff_b32_cb[12] = ;
static const uint8_t huff_b32_xlat[81] = ;
static const uint8_t huff_b33_cb[13] = ;
static const uint8_t huff_b33_xlat[256] = ;
static const uint8_t huff_b35_cb[14] = ;
static const uint8_t huff_b35_xlat[225] = ;
static const uint8_t huff_b37_cb[13] = ;
static const uint8_t huff_b37_xlat[63] = ;
static const uint8_t huff_b41_cb[14] = ;
static const uint8_t huff_b41_xlat[81] = ;
static const uint8_t huff_b42_cb[11] = ;
static const uint8_t huff_b42_xlat[25] = ;
static const uint8_t huff_b43_cb[10] = ;
static const uint8_t huff_b43_xlat[49] = ;
static const uint8_t huff_b47_cb[10] = ;
static const uint8_t huff_b47_xlat[63] = ;
static const uint8_t huff_b52_cb[11] = ;
static const uint8_t huff_b52_xlat[25] = ;
static const uint8_t huff_b53_cb[7] = ;
static const uint8_t huff_b53_xlat[7] = ;
static const uint8_t huff_b56_cb[11] = ;
static const uint8_t huff_b56_xlat[31] = ;
static const uint8_t huff_b62_cb[14] = ;
static const uint8_t huff_b62_xlat[81] = ;
static const uint8_t huff_b63_cb[7] = ;
static const uint8_t huff_b63_xlat[7] = ;
static const uint8_t huff_b64_cb[7] = ;
static const uint8_t huff_b64_xlat[6] = ;
static const uint8_t huff_b65_cb[14] = ;
static const uint8_t huff_b65_xlat[225] = ;
static const uint8_t huff_b66_cb[14] = ;
static const uint8_t huff_b66_xlat[256] = ;
static const uint8_t huff_b67_cb[10] = ;
static const uint8_t huff_b67_xlat[63] = ;
static const uint8_t huff_b71_cb[14] = ;
static const uint8_t huff_b71_xlat[81] = ;
static const uint8_t huff_b73_cb[13] = ;
static const uint8_t huff_b73_xlat[256] = ;
static const uint8_t huff_b74_cb[8] = ;
static const uint8_t huff_b74_xlat[11] = ;
static const uint8_t huff_b75_cb[13] = ;
static const uint8_t huff_b75_xlat[225] = ;
static const uint8_t huff_b77_cb[12] = ;
static const uint8_t huff_b77_xlat[63] = ;
typedef struct Atrac3pSpecCodeTab  Atrac3pSpecCodeTab;
static const Atrac3pSpecCodeTab atrac3p_spectra_tabs[112] = ;
static const uint8_t atrac3p_huff_gain_npoints1_cb[9] = ;
static const uint8_t atrac3p_huff_gain_npoints2_xlat[8] = ;
static const uint8_t atrac3p_huff_gain_lev1_cb[9] = ;
static const uint8_t atrac3p_huff_gain_lev1_xlat[16] = ;
static const uint8_t atrac3p_huff_gain_lev2_cb[11] = ;
static const uint8_t atrac3p_huff_gain_lev2_xlat[15] = ;
static const uint8_t atrac3p_huff_gain_lev3_cb[11] = ;
static const uint8_t atrac3p_huff_gain_lev3_xlat[16] = ;
static const uint8_t atrac3p_huff_gain_lev4_cb[11] = ;
static const uint8_t atrac3p_huff_gain_lev4_xlat[16] = ;
static const uint8_t atrac3p_huff_gain_loc1_cb[9] = ;
static const uint8_t atrac3p_huff_gain_loc1_xlat[31] = ;
static const uint8_t atrac3p_huff_gain_loc2_cb[8] = ;
static const uint8_t atrac3p_huff_gain_loc2_xlat[31] = ;
static const uint8_t atrac3p_huff_gain_loc3_cb[7] = ;
static const uint8_t atrac3p_huff_gain_loc3_xlat[32] = ;
static const uint8_t atrac3p_huff_gain_loc4_cb[5] = ;
static const uint8_t atrac3p_huff_gain_loc4_xlat[32] = ;
static const uint8_t atrac3p_huff_gain_loc5_cb[9] = ;
static const uint8_t atrac3p_huff_gain_loc5_xlat[32] = ;
static const uint8_t atrac3p_huff_tonebands_cb[8] = ;
static const uint8_t atrac3p_huff_numwavs1_cb[9] = ;
static const uint8_t atrac3p_huff_numwavs2_cb[8] = ;
static const uint8_t atrac3p_huff_numwavs2_xlat[8] = ;
static const uint8_t atrac3p_huff_wav_ampsf1_cb[7] = ;
static const uint8_t atrac3p_huff_wav_ampsf1_xlat[32] = ;
static const uint8_t atrac3p_huff_wav_ampsf2_cb[7] = ;
static const uint8_t atrac3p_huff_wav_ampsf2_xlat[32] = ;
static const uint8_t atrac3p_huff_wav_ampsf3_cb[9] = ;
static const uint8_t atrac3p_huff_wav_ampsf3_xlat[32] = ;
static const uint8_t atrac3p_huff_freq_cb[13] = ;
static const uint8_t atrac3p_huff_freq_xlat[256] = ;
