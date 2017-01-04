#define DM_MSG_PREFIX "target"
static LIST_HEAD(_targets);
static DECLARE_RWSEM(_lock);
#define DM_MOD_NAME_SIZE 32
static inline struct target_type *__find_target_type(const char *name)
static struct target_type *get_target_type(const char *name)
static void load_module(const char *name)
struct target_type *dm_get_target_type(const char *name)
void dm_put_target_type(struct target_type *tt)
int dm_target_iterate(void (*iter_func)(struct target_type *tt,
void *param), void *param)
int dm_register_target(struct target_type *tt)
void dm_unregister_target(struct target_type *tt)
static int io_err_ctr(struct dm_target *tt, unsigned int argc, char **args)
static void io_err_dtr(struct dm_target *tt)
static int io_err_map(struct dm_target *tt, struct bio *bio,
union map_info *map_context)
static struct target_type error_target = ;
int __init dm_target_init(void)
void dm_target_exit(void)
EXPORT_SYMBOL(dm_register_target);
EXPORT_SYMBOL(dm_unregister_target);
