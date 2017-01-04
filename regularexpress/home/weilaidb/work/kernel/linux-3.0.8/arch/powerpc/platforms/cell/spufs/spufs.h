#define SPUFS_H
#define SPUFS_PS_MAP_SIZE	0x20000
#define SPUFS_MFC_MAP_SIZE	0x1000
#define SPUFS_CNTL_MAP_SIZE	0x1000
#define SPUFS_CNTL_MAP_SIZE	0x1000
#define SPUFS_SIGNAL_MAP_SIZE	PAGE_SIZE
#define SPUFS_MSS_MAP_SIZE	0x1000
enum ;
struct spu_context_ops;
struct spu_gang;
enum ;
enum ;
enum ;
struct switch_log ;
struct spu_context ;
struct spu_gang ;
#define AFF_OFFSETS_SET		1
#define AFF_MERGED		2
struct mfc_dma_command ;
struct spu_context_ops ;
extern struct spu_context_ops spu_hw_ops;
extern struct spu_context_ops spu_backing_ops;
struct spufs_inode_info ;
#define SPUFS_I(inode) \
container_of(inode, struct spufs_inode_info, vfs_inode)
struct spufs_tree_descr ;
extern const struct spufs_tree_descr spufs_dir_contents[];
extern const struct spufs_tree_descr spufs_dir_nosched_contents[];
extern const struct spufs_tree_descr spufs_dir_debug_contents[];
extern struct spufs_calls spufs_calls;
long spufs_run_spu(struct spu_context *ctx, u32 *npc, u32 *status);
long spufs_create(struct nameidata *nd, unsigned int flags,
mode_t mode, struct file *filp);
extern int spufs_coredump_extra_notes_size(void);
extern int spufs_coredump_extra_notes_write(struct file *file, loff_t *foffset);
extern const struct file_operations spufs_context_fops;
struct spu_gang *alloc_spu_gang(void);
struct spu_gang *get_spu_gang(struct spu_gang *gang);
int put_spu_gang(struct spu_gang *gang);
void spu_gang_remove_ctx(struct spu_gang *gang, struct spu_context *ctx);
void spu_gang_add_ctx(struct spu_gang *gang, struct spu_context *ctx);
int spufs_handle_class1(struct spu_context *ctx);
int spufs_handle_class0(struct spu_context *ctx);
struct spu *affinity_check(struct spu_context *ctx);
extern atomic_t nr_spu_contexts;
static inline int __must_check spu_acquire(struct spu_context *ctx)
static inline void spu_release(struct spu_context *ctx)
struct spu_context * alloc_spu_context(struct spu_gang *gang);
void destroy_spu_context(struct kref *kref);
struct spu_context * get_spu_context(struct spu_context *ctx);
int put_spu_context(struct spu_context *ctx);
void spu_unmap_mappings(struct spu_context *ctx);
void spu_forget(struct spu_context *ctx);
int __must_check spu_acquire_saved(struct spu_context *ctx);
void spu_release_saved(struct spu_context *ctx);
int spu_stopped(struct spu_context *ctx, u32 * stat);
void spu_del_from_rq(struct spu_context *ctx);
int spu_activate(struct spu_context *ctx, unsigned long flags);
void spu_deactivate(struct spu_context *ctx);
void spu_yield(struct spu_context *ctx);
void spu_switch_notify(struct spu *spu, struct spu_context *ctx);
void spu_switch_log_notify(struct spu *spu, struct spu_context *ctx,
u32 type, u32 val);
void spu_set_timeslice(struct spu_context *ctx);
void spu_update_sched_info(struct spu_context *ctx);
void __spu_update_sched_info(struct spu_context *ctx);
int __init spu_sched_init(void);
void spu_sched_exit(void);
extern char *isolated_loader;
#define spufs_wait(wq, condition)					\
()
size_t spu_wbox_write(struct spu_context *ctx, u32 data);
size_t spu_ibox_read(struct spu_context *ctx, u32 *data);
void spufs_ibox_callback(struct spu *spu);
void spufs_wbox_callback(struct spu *spu);
void spufs_stop_callback(struct spu *spu, int irq);
void spufs_mfc_callback(struct spu *spu);
void spufs_dma_callback(struct spu *spu, int type);
extern struct spu_coredump_calls spufs_coredump_calls;
struct spufs_coredump_reader ;
extern const struct spufs_coredump_reader spufs_coredump_read[];
extern int spufs_coredump_num_notes;
extern int spu_init_csa(struct spu_state *csa);
extern void spu_fini_csa(struct spu_state *csa);
extern int spu_save(struct spu_state *prev, struct spu *spu);
extern int spu_restore(struct spu_state *new, struct spu *spu);
extern int spu_switch(struct spu_state *prev, struct spu_state *new,
struct spu *spu);
extern int spu_alloc_lscsa(struct spu_state *csa);
extern void spu_free_lscsa(struct spu_state *csa);
extern void spuctx_switch_state(struct spu_context *ctx,
enum spu_utilization_state new_state);
