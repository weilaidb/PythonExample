#define _LINUX_NTFS_DIR_H
typedef struct  __attribute__ ((__packed__)) ntfs_name;
extern ntfschar I30[5];
extern MFT_REF ntfs_lookup_inode_by_name(ntfs_inode *dir_ni,
const ntfschar *uname, const int uname_len, ntfs_name **res);
