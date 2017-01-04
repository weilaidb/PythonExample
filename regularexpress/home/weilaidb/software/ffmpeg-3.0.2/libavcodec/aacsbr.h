#define AVCODEC_AACSBR_H
#define ENVELOPE_ADJUSTMENT_OFFSET 2
#define NOISE_FLOOR_OFFSET 6
enum ;
enum ;
enum ;
static const int8_t vlc_sbr_lav[10] =
;
#define SBR_INIT_VLC_STATIC(num, size) \
INIT_VLC_STATIC(&vlc_sbr[num], 9, sbr_tmp[num].table_size / sbr_tmp[num].elem_size,     \
sbr_tmp[num].sbr_bits ,                      1,                      1, \
sbr_tmp[num].sbr_codes, sbr_tmp[num].elem_size, sbr_tmp[num].elem_size, \
size)
#define SBR_VLC_ROW(name) \
void AAC_RENAME(ff_aac_sbr_init)(void);
void AAC_RENAME(ff_aac_sbr_ctx_init)(AACContext *ac, SpectralBandReplication *sbr);
void AAC_RENAME(ff_aac_sbr_ctx_close)(SpectralBandReplication *sbr);
int AAC_RENAME(ff_decode_sbr_extension)(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb, int crc, int cnt, int id_aac);
void AAC_RENAME(ff_sbr_apply)(AACContext *ac, SpectralBandReplication *sbr, int id_aac,
INTFLOAT* L, INTFLOAT *R);
void ff_aacsbr_func_ptr_init_mips(AACSBRContext *c);
