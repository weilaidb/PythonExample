PROTO void ff ## pre ## in## _to_ ##out## _a_ ##cap(uint8_t **dst, const uint8_t **src, int len);
PROTO2 PROTO(pre, int16, out, cap) PROTO(pre, int32, out, cap) PROTO(pre, float, out, cap)
PROTO3 PROTO2(pre, int16, cap) PROTO2(pre, int32, cap) PROTO2(pre, float, cap)
PROTO4 PROTO3(pre, mmx) PROTO3(pre, sse) PROTO3(pre, sse2) PROTO3(pre, ssse3) PROTO3(pre, sse4) PROTO3(pre, avx) PROTO3(pre, avx2)
PROTO4(_)
PROTO4(_pack_2ch_)
PROTO4(_pack_6ch_)
PROTO4(_pack_8ch_)
PROTO4(_unpack_2ch_)
PROTO4(_unpack_6ch_)
swri_audio_convert_init_x86
