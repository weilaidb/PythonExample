#define EH_FRAME_FLAGS "a"
#define HAVE_ALLOCA 1
#define HAVE_ALLOCA_H 1
#define HAVE_AS_ASCII_PSEUDO_OP 1
#define HAVE_AS_CFI_PSEUDO_OP 1
#define HAVE_AS_STRING_PSEUDO_OP 1
#define HAVE_AS_X86_PCREL 1
#define HAVE_DLFCN_H 1
#define HAVE_HIDDEN_VISIBILITY_ATTRIBUTE 1
#define HAVE_INTTYPES_H 1
#define HAVE_LONG_DOUBLE 1
#define HAVE_MEMCPY 1
#define HAVE_MEMORY_H 1
#define HAVE_MMAP 1
#define HAVE_MMAP_ANON 1
#define HAVE_MMAP_DEV_ZERO 1
#define HAVE_MMAP_FILE 1
#define HAVE_RO_EH_FRAME 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_MMAN_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define LT_OBJDIR ".libs/"
#define PACKAGE "libffi"
#define PACKAGE_BUGREPORT "http:
#define PACKAGE_NAME "libffi"
#define PACKAGE_STRING "libffi 3.1"
#define PACKAGE_TARNAME "libffi"
#define PACKAGE_URL ""
#define PACKAGE_VERSION "3.1"
#define SIZEOF_DOUBLE 8
#define SIZEOF_LONG_DOUBLE 12
#define SIZEOF_SIZE_T 4
#define STDC_HEADERS 1
#define VERSION "3.1"
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
# ifndef WORDS_BIGENDIAN
# endif
#define FFI_HIDDEN(name) .hidden name
#define FFI_HIDDEN __attribute__ ((visibility ("hidden")))
#define FFI_HIDDEN(name)
#define FFI_HIDDEN
