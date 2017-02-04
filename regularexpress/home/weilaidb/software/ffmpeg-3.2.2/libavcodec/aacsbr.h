#define AVCODEC_AACSBR_H
#define ENVELOPE_ADJUSTMENT_OFFSET 2
#define NOISE_FLOOR_OFFSET 6
enum ;
enum ;
enum ;
static const int8_t vlc_sbr_lav[10] =
;
SBR_INIT_VLC_STATIC \
INIT_VLC_STATIC(&vlc_sbr[num], 9, sbr_tmp[num].table_size / sbr_tmp[num].elem_size,     \
sbr_tmp[num].sbr_bits ,                      1,                      1, \
sbr_tmp[num].sbr_codes, sbr_tmp[num].elem_size, sbr_tmp[num].elem_size, \
size)
SBR_VLC_ROW \
AAC_RENAME(void);
AAC_RENAME(AACContext *ac, SpectralBandReplication *sbr);
AAC_RENAME(SpectralBandReplication *sbr);
AAC_RENAME(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb, int crc, int cnt, int id_aac);
AAC_RENAME(AACContext *ac, SpectralBandReplication *sbr, int id_aac,
INTFLOAT* L, INTFLOAT *R);
ff_aacsbr_func_ptr_init_mips;
