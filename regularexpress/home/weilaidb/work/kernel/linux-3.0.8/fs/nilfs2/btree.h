#define _NILFS_BTREE_H
struct nilfs_btree_path ;
#define NILFS_BTREE_ROOT_SIZE		NILFS_BMAP_SIZE
#define NILFS_BTREE_ROOT_NCHILDREN_MAX					\
((NILFS_BTREE_ROOT_SIZE - sizeof(struct nilfs_btree_node)) /	\
(sizeof(__le64) + sizeof(__le64)))
#define NILFS_BTREE_ROOT_NCHILDREN_MIN	0
#define NILFS_BTREE_NODE_EXTRA_PAD_SIZE	(sizeof(__le64))
#define NILFS_BTREE_NODE_NCHILDREN_MAX(nodesize)			\
(((nodesize) - sizeof(struct nilfs_btree_node) -		\
NILFS_BTREE_NODE_EXTRA_PAD_SIZE) /			\
(sizeof(__le64) + sizeof(__le64)))
#define NILFS_BTREE_NODE_NCHILDREN_MIN(nodesize)			\
((NILFS_BTREE_NODE_NCHILDREN_MAX(nodesize) - 1) / 2 + 1)
#define NILFS_BTREE_KEY_MIN	((__u64)0)
#define NILFS_BTREE_KEY_MAX	(~(__u64)0)
extern struct kmem_cache *nilfs_btree_path_cache;
int nilfs_btree_init(struct nilfs_bmap *);
int nilfs_btree_convert_and_insert(struct nilfs_bmap *, __u64, __u64,
const __u64 *, const __u64 *, int);
void nilfs_btree_init_gc(struct nilfs_bmap *);
int nilfs_btree_broken_node_block(struct buffer_head *bh);
