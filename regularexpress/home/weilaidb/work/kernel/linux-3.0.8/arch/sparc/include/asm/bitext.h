#define _SPARC_BITEXT_H
struct bit_map ;
extern int bit_map_string_get(struct bit_map *t, int len, int align);
extern void bit_map_clear(struct bit_map *t, int offset, int len);
extern void bit_map_init(struct bit_map *t, unsigned long *map, int size);
