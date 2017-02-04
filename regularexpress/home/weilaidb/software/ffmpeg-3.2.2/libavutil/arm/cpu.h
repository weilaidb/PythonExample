#define AVUTIL_ARM_CPU_H
have_armv5te CPUEXT(flags, ARMV5TE)
have_armv6   CPUEXT(flags, ARMV6)
have_armv6t2 CPUEXT(flags, ARMV6T2)
have_vfp     CPUEXT(flags, VFP)
have_vfpv3   CPUEXT(flags, VFPV3)
have_neon    CPUEXT(flags, NEON)
have_setend  CPUEXT(flags, SETEND)
have_vfp_vm                                              \
(HAVE_VFP && ((flags) & AV_CPU_FLAG_VFP_VM))
