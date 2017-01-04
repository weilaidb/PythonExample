#define _AGP_BACKEND_H 1
enum chipset_type ;
struct agp_version ;
struct agp_kern_info ;
struct agp_bridge_data;
struct agp_memory ;
#define AGP_NORMAL_MEMORY 0
#define AGP_USER_TYPES (1 << 16)
#define AGP_USER_MEMORY (AGP_USER_TYPES)
#define AGP_USER_CACHED_MEMORY (AGP_USER_TYPES + 1)
extern struct agp_bridge_data *agp_bridge;
extern struct list_head agp_bridges;
extern struct agp_bridge_data *(*agp_find_bridge)(struct pci_dev *);
extern void agp_free_memory(struct agp_memory *);
extern struct agp_memory *agp_allocate_memory(struct agp_bridge_data *, size_t, u32);
extern int agp_copy_info(struct agp_bridge_data *, struct agp_kern_info *);
extern int agp_bind_memory(struct agp_memory *, off_t);
extern int agp_unbind_memory(struct agp_memory *);
extern void agp_enable(struct agp_bridge_data *, u32);
extern struct agp_bridge_data *agp_backend_acquire(struct pci_dev *);
extern void agp_backend_release(struct agp_bridge_data *);
