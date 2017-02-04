#define AVS_CONFIG_H
#define AVSC_USE_STDCALL 1
#define FRAME_ALIGN 32
defined || defined(__x86_64)
#   define X86_64
defined || defined(__i386__)
#   define X86_32
#   error Unsupported CPU architecture.
