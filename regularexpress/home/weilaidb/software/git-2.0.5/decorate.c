static unsigned int hash_obj(const struct object *obj, unsigned int n)
static void *insert_decoration(struct decoration *n, const struct object *base, void *decoration)
static void grow_decoration(struct decoration *n)
void *add_decoration(struct decoration *n, const struct object *obj,
void *decoration)
void *lookup_decoration(struct decoration *n, const struct object *obj)
