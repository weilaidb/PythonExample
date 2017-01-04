#define AVUTIL_TIMER_H
#if HAVE_MACH_MACH_TIME_H
#if   ARCH_AARCH64
#   include "aarch64/timer.h"
#elif ARCH_ARM
#   include "arm/timer.h"
#elif ARCH_PPC
#   include "ppc/timer.h"
#elif ARCH_X86
#   include "x86/timer.h"
#if !defined(AV_READ_TIME)
#   if HAVE_GETHRTIME
#       define AV_READ_TIME gethrtime
#   elif HAVE_MACH_ABSOLUTE_TIME
#       define AV_READ_TIME mach_absolute_time
#   endif
#   define FF_TIMER_UNITS "UNITS"
#define START_TIMER                             \
uint64_t tend;                              \
uint64_t tstart = AV_READ_TIME();           \
#define STOP_TIMER(id)                                                    \
tend = AV_READ_TIME();                                                \
#define START_TIMER
#define STOP_TIMER(id)
