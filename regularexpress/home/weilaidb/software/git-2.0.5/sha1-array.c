void sha1_array_append(struct sha1_array *array, const unsigned char *sha1)
static int void_hashcmp(const void *a, const void *b)
static void sha1_array_sort(struct sha1_array *array)
static const unsigned char *sha1_access(size_t index, void *table)
int sha1_array_lookup(struct sha1_array *array, const unsigned char *sha1)
void sha1_array_clear(struct sha1_array *array)
void sha1_array_for_each_unique(struct sha1_array *array,
for_each_sha1_fn fn,
void *data)
