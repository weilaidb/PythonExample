union uu ;
static inline unsigned short
get_unaligned16(const unsigned short *p)
#  define OFF 0
#  define PUP(a) *(a)++
#  define UP_UNALIGNED(a) get_unaligned16((a)++)
#  define OFF 1
#  define PUP(a) *++(a)
#  define UP_UNALIGNED(a) get_unaligned16(++(a))
void inflate_fast(z_streamp strm, unsigned start)
