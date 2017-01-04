void nilfs_btnode_cache_clear(struct address_space *btnc)
struct buffer_head *
nilfs_btnode_create_block(struct address_space *btnc, __u64 blocknr)
int nilfs_btnode_submit_block(struct address_space *btnc, __u64 blocknr,
sector_t pblocknr, int mode,
struct buffer_head **pbh, sector_t *submit_ptr)
void nilfs_btnode_delete(struct buffer_head *bh)
int nilfs_btnode_prepare_change_key(struct address_space *btnc,
struct nilfs_btnode_chkey_ctxt *ctxt)
void nilfs_btnode_commit_change_key(struct address_space *btnc,
struct nilfs_btnode_chkey_ctxt *ctxt)
void nilfs_btnode_abort_change_key(struct address_space *btnc,
struct nilfs_btnode_chkey_ctxt *ctxt)
