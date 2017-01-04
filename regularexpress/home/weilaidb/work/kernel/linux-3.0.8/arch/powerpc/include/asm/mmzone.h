#define _ASM_MMZONE_H_
extern struct pglist_data *node_data[];
#define NODE_DATA(nid)		(node_data[nid])
extern int numa_cpu_lookup_table[];
extern cpumask_var_t node_to_cpumask_map[];
extern unsigned long max_pfn;
u64 memory_hotplug_max(void);
#define memory_hotplug_max() memblock_end_of_DRAM()
#define memory_hotplug_max() memblock_end_of_DRAM()
