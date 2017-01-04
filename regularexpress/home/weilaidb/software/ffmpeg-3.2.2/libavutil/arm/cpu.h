#define AVUTIL_ARM_CPU_H
#define have_armv5te(flags) CPUEXT(flags, ARMV5TE)
#define have_armv6(flags)   CPUEXT(flags, ARMV6)
#define have_armv6t2(flags) CPUEXT(flags, ARMV6T2)
#define have_vfp(flags)     CPUEXT(flags, VFP)
#define have_vfpv3(flags)   CPUEXT(flags, VFPV3)
#define have_neon(flags)    CPUEXT(flags, NEON)
#define have_setend(flags)  CPUEXT(flags, SETEND)
#define have_vfp_vm(flags)                                              \
(HAVE_VFP && ((flags) & AV_CPU_FLAG_VFP_VM))
