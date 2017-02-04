#undef fseeko
fseeko fseeko64(x, y, z)
#undef ftello
ftello       ftello64(x)
defined
#undef fseeko
fseeko _fseeki64(x, y, z)
#undef ftello
ftello       _ftelli64(x)
MIN ((a) > (b) ? (b) : (a))
BE_16 ((((uint8_t*)(x))[0] <<  8) | ((uint8_t*)(x))[1])
BE_32 (((uint32_t)(((uint8_t*)(x))[0]) << 24) |  \
(((uint8_t*)(x))[1]  << 16) |  \
(((uint8_t*)(x))[2]  <<  8) |  \
((uint8_t*)(x))[3])
BE_64 (((uint64_t)(((uint8_t*)(x))[0]) << 56) |  \
((uint64_t)(((uint8_t*)(x))[1]) << 48) |  \
((uint64_t)(((uint8_t*)(x))[2]) << 40) |  \
((uint64_t)(((uint8_t*)(x))[3]) << 32) |  \
((uint64_t)(((uint8_t*)(x))[4]) << 24) |  \
((uint64_t)(((uint8_t*)(x))[5]) << 16) |  \
((uint64_t)(((uint8_t*)(x))[6]) <<  8) |  \
((uint64_t)( (uint8_t*)(x))[7]))
BE_FOURCC           \
( (uint32_t)(unsigned char)(ch3)        |   \
((uint32_t)(unsigned char)(ch2) <<  8) |   \
((uint32_t)(unsigned char)(ch1) << 16) |   \
((uint32_t)(unsigned char)(ch0) << 24) )
#define QT_ATOM BE_FOURCC
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
QT_ATOM
#define ATOM_PREAMBLE_SIZE    8
#define COPY_BUFFER_SIZE   33554432
main
