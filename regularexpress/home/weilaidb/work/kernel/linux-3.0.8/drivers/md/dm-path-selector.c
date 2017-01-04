struct ps_internal ;
#define pst_to_psi(__pst) container_of((__pst), struct ps_internal, pst)
static LIST_HEAD(_path_selectors);
static DECLARE_RWSEM(_ps_lock);
static struct ps_internal *__find_path_selector_type(const char *name)
static struct ps_internal *get_path_selector(const char *name)
struct path_selector_type *dm_get_path_selector(const char *name)
void dm_put_path_selector(struct path_selector_type *pst)
static struct ps_internal *_alloc_path_selector(struct path_selector_type *pst)
int dm_register_path_selector(struct path_selector_type *pst)
int dm_unregister_path_selector(struct path_selector_type *pst)
EXPORT_SYMBOL_GPL(dm_register_path_selector);
EXPORT_SYMBOL_GPL(dm_unregister_path_selector);
