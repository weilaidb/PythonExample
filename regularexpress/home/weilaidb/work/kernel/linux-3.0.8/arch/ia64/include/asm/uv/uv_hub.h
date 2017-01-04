#define __ASM_IA64_UV_HUB_H__
#define UV_MAX_NUMALINK_BLADES	16384
#define UV_MAX_SSI_BLADES	1
#define UV_MAX_NASID_VALUE	(UV_MAX_NUMALINK_NODES * 2)
struct uv_hub_info_s ;
DECLARE_PER_CPU(struct uv_hub_info_s, __uv_hub_info);
#define uv_hub_info 		(&__get_cpu_var(__uv_hub_info))
#define uv_cpu_hub_info(cpu)	(&per_cpu(__uv_hub_info, cpu))
#define UV_NASID_TO_PNODE(n)		(((n) >> 1) & uv_hub_info->pnode_mask)
#define UV_PNODE_TO_NASID(p)		(((p) << 1) | uv_hub_info->gnode_upper)
#define UV_LOCAL_MMR_BASE		0xf4000000UL
#define UV_GLOBAL_MMR32_BASE		0xf8000000UL
#define UV_GLOBAL_MMR64_BASE		(uv_hub_info->global_mmr_base)
#define UV_GLOBAL_MMR32_PNODE_SHIFT	15
#define UV_GLOBAL_MMR64_PNODE_SHIFT	26
#define UV_GLOBAL_MMR32_PNODE_BITS(p)	((p) << (UV_GLOBAL_MMR32_PNODE_SHIFT))
#define UV_GLOBAL_MMR64_PNODE_BITS(p)					\
((unsigned long)(p) << UV_GLOBAL_MMR64_PNODE_SHIFT)
static inline unsigned long uv_soc_phys_ram_to_gpa(unsigned long paddr)
static inline unsigned long uv_gpa(void *v)
static inline void *uv_vgpa(void *v)
static inline void *uv_va(unsigned long gpa)
static inline void *uv_pnode_offset_to_vaddr(int pnode, unsigned long offset)
static inline unsigned long *uv_global_mmr32_address(int pnode,
unsigned long offset)
static inline void uv_write_global_mmr32(int pnode, unsigned long offset,
unsigned long val)
static inline unsigned long uv_read_global_mmr32(int pnode,
unsigned long offset)
static inline unsigned long *uv_global_mmr64_address(int pnode,
unsigned long offset)
static inline void uv_write_global_mmr64(int pnode, unsigned long offset,
unsigned long val)
static inline unsigned long uv_read_global_mmr64(int pnode,
unsigned long offset)
static inline unsigned long *uv_local_mmr_address(unsigned long offset)
static inline unsigned long uv_read_local_mmr(unsigned long offset)
static inline void uv_write_local_mmr(unsigned long offset, unsigned long val)
static inline int uv_blade_processor_id(void)
static inline int uv_numa_blade_id(void)
static inline int uv_cpu_to_blade_id(int cpu)
static inline int uv_node_to_blade_id(int nid)
static inline int uv_blade_to_pnode(int bid)
static inline int uv_blade_nr_possible_cpus(int bid)
static inline int uv_blade_nr_online_cpus(int bid)
static inline int uv_cpu_to_pnode(int cpu)
static inline int uv_node_to_pnode(int nid)
static inline int uv_num_possible_blades(void)
static inline void uv_hub_send_ipi(int pnode, int apicid, int vector)
