#define _AGP_COMPAT_IOCTL_H
#define AGPIOC_INFO32       _IOR (AGPIOC_BASE, 0, compat_uptr_t)
#define AGPIOC_ACQUIRE32    _IO  (AGPIOC_BASE, 1)
#define AGPIOC_RELEASE32    _IO  (AGPIOC_BASE, 2)
#define AGPIOC_SETUP32      _IOW (AGPIOC_BASE, 3, compat_uptr_t)
#define AGPIOC_RESERVE32    _IOW (AGPIOC_BASE, 4, compat_uptr_t)
#define AGPIOC_PROTECT32    _IOW (AGPIOC_BASE, 5, compat_uptr_t)
#define AGPIOC_ALLOCATE32   _IOWR(AGPIOC_BASE, 6, compat_uptr_t)
#define AGPIOC_DEALLOCATE32 _IOW (AGPIOC_BASE, 7, compat_int_t)
#define AGPIOC_BIND32       _IOW (AGPIOC_BASE, 8, compat_uptr_t)
#define AGPIOC_UNBIND32     _IOW (AGPIOC_BASE, 9, compat_uptr_t)
#define AGPIOC_CHIPSET_FLUSH32 _IO (AGPIOC_BASE, 10)
struct agp_info32 ;
struct agp_segment32 ;
struct agp_region32 ;
struct agp_allocate32 ;
struct agp_bind32 ;
struct agp_unbind32 ;
extern struct agp_front_data agp_fe;
int agpioc_acquire_wrap(struct agp_file_private *priv);
int agpioc_release_wrap(struct agp_file_private *priv);
int agpioc_protect_wrap(struct agp_file_private *priv);
int agpioc_setup_wrap(struct agp_file_private *priv, void __user *arg);
int agpioc_deallocate_wrap(struct agp_file_private *priv, int arg);
struct agp_file_private *agp_find_private(pid_t pid);
struct agp_client *agp_create_client(pid_t id);
int agp_remove_client(pid_t id);
int agp_create_segment(struct agp_client *client, struct agp_region *region);
void agp_free_memory_wrap(struct agp_memory *memory);
struct agp_memory *agp_allocate_memory_wrap(size_t pg_count, u32 type);
struct agp_memory *agp_find_mem_by_key(int key);
struct agp_client *agp_find_client_by_pid(pid_t id);
