#define _LINUX_NTFS_SYSCTL_H
#if defined(DEBUG) && defined(CONFIG_SYSCTL)
extern int ntfs_sysctl(int add);
static inline int ntfs_sysctl(int add)
