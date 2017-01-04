#  define OFF 0
#  define PUP(a) *(a)++
#  define OFF 1
#  define PUP(a) *++(a)
void ZLIB_INTERNAL inflate_fast(strm, start)
z_streamp strm;
unsigned start;
