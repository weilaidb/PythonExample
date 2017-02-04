SAT (((x) < -32768) ? -32768 : (((x) > 32767) ? 32767 : (x)))
test_pabsb_c
test_pabsw_c
test_pabsd_c
test_psignb_c
test_psignw_c
test_psignd_c
test_phaddw_c
test_phaddsw_c
test_phaddd_c
test_phsubw_c
test_phsubsw_c
test_phsubd_c
test_pmulhrsw_c
test_pmaddubsw_c
test_pshufb_c
test_palignr_c
randomize_args
CHECK_FUNCTION \
while
CHECK_FUNCTIONS \
CHECK_FUNCTION(instruction, mmx, 0, pDst, pSrc); \
CHECK_FUNCTION(instruction, xmm, 1, pDst, pSrc)
main
