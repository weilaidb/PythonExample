#define SHA1_ARRAY_H
struct sha1_array ;
#define SHA1_ARRAY_INIT
void sha1_array_append(struct sha1_array *array, const unsigned char *sha1);
int sha1_array_lookup(struct sha1_array *array, const unsigned char *sha1);
void sha1_array_clear(struct sha1_array *array);
typedef void (*for_each_sha1_fn)(const unsigned char sha1[20],
void *data);
void sha1_array_for_each_unique(struct sha1_array *array,
for_each_sha1_fn fn,
void *data);
