#define _HW_MMU_H
#define HW_MMU_TRANSLATION_FAULT   0x2
#define HW_MMU_ALL_INTERRUPTS      0x1F
#define HW_MMU_COARSE_PAGE_SIZE 0x400
enum hw_mmu_mixed_size_t ;
struct hw_mmu_map_attrs_t ;
extern hw_status hw_mmu_enable(const void __iomem *base_address);
extern hw_status hw_mmu_disable(const void __iomem *base_address);
extern hw_status hw_mmu_num_locked_set(const void __iomem *base_address,
u32 num_locked_entries);
extern hw_status hw_mmu_victim_num_set(const void __iomem *base_address,
u32 victim_entry_num);
extern hw_status hw_mmu_event_ack(const void __iomem *base_address,
u32 irq_mask);
extern hw_status hw_mmu_event_disable(const void __iomem *base_address,
u32 irq_mask);
extern hw_status hw_mmu_event_enable(const void __iomem *base_address,
u32 irq_mask);
extern hw_status hw_mmu_event_status(const void __iomem *base_address,
u32 *irq_mask);
extern hw_status hw_mmu_fault_addr_read(const void __iomem *base_address,
u32 *addr);
extern hw_status hw_mmu_ttb_set(const void __iomem *base_address,
u32 ttb_phys_addr);
extern hw_status hw_mmu_twl_enable(const void __iomem *base_address);
extern hw_status hw_mmu_twl_disable(const void __iomem *base_address);
extern hw_status hw_mmu_tlb_flush(const void __iomem *base_address,
u32 virtual_addr, u32 page_sz);
extern hw_status hw_mmu_tlb_add(const void __iomem *base_address,
u32 physical_addr,
u32 virtual_addr,
u32 page_sz,
u32 entry_num,
struct hw_mmu_map_attrs_t *map_attrs,
s8 preserved_bit, s8 valid_bit);
extern hw_status hw_mmu_pte_set(const u32 pg_tbl_va,
u32 physical_addr,
u32 virtual_addr,
u32 page_sz,
struct hw_mmu_map_attrs_t *map_attrs);
extern hw_status hw_mmu_pte_clear(const u32 pg_tbl_va,
u32 virtual_addr, u32 page_size);
void hw_mmu_tlb_flush_all(const void __iomem *base);
static inline u32 hw_mmu_pte_addr_l1(u32 l1_base, u32 va)
static inline u32 hw_mmu_pte_addr_l2(u32 l2_base, u32 va)
static inline u32 hw_mmu_pte_coarse_l1(u32 pte_val)
static inline u32 hw_mmu_pte_size_l1(u32 pte_val)
static inline u32 hw_mmu_pte_size_l2(u32 pte_val)
