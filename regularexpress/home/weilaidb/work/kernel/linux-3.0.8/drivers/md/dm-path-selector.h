#define	DM_PATH_SELECTOR_H
struct path_selector_type;
struct path_selector ;
struct path_selector_type ;
int dm_register_path_selector(struct path_selector_type *type);
int dm_unregister_path_selector(struct path_selector_type *type);
struct path_selector_type *dm_get_path_selector(const char *name);
void dm_put_path_selector(struct path_selector_type *pst);
