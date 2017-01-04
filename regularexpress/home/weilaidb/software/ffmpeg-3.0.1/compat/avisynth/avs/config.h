#define AVS_CONFIG_H
#define AVSC_USE_STDCALL 1
#define FRAME_ALIGN 32
#if   defined(_M_AMD64) || defined(__x86_64)
#   define X86_64
#elif defined(_M_IX86) || defined(__i386__)
#   define X86_32
#   error Unsupported CPU architecture.
