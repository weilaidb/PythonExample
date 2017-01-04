#define _LINUX_NTFS_COLLATE_H
static inline bool ntfs_is_collation_rule_supported(COLLATION_RULE cr)
extern int ntfs_collate(ntfs_volume *vol, COLLATION_RULE cr,
const void *data1, const int data1_len,
const void *data2, const int data2_len);
