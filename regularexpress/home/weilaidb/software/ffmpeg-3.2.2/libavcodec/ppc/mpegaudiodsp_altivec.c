#if HAVE_ALTIVEC
MACS rt+=(ra)*(rb)
MLSS rt-=(ra)*(rb)
SUM8               \
apply_window
apply_window_mp3
ff_mpadsp_init_ppc
