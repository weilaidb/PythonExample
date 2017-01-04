struct compat_if_dqblk ;
struct compat_fs_qfilestat ;
struct compat_fs_quota_stat ;
asmlinkage long sys32_quotactl(unsigned int cmd, const char __user *special,
qid_t id, void __user *addr)
