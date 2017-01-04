void kref_init(struct kref *kref)
void kref_get(struct kref *kref)
int kref_put(struct kref *kref, void (*release)(struct kref *kref))
int kref_sub(struct kref *kref, unsigned int count,
void (*release)(struct kref *kref))
EXPORT_SYMBOL(kref_init);
EXPORT_SYMBOL(kref_get);
EXPORT_SYMBOL(kref_put);
EXPORT_SYMBOL(kref_sub);
