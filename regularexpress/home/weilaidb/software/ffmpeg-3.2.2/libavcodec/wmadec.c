#define EXPVLCBITS 8
#define EXPMAX     ((19 + EXPVLCBITS - 1) / EXPVLCBITS)
#define HGAINVLCBITS 9
#define HGAINMAX     ((13 + HGAINVLCBITS - 1) / HGAINVLCBITS)
wma_lsp_to_curve_init;
dump_floats
wma_decode_init
pow_m1_4
wma_lsp_to_curve_init
wma_lsp_to_curve
decode_exp_lsp
static const float pow_tab[] = ;
decode_exp_vlc
wma_window
wma_decode_block
wma_decode_frame
wma_decode_superframe
flush
#if CONFIG_WMAV1_DECODER
AVCodec ff_wmav1_decoder = ;
#if CONFIG_WMAV2_DECODER
AVCodec ff_wmav2_decoder = ;
