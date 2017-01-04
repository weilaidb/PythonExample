#define _ASM_X86_MMCONFIG_H
extern void __cpuinit fam10h_check_enable_mmcfg(void);
extern void __cpuinit check_enable_amd_mmconf_dmi(void);
static inline void fam10h_check_enable_mmcfg(void)
static inline void check_enable_amd_mmconf_dmi(void)
