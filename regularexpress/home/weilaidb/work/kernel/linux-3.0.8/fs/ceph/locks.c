static int ceph_lock_message(u8 lock_type, u16 operation, struct file *file,
int cmd, u8 wait, struct file_lock *fl)
int ceph_lock(struct file *file, int cmd, struct file_lock *fl)
int ceph_flock(struct file *file, int cmd, struct file_lock *fl)
void ceph_count_locks(struct inode *inode, int *fcntl_count, int *flock_count)
int ceph_encode_locks(struct inode *inode, struct ceph_pagelist *pagelist,
int num_fcntl_locks, int num_flock_locks)
int lock_to_ceph_filelock(struct file_lock *lock,
struct ceph_filelock *cephlock)
