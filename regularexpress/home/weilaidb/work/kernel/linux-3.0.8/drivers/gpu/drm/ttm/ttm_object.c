struct ttm_object_file ;
struct ttm_object_device ;
struct ttm_ref_object ;
static inline struct ttm_object_file *
ttm_object_file_ref(struct ttm_object_file *tfile)
static void ttm_object_file_destroy(struct kref *kref)
static inline void ttm_object_file_unref(struct ttm_object_file **p_tfile)
int ttm_base_object_init(struct ttm_object_file *tfile,
struct ttm_base_object *base,
bool shareable,
enum ttm_object_type object_type,
void (*refcount_release) (struct ttm_base_object **),
void (*ref_obj_release) (struct ttm_base_object *,
enum ttm_ref_type ref_type))
EXPORT_SYMBOL(ttm_base_object_init);
static void ttm_release_base(struct kref *kref)
void ttm_base_object_unref(struct ttm_base_object **p_base)
EXPORT_SYMBOL(ttm_base_object_unref);
struct ttm_base_object *ttm_base_object_lookup(struct ttm_object_file *tfile,
uint32_t key)
EXPORT_SYMBOL(ttm_base_object_lookup);
int ttm_ref_object_add(struct ttm_object_file *tfile,
struct ttm_base_object *base,
enum ttm_ref_type ref_type, bool *existed)
EXPORT_SYMBOL(ttm_ref_object_add);
static void ttm_ref_object_release(struct kref *kref)
int ttm_ref_object_base_unref(struct ttm_object_file *tfile,
unsigned long key, enum ttm_ref_type ref_type)
EXPORT_SYMBOL(ttm_ref_object_base_unref);
void ttm_object_file_release(struct ttm_object_file **p_tfile)
EXPORT_SYMBOL(ttm_object_file_release);
struct ttm_object_file *ttm_object_file_init(struct ttm_object_device *tdev,
unsigned int hash_order)
EXPORT_SYMBOL(ttm_object_file_init);
struct ttm_object_device *ttm_object_device_init(struct ttm_mem_global
*mem_glob,
unsigned int hash_order)
EXPORT_SYMBOL(ttm_object_device_init);
void ttm_object_device_release(struct ttm_object_device **p_tdev)
EXPORT_SYMBOL(ttm_object_device_release);
