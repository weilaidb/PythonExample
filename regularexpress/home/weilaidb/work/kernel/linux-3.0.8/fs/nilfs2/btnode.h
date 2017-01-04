#define _NILFS_BTNODE_H
struct nilfs_btnode_chkey_ctxt ;
void nilfs_btnode_cache_clear(struct address_space *);
struct buffer_head *nilfs_btnode_create_block(struct address_space *btnc,
__u64 blocknr);
int nilfs_btnode_submit_block(struct address_space *, __u64, sector_t, int,
struct buffer_head **, sector_t *);
void nilfs_btnode_delete(struct buffer_head *);
int nilfs_btnode_prepare_change_key(struct address_space *,
struct nilfs_btnode_chkey_ctxt *);
void nilfs_btnode_commit_change_key(struct address_space *,
struct nilfs_btnode_chkey_ctxt *);
void nilfs_btnode_abort_change_key(struct address_space *,
struct nilfs_btnode_chkey_ctxt *);
