#define __ASM_S390_SYSINFO_H
struct sysinfo_1_1_1 ;
struct sysinfo_1_2_1 ;
struct sysinfo_1_2_2 ;
struct sysinfo_1_2_2_extension ;
struct sysinfo_2_2_1 ;
struct sysinfo_2_2_2 ;
#define LPAR_CHAR_DEDICATED	(1 << 7)
#define LPAR_CHAR_SHARED	(1 << 6)
#define LPAR_CHAR_LIMITED	(1 << 5)
struct sysinfo_3_2_2 ;
#define TOPOLOGY_CPU_BITS	64
#define TOPOLOGY_NR_MAG		6
struct topology_cpu ;
struct topology_container ;
union topology_entry ;
struct sysinfo_15_1_x ;
static inline int stsi(void *sysinfo, int fc, int sel1, int sel2)
struct service_level ;
int register_service_level(struct service_level *);
int unregister_service_level(struct service_level *);
