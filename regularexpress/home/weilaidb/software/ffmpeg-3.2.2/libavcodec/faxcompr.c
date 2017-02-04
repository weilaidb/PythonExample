#define CCITT_SYMS 104
static const uint16_t ccitt_syms[CCITT_SYMS] = ;
static const uint8_t ccitt_codes_bits[2][CCITT_SYMS] =
;
static const uint8_t ccitt_codes_lens[2][CCITT_SYMS] =
;
static const uint8_t ccitt_group3_2d_bits[11] = ;
static const uint8_t ccitt_group3_2d_lens[11] = ;
static VLC ccitt_vlc[2], ccitt_group3_2d_vlc;
ff_ccitt_unpack_init
decode_uncompressed
decode_group3_1d_line
decode_group3_2d_line
put_line
find_group3_syncmarker
ff_ccitt_unpack
