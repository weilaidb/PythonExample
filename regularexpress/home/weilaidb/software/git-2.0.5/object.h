#define OBJECT_H
struct object_list ;
struct object_array ;
#define OBJECT_ARRAY_INIT
#define TYPE_BITS   3
#define FLAG_BITS  27
struct object ;
extern const char *typename(unsigned int type);
extern int type_from_string(const char *str);
extern unsigned int get_max_object_index(void);
extern struct object *get_indexed_object(unsigned int);
struct object *lookup_object(const unsigned char *sha1);
extern void *create_object(const unsigned char *sha1, void *obj);
void *object_as_type(struct object *obj, enum object_type type, int quiet);
struct object *parse_object(const unsigned char *sha1);
struct object *parse_object_or_die(const unsigned char *sha1, const char *name);
struct object *parse_object_buffer(const unsigned char *sha1, enum object_type type, unsigned long size, void *buffer, int *eaten_p);
struct object *lookup_unknown_object(const unsigned  char *sha1);
struct object_list *object_list_insert(struct object *item,
struct object_list **list_p);
int object_list_contains(struct object_list *list, struct object *obj);
void add_object_array(struct object *obj, const char *name, struct object_array *array);
void add_object_array_with_mode(struct object *obj, const char *name, struct object_array *array, unsigned mode);
void add_object_array_with_context(struct object *obj, const char *name, struct object_array *array, struct object_context *context);
typedef int (*object_array_each_func_t)(struct object_array_entry *, void *);
void object_array_filter(struct object_array *array,
object_array_each_func_t want, void *cb_data);
void object_array_remove_duplicates(struct object_array *array);
void clear_object_flags(unsigned flags);
