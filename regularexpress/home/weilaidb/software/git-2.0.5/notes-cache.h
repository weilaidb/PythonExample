#define NOTES_CACHE_H
struct notes_cache ;
void notes_cache_init(struct notes_cache *c, const char *name,
const char *validity);
int notes_cache_write(struct notes_cache *c);
char *notes_cache_get(struct notes_cache *c, unsigned char sha1[20], size_t
*outsize);
int notes_cache_put(struct notes_cache *c, unsigned char sha1[20],
const char *data, size_t size);
