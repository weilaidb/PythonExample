static uint32_t take2(const unsigned char *sha1)
int sha1_pos(const unsigned char *sha1, void *table, size_t nr,
sha1_access_fn fn)
int sha1_entry_pos(const void *table,
size_t elem_size,
size_t key_offset,
unsigned lo, unsigned hi, unsigned nr,
const unsigned char *key)
