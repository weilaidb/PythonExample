#define _LINUX_IMA_H
struct linux_binprm;
extern int ima_bprm_check(struct linux_binprm *bprm);
extern int ima_inode_alloc(struct inode *inode);
extern void ima_inode_free(struct inode *inode);
extern int ima_file_check(struct file *file, int mask);
extern void ima_file_free(struct file *file);
extern int ima_file_mmap(struct file *file, unsigned long prot);
static inline int ima_bprm_check(struct linux_binprm *bprm)
static inline int ima_inode_alloc(struct inode *inode)
static inline void ima_inode_free(struct inode *inode)
static inline int ima_file_check(struct file *file, int mask)
static inline void ima_file_free(struct file *file)
static inline int ima_file_mmap(struct file *file, unsigned long prot)
