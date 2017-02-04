#define AVUTIL_TIMER_H
#if HAVE_MACH_MACH_TIME_H
#if   ARCH_AARCH64
#   include
#elif ARCH_ARM
#   include
#elif ARCH_PPC
#   include
#elif ARCH_X86
#   include
#if !defined(AV_READ_TIME)
#   if HAVE_GETHRTIME
#       define AV_READ_TIME gethrtime
#   elif HAVE_MACH_ABSOLUTE_TIME
#       define AV_READ_TIME mach_absolute_time
#   endif
#   define FF_TIMER_UNITS
#define START_TIMER                             \
uint64_t tend;                              \
uint64_t tstart = AV_READ_TIME();           \
STOP_TIMER                                                    \
tend = AV_READ_TIME();                                                \
#define START_TIMER
STOP_TIMER
