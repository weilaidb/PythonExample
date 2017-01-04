#define objectid_map(s,rs) (old_format_only (s) ? \
(__le32 *)((struct reiserfs_super_block_v1 *)(rs) + 1) :\
(__le32 *)((rs) + 1))
static void check_objectid_map(struct super_block *s, __le32 * map)
static void check_objectid_map(struct super_block *s, __le32 * map)
__u32 reiserfs_get_unused_objectid(struct reiserfs_transaction_handle *th)
void reiserfs_release_objectid(struct reiserfs_transaction_handle *th,
__u32 objectid_to_release)
int reiserfs_convert_objectid_map_v1(struct super_block *s)
