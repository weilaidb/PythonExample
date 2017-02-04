#define BITSTREAM_READER_LE
typedef struct SavedContext  SavedContext;
typedef struct WavpackFrameContext  WavpackFrameContext;
#define WV_MAX_FRAME_DECODERS 14
typedef struct WavpackContext  WavpackContext;
LEVEL_DECAY  (((a) + 0x80) >> 8)
get_tail
update_error_limit
wv_get_value
wv_get_value_integer
wv_get_value_float
wv_reset_saved_context
wv_check_crc
wv_unpack_stereo
wv_unpack_mono
wv_alloc_frame_context
#if HAVE_THREADS
init_thread_copy
wavpack_decode_init
wavpack_decode_end
wavpack_decode_block
wavpack_decode_flush
wavpack_decode_frame
AVCodec ff_wavpack_decoder = ;
