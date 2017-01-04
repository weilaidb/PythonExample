#define AVCODEC_DIRACTAB_H
extern const uint8_t ff_dirac_default_qmat[7][4][4];
extern const int32_t ff_dirac_qscale_tab[116];
extern const int32_t ff_dirac_qoffset_intra_tab[120];
extern const int ff_dirac_qoffset_inter_tab[122];
#define DIRAC_MAX_QUANT_INDEX (FF_ARRAY_ELEMS(ff_dirac_qscale_tab))
