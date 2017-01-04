#define _ASM_SN_ARCH_H
typedef u64	hubreg_t;
#define cputonasid(cpu)		(sn_cpu_info[(cpu)].p_nasid)
#define cputoslice(cpu)		(sn_cpu_info[(cpu)].p_slice)
#define makespnum(_nasid, _slice)					\
(((_nasid) << CPUS_PER_NODE_SHFT) | (_slice))
#define INVALID_NASID		(nasid_t)-1
#define INVALID_CNODEID		(cnodeid_t)-1
#define INVALID_PNODEID		(pnodeid_t)-1
#define INVALID_MODULE		(moduleid_t)-1
#define	INVALID_PARTID		(partid_t)-1
extern nasid_t get_nasid(void);
extern cnodeid_t get_cpu_cnode(cpuid_t);
extern int get_cpu_slice(cpuid_t);
extern cnodeid_t nasid_to_compact_node[MAX_NASIDS];
extern nasid_t compact_to_nasid_node[MAX_COMPACT_NODES];
#define	NASID_TO_REGION(nnode)	      	\
((nnode) >> \
(is_fine_dirmode() ? NASID_TO_FINEREG_SHFT : NASID_TO_COARSEREG_SHFT))
extern cnodeid_t nasid_to_compact_node[MAX_NASIDS];
extern nasid_t compact_to_nasid_node[MAX_COMPACT_NODES];
extern cnodeid_t cpuid_to_compact_node[MAXCPUS];
#define NASID_TO_COMPACT_NODEID(nnode)	(nasid_to_compact_node[nnode])
#define COMPACT_TO_NASID_NODEID(cnode)	(compact_to_nasid_node[cnode])
#define CPUID_TO_COMPACT_NODEID(cpu)	(cpuid_to_compact_node[(cpu)])
