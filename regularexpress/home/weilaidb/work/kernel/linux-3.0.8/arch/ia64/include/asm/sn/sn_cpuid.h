#define _ASM_IA64_SN_SN_CPUID_H
#define get_node_number(addr)			NASID_GET(addr)
extern short physical_node_map[];
#define get_nasid()	(sn_nodepda->phys_cpuid[smp_processor_id()].nasid)
#define get_subnode()	(sn_nodepda->phys_cpuid[smp_processor_id()].subnode)
#define get_slice()	(sn_nodepda->phys_cpuid[smp_processor_id()].slice)
#define get_cnode()	(sn_nodepda->phys_cpuid[smp_processor_id()].cnode)
#define get_sapicid()	((ia64_getreg(_IA64_REG_CR_LID) >> 16) & 0xffff)
#define cpuid_to_nasid(cpuid)		(sn_nodepda->phys_cpuid[cpuid].nasid)
#define cpuid_to_subnode(cpuid)		(sn_nodepda->phys_cpuid[cpuid].subnode)
#define cpuid_to_slice(cpuid)		(sn_nodepda->phys_cpuid[cpuid].slice)
extern int nasid_slice_to_cpuid(int, int);
#define cnodeid_to_nasid(cnodeid)	(sn_cnodeid_to_nasid[cnodeid])
#define nasid_to_cnodeid(nasid)		(physical_node_map[nasid])
extern u8 sn_coherency_id;
#define partition_coherence_id()	(sn_coherency_id)
