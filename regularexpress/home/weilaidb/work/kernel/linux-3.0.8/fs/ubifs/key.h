#define __UBIFS_KEY_H__
static inline uint32_t key_mask_hash(uint32_t hash)
static inline uint32_t key_r5_hash(const char *s, int len)
static inline uint32_t key_test_hash(const char *str, int len)
static inline void ino_key_init(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void ino_key_init_flash(const struct ubifs_info *c, void *k,
ino_t inum)
static inline void lowest_ino_key(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void highest_ino_key(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void dent_key_init(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum,
const struct qstr *nm)
static inline void dent_key_init_hash(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum,
uint32_t hash)
static inline void dent_key_init_flash(const struct ubifs_info *c, void *k,
ino_t inum, const struct qstr *nm)
static inline void lowest_dent_key(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void xent_key_init(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum,
const struct qstr *nm)
static inline void xent_key_init_flash(const struct ubifs_info *c, void *k,
ino_t inum, const struct qstr *nm)
static inline void lowest_xent_key(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void data_key_init(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum,
unsigned int block)
static inline void highest_data_key(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void trun_key_init(const struct ubifs_info *c,
union ubifs_key *key, ino_t inum)
static inline void invalid_key_init(const struct ubifs_info *c,
union ubifs_key *key)
static inline int key_type(const struct ubifs_info *c,
const union ubifs_key *key)
static inline int key_type_flash(const struct ubifs_info *c, const void *k)
static inline ino_t key_inum(const struct ubifs_info *c, const void *k)
static inline ino_t key_inum_flash(const struct ubifs_info *c, const void *k)
static inline uint32_t key_hash(const struct ubifs_info *c,
const union ubifs_key *key)
static inline uint32_t key_hash_flash(const struct ubifs_info *c, const void *k)
static inline unsigned int key_block(const struct ubifs_info *c,
const union ubifs_key *key)
static inline unsigned int key_block_flash(const struct ubifs_info *c,
const void *k)
static inline void key_read(const struct ubifs_info *c, const void *from,
union ubifs_key *to)
static inline void key_write(const struct ubifs_info *c,
const union ubifs_key *from, void *to)
static inline void key_write_idx(const struct ubifs_info *c,
const union ubifs_key *from, void *to)
static inline void key_copy(const struct ubifs_info *c,
const union ubifs_key *from, union ubifs_key *to)
static inline int keys_cmp(const struct ubifs_info *c,
const union ubifs_key *key1,
const union ubifs_key *key2)
static inline int keys_eq(const struct ubifs_info *c,
const union ubifs_key *key1,
const union ubifs_key *key2)
static inline int is_hash_key(const struct ubifs_info *c,
const union ubifs_key *key)
static inline unsigned long long key_max_inode_size(const struct ubifs_info *c)
