#define __ASM_ARCH_CPU_H__
#define IXP42X_PROCESSOR_ID_VALUE	0x690541c0
#define IXP42X_PROCESSOR_ID_MASK	0xffffffc0
#define IXP43X_PROCESSOR_ID_VALUE	0x69054040
#define IXP43X_PROCESSOR_ID_MASK	0xfffffff0
#define IXP46X_PROCESSOR_ID_VALUE	0x69054200
#define IXP46X_PROCESSOR_ID_MASK	0xfffffff0
#define cpu_is_ixp42x_rev_a0() ((read_cpuid_id() & (IXP42X_PROCESSOR_ID_MASK | 0xF)) == \
IXP42X_PROCESSOR_ID_VALUE)
#define cpu_is_ixp42x()	((read_cpuid_id() & IXP42X_PROCESSOR_ID_MASK) == \
IXP42X_PROCESSOR_ID_VALUE)
#define cpu_is_ixp43x()	((read_cpuid_id() & IXP43X_PROCESSOR_ID_MASK) == \
IXP43X_PROCESSOR_ID_VALUE)
#define cpu_is_ixp46x()	((read_cpuid_id() & IXP46X_PROCESSOR_ID_MASK) == \
IXP46X_PROCESSOR_ID_VALUE)
static inline u32 ixp4xx_read_feature_bits(void)
static inline void ixp4xx_write_feature_bits(u32 value)
