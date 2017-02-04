VP8_MC_MIPS_FUNC            \
dsp->put_vp8_epel_pixels_tab[IDX][0][1] =  \
ff_put_vp8_epel##SIZE##_h4_msa;        \
dsp->put_vp8_epel_pixels_tab[IDX][0][2] =  \
ff_put_vp8_epel##SIZE##_h6_msa;        \
dsp->put_vp8_epel_pixels_tab[IDX][1][0] =  \
ff_put_vp8_epel##SIZE##_v4_msa;        \
dsp->put_vp8_epel_pixels_tab[IDX][1][1] =  \
ff_put_vp8_epel##SIZE##_h4v4_msa;      \
dsp->put_vp8_epel_pixels_tab[IDX][1][2] =  \
ff_put_vp8_epel##SIZE##_h6v4_msa;      \
dsp->put_vp8_epel_pixels_tab[IDX][2][0] =  \
ff_put_vp8_epel##SIZE##_v6_msa;        \
dsp->put_vp8_epel_pixels_tab[IDX][2][1] =  \
ff_put_vp8_epel##SIZE##_h4v6_msa;      \
dsp->put_vp8_epel_pixels_tab[IDX][2][2] =  \
ff_put_vp8_epel##SIZE##_h6v6_msa
VP8_BILINEAR_MC_MIPS_FUNC       \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][1] =  \
ff_put_vp8_bilinear##SIZE##_h_msa;         \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][2] =  \
ff_put_vp8_bilinear##SIZE##_h_msa;         \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][0] =  \
ff_put_vp8_bilinear##SIZE##_v_msa;         \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][1] =  \
ff_put_vp8_bilinear##SIZE##_hv_msa;        \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][2] =  \
ff_put_vp8_bilinear##SIZE##_hv_msa;        \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][0] =  \
ff_put_vp8_bilinear##SIZE##_v_msa;         \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][1] =  \
ff_put_vp8_bilinear##SIZE##_hv_msa;        \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][2] =  \
ff_put_vp8_bilinear##SIZE##_hv_msa
VP8_MC_MIPS_COPY                \
dsp->put_vp8_epel_pixels_tab[IDX][0][0] =      \
ff_put_vp8_pixels##SIZE##_msa;             \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][0] =  \
ff_put_vp8_pixels##SIZE##_msa;
#if HAVE_MSA
vp8dsp_init_msa
ff_vp8dsp_init_mips
