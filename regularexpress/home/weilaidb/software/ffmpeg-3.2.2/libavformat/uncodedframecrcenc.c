DEFINE_CKSUM_LINE \
static void cksum_line_ ## name(unsigned *cksum, void *data, unsigned size) \
DEFINE_CKSUM_LINE(u8,  uint8_t, *p)
DEFINE_CKSUM_LINE(s16, int16_t, *p + 0x8000)
DEFINE_CKSUM_LINE(s32, int32_t, *p + 0x80000000)
DEFINE_CKSUM_LINE(flt, float,   *p * 0x80000000 + 0x80000000)
DEFINE_CKSUM_LINE(dbl, double,  *p * 0x80000000 + 0x80000000)
video_frame_cksum
audio_frame_cksum
write_header
write_frame
write_packet
AVOutputFormat ff_uncodedframecrc_muxer = ;
