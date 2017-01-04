#define BASE 65521L
#define DO1(buf)
#define DO4(buf)  DO1(buf); DO1(buf); DO1(buf); DO1(buf);
#define DO16(buf) DO4(buf); DO4(buf); DO4(buf); DO4(buf);
unsigned long av_adler32_update(unsigned long adler, const uint8_t * buf,
unsigned int len)
