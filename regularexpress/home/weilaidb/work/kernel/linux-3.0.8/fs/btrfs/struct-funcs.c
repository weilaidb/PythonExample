#define BTRFS_SETGET_FUNCS(name, type, member, bits)			\
u##bits btrfs_##name(struct extent_buffer *eb, type *s);		\
void btrfs_set_##name(struct extent_buffer *eb, type *s, u##bits val);	\
u##bits btrfs_##name(struct extent_buffer *eb,				\
type *s)				\
\
void btrfs_set_##name(struct extent_buffer *eb,				\
type *s, u##bits val)		\
void btrfs_node_key(struct extent_buffer *eb,
struct btrfs_disk_key *disk_key, int nr)
