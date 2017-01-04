#define _ASM_IA64_SN_ARCH_H
#define MAX_TIO_NODES		MAX_NUMNODES
#define MAX_COMPACT_NODES	(MAX_NUMNODES + MAX_TIO_NODES)
#define MAX_NUMALINK_NODES	16384
struct sn_hub_info_s ;
DECLARE_PER_CPU(struct sn_hub_info_s, __sn_hub_info);
#define sn_hub_info 	(&__get_cpu_var(__sn_hub_info))
#define is_shub2()	(sn_hub_info->shub2)
#define is_shub1()	(sn_hub_info->shub2 == 0)
#define enable_shub_wars_1_1()	(sn_hub_info->shub_1_1_found)
DECLARE_PER_CPU(short, __sn_cnodeid_to_nasid[MAX_COMPACT_NODES]);
#define sn_cnodeid_to_nasid	(&__get_cpu_var(__sn_cnodeid_to_nasid[0]))
extern u8 sn_partition_id;
extern u8 sn_system_size;
extern u8 sn_sharing_domain_size;
extern u8 sn_region_size;
extern void sn_flush_all_caches(long addr, long bytes);
extern bool sn_cpu_disable_allowed(int cpu);
