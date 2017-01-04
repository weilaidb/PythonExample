static int alpha_core_agp_vm_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
static struct aper_size_info_fixed alpha_core_agp_sizes[] =
;
static const struct vm_operations_struct alpha_core_agp_vm_ops = ;
static int alpha_core_agp_fetch_size(void)
static int alpha_core_agp_configure(void)
static void alpha_core_agp_cleanup(void)
static void alpha_core_agp_tlbflush(struct agp_memory *mem)
static void alpha_core_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static int alpha_core_agp_insert_memory(struct agp_memory *mem, off_t pg_start,
int type)
static int alpha_core_agp_remove_memory(struct agp_memory *mem, off_t pg_start,
int type)
static int alpha_core_agp_create_free_gatt_table(struct agp_bridge_data *a)
struct agp_bridge_driver alpha_core_agp_driver = ;
struct agp_bridge_data *alpha_bridge;
int __init
alpha_core_agp_setup(void)
static int __init agp_alpha_core_init(void)
static void __exit agp_alpha_core_cleanup(void)
module_init(agp_alpha_core_init);
module_exit(agp_alpha_core_cleanup);
MODULE_AUTHOR("Jeff Wiedemeier <Jeff.Wiedemeier@hp.com>");
MODULE_LICENSE("GPL and additional rights");
