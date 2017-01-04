struct p9_idpool ;
struct p9_idpool *p9_idpool_create(void)
EXPORT_SYMBOL(p9_idpool_create);
void p9_idpool_destroy(struct p9_idpool *p)
EXPORT_SYMBOL(p9_idpool_destroy);
int p9_idpool_get(struct p9_idpool *p)
EXPORT_SYMBOL(p9_idpool_get);
void p9_idpool_put(int id, struct p9_idpool *p)
EXPORT_SYMBOL(p9_idpool_put);
int p9_idpool_check(int id, struct p9_idpool *p)
EXPORT_SYMBOL(p9_idpool_check);
