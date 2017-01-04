#undef fseeko
#define fseeko(x, y, z) fseeko64(x, y, z)
#undef ftello
#define ftello(x)       ftello64(x)
#elif defined(_WIN32)
#undef fseeko
#define fseeko(x, y, z) _fseeki64(x, y, z)
#undef ftello
#define ftello(x)       _ftelli64(x)
#define MIN(a,b) ((a) > (b) ? (b) : (a))
#define BE_16(x) ((((uint8_t*)(x))[0] <<  8) | ((uint8_t*)(x))[1])
#define BE_32(x) (((uint32_t)(((uint8_t*)(x))[0]) << 24) |  \
(((uint8_t*)(x))[1]  << 16) |  \
(((uint8_t*)(x))[2]  <<  8) |  \
((uint8_t*)(x))[3])
#define BE_64(x) (((uint64_t)(((uint8_t*)(x))[0]) << 56) |  \
((uint64_t)(((uint8_t*)(x))[1]) << 48) |  \
((uint64_t)(((uint8_t*)(x))[2]) << 40) |  \
((uint64_t)(((uint8_t*)(x))[3]) << 32) |  \
((uint64_t)(((uint8_t*)(x))[4]) << 24) |  \
((uint64_t)(((uint8_t*)(x))[5]) << 16) |  \
((uint64_t)(((uint8_t*)(x))[6]) <<  8) |  \
((uint64_t)( (uint8_t*)(x))[7]))
#define BE_FOURCC(ch0, ch1, ch2, ch3)           \
( (uint32_t)(unsigned char)(ch3)        |   \
((uint32_t)(unsigned char)(ch2) <<  8) |   \
((uint32_t)(unsigned char)(ch1) << 16) |   \
((uint32_t)(unsigned char)(ch0) << 24) )
#define QT_ATOM BE_FOURCC
#define FREE_ATOM QT_ATOM('f', 'r', 'e', 'e')
#define JUNK_ATOM QT_ATOM('j', 'u', 'n', 'k')
#define MDAT_ATOM QT_ATOM('m', 'd', 'a', 't')
#define MOOV_ATOM QT_ATOM('m', 'o', 'o', 'v')
#define PNOT_ATOM QT_ATOM('p', 'n', 'o', 't')
#define SKIP_ATOM QT_ATOM('s', 'k', 'i', 'p')
#define WIDE_ATOM QT_ATOM('w', 'i', 'd', 'e')
#define PICT_ATOM QT_ATOM('P', 'I', 'C', 'T')
#define FTYP_ATOM QT_ATOM('f', 't', 'y', 'p')
#define UUID_ATOM QT_ATOM('u', 'u', 'i', 'd')
#define CMOV_ATOM QT_ATOM('c', 'm', 'o', 'v')
#define STCO_ATOM QT_ATOM('s', 't', 'c', 'o')
#define CO64_ATOM QT_ATOM('c', 'o', '6', '4')
#define ATOM_PREAMBLE_SIZE    8
#define COPY_BUFFER_SIZE   33554432
int main(int argc, char *argv[])
