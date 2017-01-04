#define PACK_OBJECTS_H
struct object_entry ;
struct packing_data ;
struct object_entry *packlist_alloc(struct packing_data *pdata,
const unsigned char *sha1,
uint32_t index_pos);
struct object_entry *packlist_find(struct packing_data *pdata,
const unsigned char *sha1,
uint32_t *index_pos);
static inline uint32_t pack_name_hash(const char *name)
