#define _ASM_X86_UV_UV_HUB_H
#define UV_MAX_NUMALINK_BLADES	16384
#define UV_MAX_SSI_BLADES	256
#define UV_MAX_NASID_VALUE	(UV_MAX_NUMALINK_BLADES * 2)
struct uv_scir_s ;
struct uv_hub_info_s ;
DECLARE_PER_CPU(struct uv_hub_info_s, __uv_hub_info);
#define uv_hub_info		(&__get_cpu_var(__uv_hub_info))
#define uv_cpu_hub_info(cpu)	(&per_cpu(__uv_hub_info, cpu))
#define UV1_HUB_REVISION_BASE		1
#define UV2_HUB_REVISION_BASE		3
static inline int is_uv1_hub(void)
static inline int is_uv2_hub(void)
union uvh_apicid ;
#define UV_NASID_TO_PNODE(n)		(((n) >> 1) & uv_hub_info->pnode_mask)
#define UV_PNODE_TO_GNODE(p)		((p) |uv_hub_info->gnode_extra)
#define UV_PNODE_TO_NASID(p)		(UV_PNODE_TO_GNODE(p) << 1)
#define UV1_LOCAL_MMR_BASE		0xf4000000UL
#define UV1_GLOBAL_MMR32_BASE		0xf8000000UL
#define UV1_LOCAL_MMR_SIZE		(64UL * 1024 * 1024)
#define UV1_GLOBAL_MMR32_SIZE		(64UL * 1024 * 1024)
#define UV2_LOCAL_MMR_BASE		0xfa000000UL
#define UV2_GLOBAL_MMR32_BASE		0xfc000000UL
#define UV2_LOCAL_MMR_SIZE		(32UL * 1024 * 1024)
#define UV2_GLOBAL_MMR32_SIZE		(32UL * 1024 * 1024)
#define UV_LOCAL_MMR_BASE		(is_uv1_hub() ? UV1_LOCAL_MMR_BASE     \
: UV2_LOCAL_MMR_BASE)
#define UV_GLOBAL_MMR32_BASE		(is_uv1_hub() ? UV1_GLOBAL_MMR32_BASE  \
: UV2_GLOBAL_MMR32_BASE)
#define UV_LOCAL_MMR_SIZE		(is_uv1_hub() ? UV1_LOCAL_MMR_SIZE :   \
UV2_LOCAL_MMR_SIZE)
#define UV_GLOBAL_MMR32_SIZE		(is_uv1_hub() ? UV1_GLOBAL_MMR32_SIZE :\
UV2_GLOBAL_MMR32_SIZE)
#define UV_GLOBAL_MMR64_BASE		(uv_hub_info->global_mmr_base)
#define UV_GLOBAL_GRU_MMR_BASE		0x4000000
#define UV_GLOBAL_MMR32_PNODE_SHIFT	15
#define UV_GLOBAL_MMR64_PNODE_SHIFT	26
#define UV_GLOBAL_MMR32_PNODE_BITS(p)	((p) << (UV_GLOBAL_MMR32_PNODE_SHIFT))
#define UV_GLOBAL_MMR64_PNODE_BITS(p)					\
(((unsigned long)(p)) << UV_GLOBAL_MMR64_PNODE_SHIFT)
#define UVH_APICID		0x002D0E00L
#define UV_APIC_PNODE_SHIFT	6
#define UV_APICID_HIBIT_MASK	0xffff0000
#define LOCAL_BUS_BASE		0x1c00000
#define LOCAL_BUS_SIZE		(4 * 1024 * 1024)
#define SCIR_WINDOW_COUNT	64
#define SCIR_LOCAL_MMR_BASE	(LOCAL_BUS_BASE + \
LOCAL_BUS_SIZE - \
SCIR_WINDOW_COUNT)
#define SCIR_CPU_HEARTBEAT	0x01
#define SCIR_CPU_ACTIVITY	0x02
#define SCIR_CPU_HB_INTERVAL	(HZ)
#define for_each_possible_blade(bid)		\
for ((bid) = 0; (bid) < uv_num_possible_blades(); (bid)++)
static inline unsigned long uv_soc_phys_ram_to_gpa(unsigned long paddr)
static inline unsigned long uv_gpa(void *v)
static inline int
uv_gpa_in_mmr_space(unsigned long gpa)
static inline unsigned long uv_gpa_to_soc_phys_ram(unsigned long gpa)
static inline unsigned long uv_gpa_to_gnode(unsigned long gpa)
static inline int uv_gpa_to_pnode(unsigned long gpa)
static inline void *uv_pnode_offset_to_vaddr(int pnode, unsigned long offset)
static inline int uv_apicid_to_pnode(int apicid)
static inline int uv_apicid_to_socket(int apicid)
static inline unsigned long *uv_global_mmr32_address(int pnode, unsigned long offset)
static inline void uv_write_global_mmr32(int pnode, unsigned long offset, unsigned long val)
static inline unsigned long uv_read_global_mmr32(int pnode, unsigned long offset)
static inline volatile void __iomem *uv_global_mmr64_address(int pnode, unsigned long offset)
static inline void uv_write_global_mmr64(int pnode, unsigned long offset, unsigned long val)
static inline unsigned long uv_read_global_mmr64(int pnode, unsigned long offset)
static inline unsigned long uv_global_gru_mmr_address(int pnode, unsigned long offset)
static inline void uv_write_global_mmr8(int pnode, unsigned long offset, unsigned char val)
static inline unsigned char uv_read_global_mmr8(int pnode, unsigned long offset)
static inline unsigned long *uv_local_mmr_address(unsigned long offset)
static inline unsigned long uv_read_local_mmr(unsigned long offset)
static inline void uv_write_local_mmr(unsigned long offset, unsigned long val)
static inline unsigned char uv_read_local_mmr8(unsigned long offset)
static inline void uv_write_local_mmr8(unsigned long offset, unsigned char val)
struct uv_blade_info ;
extern struct uv_blade_info *uv_blade_info;
extern short *uv_node_to_blade;
extern short *uv_cpu_to_blade;
extern short uv_possible_blades;
static inline int uv_blade_processor_id(void)
static inline int uv_numa_blade_id(void)
static inline int uv_cpu_to_blade_id(int cpu)
static inline int uv_node_to_blade_id(int nid)
static inline int uv_blade_to_pnode(int bid)
static inline int uv_blade_to_memory_nid(int bid)
static inline int uv_blade_nr_possible_cpus(int bid)
static inline int uv_blade_nr_online_cpus(int bid)
static inline int uv_cpu_to_pnode(int cpu)
static inline int uv_node_to_pnode(int nid)
static inline int uv_num_possible_blades(void)
static inline void uv_set_scir_bits(unsigned char value)
static inline unsigned long uv_scir_offset(int apicid)
static inline void uv_set_cpu_scir_bits(int cpu, unsigned char value)
extern unsigned int uv_apicid_hibits;
static unsigned long uv_hub_ipi_value(int apicid, int vector, int mode)
static inline void uv_hub_send_ipi(int pnode, int apicid, int vector)
static inline int uv_get_min_hub_revision_id(void)
