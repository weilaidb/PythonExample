#define DECORATE_H
struct object_decoration ;
struct decoration ;
extern void *add_decoration(struct decoration *n, const struct object *obj, void *decoration);
extern void *lookup_decoration(struct decoration *n, const struct object *obj);
