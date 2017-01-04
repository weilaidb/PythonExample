#define DRV_
struct drv_object;
#define OMAP_GEM_BASE   0x107F8000
#define OMAP_DSP_SIZE   0x00720000
#define OMAP_DSP_MEM1_BASE 0x5C7F8000
#define OMAP_DSP_MEM1_SIZE 0x18000
#define OMAP_DSP_MEM2_BASE 0x5CE00000
#define OMAP_DSP_MEM2_SIZE 0x8000
#define OMAP_DSP_MEM3_BASE 0x5CF04000
#define OMAP_DSP_MEM3_SIZE 0x14000
#define OMAP_PER_CM_BASE 0x48005000
#define OMAP_PER_CM_SIZE 0x1000
#define OMAP_PER_PRM_BASE 0x48307000
#define OMAP_PER_PRM_SIZE 0x1000
#define OMAP_CORE_PRM_BASE 0x48306A00
#define OMAP_CORE_PRM_SIZE 0x1000
#define OMAP_DMMU_BASE 0x5D000000
#define OMAP_DMMU_SIZE 0x1000
struct node_res_object ;
struct bridge_dma_map_info ;
struct dmm_map_object ;
struct dmm_rsv_object ;
struct strm_res_object ;
enum gpp_proc_res_state ;
struct drv_data ;
struct process_context ;
extern int drv_create(struct drv_object **drv_obj);
extern int drv_destroy(struct drv_object *driver_obj);
extern void drv_exit(void);
extern u32 drv_get_first_dev_object(void);
extern u32 drv_get_first_dev_extension(void);
extern int drv_get_dev_object(u32 index,
struct drv_object *hdrv_obj,
struct dev_object **device_obj);
extern u32 drv_get_next_dev_object(u32 hdev_obj);
extern u32 drv_get_next_dev_extension(u32 dev_extension);
extern int drv_init(void);
extern int drv_insert_dev_object(struct drv_object *driver_obj,
struct dev_object *hdev_obj);
extern int drv_remove_dev_object(struct drv_object *driver_obj,
struct dev_object *hdev_obj);
extern int drv_request_resources(u32 dw_context,
u32 *dev_node_strg);
extern int drv_release_resources(u32 dw_context,
struct drv_object *hdrv_obj);
int drv_request_bridge_res_dsp(void **phost_resources);
void bridge_recover_schedule(void);
extern void mem_ext_phys_pool_init(u32 pool_phys_base, u32 pool_size);
extern void mem_ext_phys_pool_release(void);
extern void *mem_alloc_phys_mem(u32 byte_size,
u32 align_mask, u32 *physical_address);
extern void mem_free_phys_mem(void *virtual_address,
u32 physical_address, u32 byte_size);
#define MEM_LINEAR_ADDRESS(phy_addr, byte_size) phy_addr
#define MEM_UNMAP_LINEAR_ADDRESS(base_addr)
