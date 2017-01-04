#define _ASM_X86_AMD_NB_H
struct amd_nb_bus_dev_range ;
extern const struct pci_device_id amd_nb_misc_ids[];
extern const struct amd_nb_bus_dev_range amd_nb_bus_dev_ranges[];
extern bool early_is_amd_nb(u32 value);
extern int amd_cache_northbridges(void);
extern void amd_flush_garts(void);
extern int amd_numa_init(void);
extern int amd_get_subcaches(int);
extern int amd_set_subcaches(int, int);
struct amd_northbridge ;
struct amd_northbridge_info ;
extern struct amd_northbridge_info amd_northbridges;
#define AMD_NB_GART			BIT(0)
#define AMD_NB_L3_INDEX_DISABLE		BIT(1)
#define AMD_NB_L3_PARTITIONING		BIT(2)
static inline u16 amd_nb_num(void)
static inline bool amd_nb_has_feature(unsigned feature)
static inline struct amd_northbridge *node_to_amd_nb(int node)
#define amd_nb_num(x)		0
#define amd_nb_has_feature(x)	false
#define node_to_amd_nb(x)	NULL
