#define LONG_BITSTREAM_READER
typedef struct ProresThreadData  ProresThreadData;
typedef struct ProresContext  ProresContext;
decode_init
decode_frame_header
decode_picture_header
decode_vlc_codeword
LSB2SIGN (-((x) & 1))
TOSIGNED (((x) >> 1) ^ LSB2SIGN(x))
decode_dc_coeffs
#define MAX_PADDING 16
decode_ac_coeffs
decode_slice_plane
unpack_alpha
decode_alpha_plane
decode_slice
decode_picture
MOVE_DATA_PTR buf += (nbytes); buf_size -= (nbytes)
decode_frame
decode_close
AVCodec ff_prores_lgpl_decoder = ;
