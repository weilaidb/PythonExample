#define AVUTIL_CPU_INTERNAL_H
CPUEXT_SUFFIX                            \
(HAVE_ ## cpuext ## suffix && ((flags) & AV_CPU_FLAG_ ## cpuext))
CPUEXT_SUFFIX_FAST2         \
(HAVE_ ## cpuext ## suffix && ((flags) & AV_CPU_FLAG_ ## cpuext) && \
!((flags) & AV_CPU_FLAG_ ## slow_cpuext ## SLOW))
CPUEXT_SUFFIX_SLOW2         \
(HAVE_ ## cpuext ## suffix && ((flags) & AV_CPU_FLAG_ ## cpuext) && \
((flags) & AV_CPU_FLAG_ ## slow_cpuext ## SLOW))
CPUEXT_SUFFIX_FAST CPUEXT_SUFFIX_FAST2(flags, suffix, cpuext, cpuext)
CPUEXT_SUFFIX_SLOW CPUEXT_SUFFIX_SLOW2(flags, suffix, cpuext, cpuext)
CPUEXT CPUEXT_SUFFIX(flags, , cpuext)
CPUEXT_FAST CPUEXT_SUFFIX_FAST(flags, , cpuext)
CPUEXT_SLOW CPUEXT_SUFFIX_SLOW(flags, , cpuext)
ff_get_cpu_flags_aarch64;
ff_get_cpu_flags_arm;
ff_get_cpu_flags_ppc;
ff_get_cpu_flags_x86;
