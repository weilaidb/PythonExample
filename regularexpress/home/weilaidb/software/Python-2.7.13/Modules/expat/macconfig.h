#define MACCONFIG_H
#define BYTEORDER  4321
#undef HAVE_BCOPY
#define HAVE_MEMMOVE
#undef HAVE_MMAP
#undef HAVE_UNISTD_H
#define WORDS_BIGENDIAN
#undef XML_CONTEXT_BYTES
#define XML_DTD
#define XML_NS
#undef const
#define off_t  long
#undef size_t
