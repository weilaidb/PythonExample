static struct object **obj_hash;
static int nr_objs, obj_hash_size;
unsigned int get_max_object_index(void)
struct object *get_indexed_object(unsigned int idx)
static const char *object_type_strings[] = ;
const char *typename(unsigned int type)
int type_from_string(const char *str)
static unsigned int hash_obj(const unsigned char *sha1, unsigned int n)
static void insert_obj_hash(struct object *obj, struct object **hash, unsigned int size)
struct object *lookup_object(const unsigned char *sha1)
static void grow_object_hash(void)
void *create_object(const unsigned char *sha1, void *o)
void *object_as_type(struct object *obj, enum object_type type, int quiet)
struct object *lookup_unknown_object(const unsigned char *sha1)
struct object *parse_object_buffer(const unsigned char *sha1, enum object_type type, unsigned long size, void *buffer, int *eaten_p)
struct object *parse_object_or_die(const unsigned char *sha1,
const char *name)
struct object *parse_object(const unsigned char *sha1)
struct object_list *object_list_insert(struct object *item,
struct object_list **list_p)
int object_list_contains(struct object_list *list, struct object *obj)
static char object_array_slopbuf[1];
static void add_object_array_with_mode_context(struct object *obj, const char *name,
struct object_array *array,
unsigned mode,
struct object_context *context)
void add_object_array(struct object *obj, const char *name, struct object_array *array)
void add_object_array_with_mode(struct object *obj, const char *name, struct object_array *array, unsigned mode)
void add_object_array_with_context(struct object *obj, const char *name, struct object_array *array, struct object_context *context)
void object_array_filter(struct object_array *array,
object_array_each_func_t want, void *cb_data)
static int contains_name(struct object_array *array, const char *name)
void object_array_remove_duplicates(struct object_array *array)
void clear_object_flags(unsigned flags)
