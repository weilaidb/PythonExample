#define CORE_FLAG(f) \
(AV_CPU_FLAG_ ## f * (HAVE_ ## f ## _EXTERNAL || HAVE_ ## f ## _INLINE))
#define CORE_CPU_FLAGS                          \
(CORE_FLAG(ARMV5TE) |                       \
CORE_FLAG(ARMV6)   |                       \
CORE_FLAG(ARMV6T2) |                       \
CORE_FLAG(VFP)     |                       \
CORE_FLAG(VFPV3)   |                       \
CORE_FLAG(NEON))
#if defined __linux__ || defined __ANDROID__
#define AT_HWCAP        16
#define HWCAP_VFP       (1 << 6)
#define HWCAP_EDSP      (1 << 7)
#define HWCAP_THUMBEE   (1 << 11)
#define HWCAP_NEON      (1 << 12)
#define HWCAP_VFPv3     (1 << 13)
#define HWCAP_TLS       (1 << 15)
static int get_hwcap(uint32_t *hwcap)
static int get_cpuinfo(uint32_t *hwcap)
int ff_get_cpu_flags_arm(void)
int ff_get_cpu_flags_arm(void)
