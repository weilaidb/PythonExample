static int ntfs_collate_binary(ntfs_volume *vol,
const void *data1, const int data1_len,
const void *data2, const int data2_len)
static int ntfs_collate_ntofs_ulong(ntfs_volume *vol,
const void *data1, const int data1_len,
const void *data2, const int data2_len)
typedef int (*ntfs_collate_func_t)(ntfs_volume *, const void *, const int,
const void *, const int);
static ntfs_collate_func_t ntfs_do_collate0x0[3] = ;
static ntfs_collate_func_t ntfs_do_collate0x1[4] = ;
int ntfs_collate(ntfs_volume *vol, COLLATION_RULE cr,
const void *data1, const int data1_len,
const void *data2, const int data2_len)
