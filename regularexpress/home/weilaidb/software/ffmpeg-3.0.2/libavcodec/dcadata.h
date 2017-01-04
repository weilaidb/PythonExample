#define AVCODEC_DCADATA_H
extern const uint32_t ff_dca_bit_rates[32];
extern const uint8_t ff_dca_channels[16];
extern const uint8_t ff_dca_bits_per_sample[8];
extern const uint8_t ff_dca_dmix_primary_nch[8];
extern const int16_t ff_dca_adpcm_vb[4096][4];
extern const uint32_t ff_dca_scale_factor_quant6[64];
extern const uint32_t ff_dca_scale_factor_quant7[128];
extern const uint32_t ff_dca_joint_scale_factors[129];
extern const uint32_t ff_dca_scale_factor_adj[4];
extern const uint32_t ff_dca_quant_levels[32];
extern const uint32_t ff_dca_lossy_quant[32];
extern const uint32_t ff_dca_lossless_quant[32];
extern const int8_t ff_dca_high_freq_vq[1024][32];
extern const float ff_dca_fir_32bands_perfect[512];
extern const float ff_dca_fir_32bands_nonperfect[512];
extern const float ff_dca_lfe_fir_64[256];
extern const float ff_dca_lfe_fir_128[256];
extern const float ff_dca_fir_64bands[1024];
extern const int32_t ff_dca_fir_32bands_perfect_fixed[512];
extern const int32_t ff_dca_fir_32bands_nonperfect_fixed[512];
extern const int32_t ff_dca_lfe_fir_64_fixed[256];
extern const int32_t ff_dca_fir_64bands_fixed[1024];
#define FF_DCA_DMIXTABLE_SIZE       242U
#define FF_DCA_INV_DMIXTABLE_SIZE   201U
#define FF_DCA_DMIXTABLE_OFFSET     (FF_DCA_DMIXTABLE_SIZE - FF_DCA_INV_DMIXTABLE_SIZE)
extern const uint16_t ff_dca_dmixtable[FF_DCA_DMIXTABLE_SIZE];
extern const uint32_t ff_dca_inv_dmixtable[FF_DCA_INV_DMIXTABLE_SIZE];
extern const uint16_t ff_dca_xll_refl_coeff[128];
extern const int32_t ff_dca_xll_band_coeff[20];
extern const int32_t ff_dca_sampling_freqs[16];
extern const int8_t ff_dca_lfe_index[16];
extern const int8_t ff_dca_channel_reorder_lfe[16][9];
extern const int8_t ff_dca_channel_reorder_nolfe[16][9];
extern const uint16_t ff_dca_vlc_offs[63];
