#define _ASM_IA64_SN_FEATURE_SETS_H
extern int sn_prom_feature_available(int id);
#define MAX_PROM_FEATURE_SETS			2
#define PRF_PAL_CACHE_FLUSH_SAFE	0
#define PRF_DEVICE_FLUSH_LIST		1
#define PRF_HOTPLUG_SUPPORT		2
#define PRF_CPU_DISABLE_SUPPORT		3
#define  OSF_MCA_SLV_TO_OS_INIT_SLV	0
#define  OSF_FEAT_LOG_SBES		1
#define  OSF_ACPI_ENABLE		2
#define  OSF_PCISEGMENT_ENABLE		3
