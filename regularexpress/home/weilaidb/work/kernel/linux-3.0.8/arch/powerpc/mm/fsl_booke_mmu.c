unsigned int tlbcam_index;
#define NUM_TLBCAMS	(64)
struct tlbcam TLBCAM[NUM_TLBCAMS];
struct tlbcamrange  tlbcam_addrs[NUM_TLBCAMS];
extern unsigned int tlbcam_index;
unsigned long tlbcam_sz(int idx)
phys_addr_t v_mapped_by_tlbcam(unsigned long va)
unsigned long p_mapped_by_tlbcam(phys_addr_t pa)
static void settlbcam(int index, unsigned long virt, phys_addr_t phys,
unsigned long size, unsigned long flags, unsigned int pid)
unsigned long map_mem_in_cams(unsigned long ram, int max_cam_idx)
#if defined(CONFIG_LOWMEM_CAM_NUM_BOOL) && (CONFIG_LOWMEM_CAM_NUM >= NUM_TLBCAMS)
#error "LOWMEM_CAM_NUM must be less than NUM_TLBCAMS"
unsigned long __init mmu_mapin_ram(unsigned long top)
void __init MMU_init_hw(void)
void __init adjust_total_lowmem(void)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
