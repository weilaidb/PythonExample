static uint32_t locate_object_entry_hash(struct packing_data *pdata,
const unsigned char *sha1,
int *found)
static inline uint32_t closest_pow2(uint32_t v)
static void rehash_objects(struct packing_data *pdata)
struct object_entry *packlist_find(struct packing_data *pdata,
const unsigned char *sha1,
uint32_t *index_pos)
struct object_entry *packlist_alloc(struct packing_data *pdata,
const unsigned char *sha1,
uint32_t index_pos)
