#define SHMSYNCOFFSET 4
#define BUFFERSIZE 1024
#define TIHELEN_ACKTIMEOUT  10000
#define MMU_SECTION_ADDR_MASK    0xFFF00000
#define MMU_SSECTION_ADDR_MASK   0xFF000000
#define MMU_LARGE_PAGE_MASK      0xFFFF0000
#define MMU_SMALL_PAGE_MASK      0xFFFFF000
#define OMAP3_IVA2_BOOTADDR_MASK 0xFFFFFC00
#define PAGES_II_LVL_TABLE   512
#define PHYS_TO_PAGE(phys)      pfn_to_page((phys) >> PAGE_SHIFT)
#define OMAP3_IVA2_BOOTMOD_IDLE 1
#define OMAP2_CONTROL_GENERAL 0x270
#define OMAP343X_CONTROL_IVA2_BOOTADDR (OMAP2_CONTROL_GENERAL + 0x0190)
#define OMAP343X_CONTROL_IVA2_BOOTMOD (OMAP2_CONTROL_GENERAL + 0x0194)
#define OMAP343X_CTRL_REGADDR(reg) \
OMAP2_L4_IO_ADDRESS(OMAP343X_CTRL_BASE + (reg))
static int bridge_brd_monitor(struct bridge_dev_context *dev_ctxt);
static int bridge_brd_read(struct bridge_dev_context *dev_ctxt,
u8 *host_buff,
u32 dsp_addr, u32 ul_num_bytes,
u32 mem_type);
static int bridge_brd_start(struct bridge_dev_context *dev_ctxt,
u32 dsp_addr);
static int bridge_brd_status(struct bridge_dev_context *dev_ctxt,
int *board_state);
static int bridge_brd_stop(struct bridge_dev_context *dev_ctxt);
static int bridge_brd_write(struct bridge_dev_context *dev_ctxt,
u8 *host_buff,
u32 dsp_addr, u32 ul_num_bytes,
u32 mem_type);
static int bridge_brd_set_state(struct bridge_dev_context *dev_ctxt,
u32 brd_state);
static int bridge_brd_mem_copy(struct bridge_dev_context *dev_ctxt,
u32 dsp_dest_addr, u32 dsp_src_addr,
u32 ul_num_bytes, u32 mem_type);
static int bridge_brd_mem_write(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type);
static int bridge_brd_mem_map(struct bridge_dev_context *dev_ctxt,
u32 ul_mpu_addr, u32 virt_addr,
u32 ul_num_bytes, u32 ul_map_attr,
struct page **mapped_pages);
static int bridge_brd_mem_un_map(struct bridge_dev_context *dev_ctxt,
u32 virt_addr, u32 ul_num_bytes);
static int bridge_dev_create(struct bridge_dev_context
**dev_cntxt,
struct dev_object *hdev_obj,
struct cfg_hostres *config_param);
static int bridge_dev_ctrl(struct bridge_dev_context *dev_context,
u32 dw_cmd, void *pargs);
static int bridge_dev_destroy(struct bridge_dev_context *dev_ctxt);
static u32 user_va2_pa(struct mm_struct *mm, u32 address);
static int pte_update(struct bridge_dev_context *dev_ctxt, u32 pa,
u32 va, u32 size,
struct hw_mmu_map_attrs_t *map_attrs);
static int pte_set(struct pg_table_attrs *pt, u32 pa, u32 va,
u32 size, struct hw_mmu_map_attrs_t *attrs);
static int mem_map_vmalloc(struct bridge_dev_context *dev_context,
u32 ul_mpu_addr, u32 virt_addr,
u32 ul_num_bytes,
struct hw_mmu_map_attrs_t *hw_attrs);
bool wait_for_start(struct bridge_dev_context *dev_context, u32 dw_sync_addr);
struct page_info ;
struct pg_table_attrs ;
static struct bridge_drv_interface drv_interface_fxns = ;
static struct notifier_block dsp_mbox_notifier = ;
static inline void flush_all(struct bridge_dev_context *dev_context)
static void bad_page_dump(u32 pa, struct page *pg)
void bridge_drv_entry(struct bridge_drv_interface **drv_intf,
const char *driver_file_name)
static int bridge_brd_monitor(struct bridge_dev_context *dev_ctxt)
static int bridge_brd_read(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type)
static int bridge_brd_set_state(struct bridge_dev_context *dev_ctxt,
u32 brd_state)
static int bridge_brd_start(struct bridge_dev_context *dev_ctxt,
u32 dsp_addr)
static int bridge_brd_stop(struct bridge_dev_context *dev_ctxt)
static int bridge_brd_status(struct bridge_dev_context *dev_ctxt,
int *board_state)
static int bridge_brd_write(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type)
static int bridge_dev_create(struct bridge_dev_context
**dev_cntxt,
struct dev_object *hdev_obj,
struct cfg_hostres *config_param)
static int bridge_dev_ctrl(struct bridge_dev_context *dev_context,
u32 dw_cmd, void *pargs)
static int bridge_dev_destroy(struct bridge_dev_context *dev_ctxt)
static int bridge_brd_mem_copy(struct bridge_dev_context *dev_ctxt,
u32 dsp_dest_addr, u32 dsp_src_addr,
u32 ul_num_bytes, u32 mem_type)
static int bridge_brd_mem_write(struct bridge_dev_context *dev_ctxt,
u8 *host_buff, u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type)
static int bridge_brd_mem_map(struct bridge_dev_context *dev_ctxt,
u32 ul_mpu_addr, u32 virt_addr,
u32 ul_num_bytes, u32 ul_map_attr,
struct page **mapped_pages)
static int bridge_brd_mem_un_map(struct bridge_dev_context *dev_ctxt,
u32 virt_addr, u32 ul_num_bytes)
static u32 user_va2_pa(struct mm_struct *mm, u32 address)
static int pte_update(struct bridge_dev_context *dev_ctxt, u32 pa,
u32 va, u32 size,
struct hw_mmu_map_attrs_t *map_attrs)
static int pte_set(struct pg_table_attrs *pt, u32 pa, u32 va,
u32 size, struct hw_mmu_map_attrs_t *attrs)
static int mem_map_vmalloc(struct bridge_dev_context *dev_context,
u32 ul_mpu_addr, u32 virt_addr,
u32 ul_num_bytes,
struct hw_mmu_map_attrs_t *hw_attrs)
bool wait_for_start(struct bridge_dev_context *dev_context, u32 dw_sync_addr)
