#define _TTM_OBJECT_H_
enum ttm_ref_type ;
enum ttm_object_type ;
struct ttm_object_file;
struct ttm_object_device;
struct ttm_base_object ;
extern int ttm_base_object_init(struct ttm_object_file *tfile,
struct ttm_base_object *base,
bool shareable,
enum ttm_object_type type,
void (*refcount_release) (struct ttm_base_object
**),
void (*ref_obj_release) (struct ttm_base_object
*,
enum ttm_ref_type
ref_type));
extern struct ttm_base_object *ttm_base_object_lookup(struct ttm_object_file
*tfile, uint32_t key);
extern void ttm_base_object_unref(struct ttm_base_object **p_base);
extern int ttm_ref_object_add(struct ttm_object_file *tfile,
struct ttm_base_object *base,
enum ttm_ref_type ref_type, bool *existed);
extern int ttm_ref_object_base_unref(struct ttm_object_file *tfile,
unsigned long key,
enum ttm_ref_type ref_type);
extern struct ttm_object_file *ttm_object_file_init(struct ttm_object_device
*tdev,
unsigned int hash_order);
extern void ttm_object_file_release(struct ttm_object_file **p_tfile);
extern struct ttm_object_device *ttm_object_device_init
(struct ttm_mem_global *mem_glob, unsigned int hash_order);
extern void ttm_object_device_release(struct ttm_object_device **p_tdev);
