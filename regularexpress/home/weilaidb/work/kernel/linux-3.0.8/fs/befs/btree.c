typedef struct  befs_btree_node;
static const befs_off_t befs_bt_inval = 0xffffffffffffffffULL;
static int befs_btree_seekleaf(struct super_block *sb, befs_data_stream * ds,
befs_btree_super * bt_super,
befs_btree_node * this_node,
befs_off_t * node_off);
static int befs_bt_read_super(struct super_block *sb, befs_data_stream * ds,
befs_btree_super * sup);
static int befs_bt_read_node(struct super_block *sb, befs_data_stream * ds,
befs_btree_node * node, befs_off_t node_off);
static int befs_leafnode(befs_btree_node * node);
static fs16 *befs_bt_keylen_index(befs_btree_node * node);
static fs64 *befs_bt_valarray(befs_btree_node * node);
static char *befs_bt_keydata(befs_btree_node * node);
static int befs_find_key(struct super_block *sb, befs_btree_node * node,
const char *findkey, befs_off_t * value);
static char *befs_bt_get_key(struct super_block *sb, befs_btree_node * node,
int index, u16 * keylen);
static int befs_compare_strings(const void *key1, int keylen1,
const void *key2, int keylen2);
static int
befs_bt_read_super(struct super_block *sb, befs_data_stream * ds,
befs_btree_super * sup)
static int
befs_bt_read_node(struct super_block *sb, befs_data_stream * ds,
befs_btree_node * node, befs_off_t node_off)
int
befs_btree_find(struct super_block *sb, befs_data_stream * ds,
const char *key, befs_off_t * value)
static int
befs_find_key(struct super_block *sb, befs_btree_node * node,
const char *findkey, befs_off_t * value)
int
befs_btree_read(struct super_block *sb, befs_data_stream * ds,
loff_t key_no, size_t bufsize, char *keybuf, size_t * keysize,
befs_off_t * value)
static int
befs_btree_seekleaf(struct super_block *sb, befs_data_stream * ds,
befs_btree_super * bt_super, befs_btree_node * this_node,
befs_off_t * node_off)
static int
befs_leafnode(befs_btree_node * node)
static fs16 *
befs_bt_keylen_index(befs_btree_node * node)
static fs64 *
befs_bt_valarray(befs_btree_node * node)
static char *
befs_bt_keydata(befs_btree_node * node)
static char *
befs_bt_get_key(struct super_block *sb, befs_btree_node * node,
int index, u16 * keylen)
static int
befs_compare_strings(const void *key1, int keylen1,
const void *key2, int keylen2)
