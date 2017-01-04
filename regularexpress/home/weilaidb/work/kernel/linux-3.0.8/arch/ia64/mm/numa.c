int num_node_memblks;
struct node_memblk_s node_memblk[NR_NODE_MEMBLKS];
struct node_cpuid_s node_cpuid[NR_CPUS] =
;
u8 numa_slit[MAX_NUMNODES * MAX_NUMNODES];
int
paddr_to_nid(unsigned long paddr)
#if defined(CONFIG_SPARSEMEM) && defined(CONFIG_NUMA)
int __meminit __early_pfn_to_nid(unsigned long pfn)
int memory_add_physaddr_to_nid(u64 addr)
EXPORT_SYMBOL_GPL(memory_add_physaddr_to_nid);
