typedef int (*btree_keycmp)(const btree_key *, const btree_key *);
#define NODE_HASH_SIZE  256
struct hfs_btree ;
struct hfs_bnode ;
#define HFS_BNODE_ERROR		0
#define HFS_BNODE_NEW		1
#define HFS_BNODE_DELETED	2
struct hfs_find_data ;
extern struct hfs_btree *hfs_btree_open(struct super_block *, u32, btree_keycmp);
extern void hfs_btree_close(struct hfs_btree *);
extern void hfs_btree_write(struct hfs_btree *);
extern struct hfs_bnode * hfs_bmap_alloc(struct hfs_btree *);
extern void hfs_bmap_free(struct hfs_bnode *node);
extern void hfs_bnode_read(struct hfs_bnode *, void *, int, int);
extern u16 hfs_bnode_read_u16(struct hfs_bnode *, int);
extern u8 hfs_bnode_read_u8(struct hfs_bnode *, int);
extern void hfs_bnode_read_key(struct hfs_bnode *, void *, int);
extern void hfs_bnode_write(struct hfs_bnode *, void *, int, int);
extern void hfs_bnode_write_u16(struct hfs_bnode *, int, u16);
extern void hfs_bnode_write_u8(struct hfs_bnode *, int, u8);
extern void hfs_bnode_clear(struct hfs_bnode *, int, int);
extern void hfs_bnode_copy(struct hfs_bnode *, int,
struct hfs_bnode *, int, int);
extern void hfs_bnode_move(struct hfs_bnode *, int, int, int);
extern void hfs_bnode_dump(struct hfs_bnode *);
extern void hfs_bnode_unlink(struct hfs_bnode *);
extern struct hfs_bnode *hfs_bnode_findhash(struct hfs_btree *, u32);
extern struct hfs_bnode *hfs_bnode_find(struct hfs_btree *, u32);
extern void hfs_bnode_unhash(struct hfs_bnode *);
extern void hfs_bnode_free(struct hfs_bnode *);
extern struct hfs_bnode *hfs_bnode_create(struct hfs_btree *, u32);
extern void hfs_bnode_get(struct hfs_bnode *);
extern void hfs_bnode_put(struct hfs_bnode *);
extern u16 hfs_brec_lenoff(struct hfs_bnode *, u16, u16 *);
extern u16 hfs_brec_keylen(struct hfs_bnode *, u16);
extern int hfs_brec_insert(struct hfs_find_data *, void *, int);
extern int hfs_brec_remove(struct hfs_find_data *);
extern int hfs_find_init(struct hfs_btree *, struct hfs_find_data *);
extern void hfs_find_exit(struct hfs_find_data *);
extern int __hfs_brec_find(struct hfs_bnode *, struct hfs_find_data *);
extern int hfs_brec_find(struct hfs_find_data *);
extern int hfs_brec_read(struct hfs_find_data *, void *, int);
extern int hfs_brec_goto(struct hfs_find_data *, int);
struct hfs_bnode_desc  __packed;
#define HFS_NODE_INDEX	0x00
#define HFS_NODE_HEADER	0x01
#define HFS_NODE_MAP	0x02
#define HFS_NODE_LEAF	0xFF
struct hfs_btree_header_rec  __packed;
#define HFS_NODE_INDEX	0x00
#define HFS_NODE_HEADER	0x01
#define HFS_NODE_MAP		0x02
#define HFS_NODE_LEAF		0xFF
#define BTREE_ATTR_BADCLOSE	0x00000001
#define HFS_TREE_BIGKEYS	0x00000002
#define HFS_TREE_VARIDXKEYS	0x00000004
