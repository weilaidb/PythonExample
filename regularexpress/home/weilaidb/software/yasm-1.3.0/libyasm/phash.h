#define YASM_LIB_DECL
YASM_LIB_DECL
unsigned long phash_lookup(const char *k, size_t length,
unsigned long level);
YASM_LIB_DECL
void phash_checksum(const char *k, size_t length, unsigned long *state);
