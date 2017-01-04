#define MMU_BASE_VAL_MASK	0xFC00
#define MMU_PAGE_MAX	     3
#define MMU_ELEMENTSIZE_MAX      3
#define MMU_ADDR_MASK	    0xFFFFF000
#define MMU_TTB_MASK	     0xFFFFC000
#define MMU_SECTION_ADDR_MASK    0xFFF00000
#define MMU_SSECTION_ADDR_MASK   0xFF000000
#define MMU_PAGE_TABLE_MASK      0xFFFFFC00
#define MMU_LARGE_PAGE_MASK      0xFFFF0000
#define MMU_SMALL_PAGE_MASK      0xFFFFF000
#define MMU_LOAD_TLB	0x00000001
#define MMU_GFLUSH	0x60
enum hw_mmu_page_size_t ;
static hw_status mmu_flush_entry(const void __iomem *base_address);
static hw_status mmu_set_cam_entry(const void __iomem *base_address,
const u32 page_sz,
const u32 preserved_bit,
const u32 valid_bit,
const u32 virtual_addr_tag);
static hw_status mmu_set_ram_entry(const void __iomem *base_address,
const u32 physical_addr,
enum hw_endianism_t endianism,
enum hw_element_size_t element_size,
enum hw_mmu_mixed_size_t mixed_size);
hw_status hw_mmu_enable(const void __iomem *base_address)
hw_status hw_mmu_disable(const void __iomem *base_address)
hw_status hw_mmu_num_locked_set(const void __iomem *base_address,
u32 num_locked_entries)
hw_status hw_mmu_victim_num_set(const void __iomem *base_address,
u32 victim_entry_num)
hw_status hw_mmu_event_ack(const void __iomem *base_address, u32 irq_mask)
hw_status hw_mmu_event_disable(const void __iomem *base_address, u32 irq_mask)
hw_status hw_mmu_event_enable(const void __iomem *base_address, u32 irq_mask)
hw_status hw_mmu_event_status(const void __iomem *base_address, u32 *irq_mask)
hw_status hw_mmu_fault_addr_read(const void __iomem *base_address, u32 *addr)
hw_status hw_mmu_ttb_set(const void __iomem *base_address, u32 ttb_phys_addr)
hw_status hw_mmu_twl_enable(const void __iomem *base_address)
hw_status hw_mmu_twl_disable(const void __iomem *base_address)
hw_status hw_mmu_tlb_flush(const void __iomem *base_address, u32 virtual_addr,
u32 page_sz)
hw_status hw_mmu_tlb_add(const void __iomem *base_address,
u32 physical_addr,
u32 virtual_addr,
u32 page_sz,
u32 entry_num,
struct hw_mmu_map_attrs_t *map_attrs,
s8 preserved_bit, s8 valid_bit)
hw_status hw_mmu_pte_set(const u32 pg_tbl_va,
u32 physical_addr,
u32 virtual_addr,
u32 page_sz, struct hw_mmu_map_attrs_t *map_attrs)
hw_status hw_mmu_pte_clear(const u32 pg_tbl_va, u32 virtual_addr, u32 page_size)
static hw_status mmu_flush_entry(const void __iomem *base_address)
static hw_status mmu_set_cam_entry(const void __iomem *base_address,
const u32 page_sz,
const u32 preserved_bit,
const u32 valid_bit,
const u32 virtual_addr_tag)
static hw_status mmu_set_ram_entry(const void __iomem *base_address,
const u32 physical_addr,
enum hw_endianism_t endianism,
enum hw_element_size_t element_size,
enum hw_mmu_mixed_size_t mixed_size)
void hw_mmu_tlb_flush_all(const void __iomem *base)
