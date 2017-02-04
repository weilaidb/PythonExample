#define FFT_FLOAT 1
#define FFT_FIXED_32 0
#define USE_FIXED 0
#if ARCH_ARM
#   include
#elif ARCH_MIPS
#   include
reset_predict_state
*VMUL2
*VMUL4
*VMUL2S
*VMUL4S
flt16_round
flt16_even
flt16_trunc
predict
apply_dependent_coupling
apply_independent_coupling
#define LOAS_SYNC_WORD   0x2b7
struct LATMContext ;
latm_get_value
latm_decode_audio_specific_config
read_stream_mux_config
read_payload_length_info
read_audio_mux_element
latm_decode_frame
latm_decode_init
AVCodec ff_aac_decoder = ;
AVCodec ff_aac_latm_decoder = ;
