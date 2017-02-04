#if FFT_FLOAT
RSCALE (x)
#if FFT_FIXED_32
RSCALE (((x) + 32) >> 6)
RSCALE ((x) >> 1)
ff_mdct_init
ff_imdct_half_c
ff_imdct_calc_c
ff_mdct_calc_c
ff_mdct_end
