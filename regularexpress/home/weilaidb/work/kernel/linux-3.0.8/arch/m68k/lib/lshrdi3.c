#define BITS_PER_UNIT 8
typedef		 int SItype	__attribute__ ((mode (SI)));
typedef unsigned int USItype	__attribute__ ((mode (SI)));
typedef		 int DItype	__attribute__ ((mode (DI)));
typedef int word_type __attribute__ ((mode (__word__)));
struct DIstruct ;
typedef union
DIunion;
DItype
__lshrdi3 (DItype u, word_type b)
