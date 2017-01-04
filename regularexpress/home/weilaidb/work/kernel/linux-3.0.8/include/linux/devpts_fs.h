#define _LINUX_DEVPTS_FS_H
int devpts_new_index(struct inode *ptmx_inode);
void devpts_kill_index(struct inode *ptmx_inode, int idx);
int devpts_pty_new(struct inode *ptmx_inode, struct tty_struct *tty);
struct tty_struct *devpts_get_tty(struct inode *pts_inode, int number);
void devpts_pty_kill(struct tty_struct *tty);
static inline int devpts_new_index(struct inode *ptmx_inode)
static inline void devpts_kill_index(struct inode *ptmx_inode, int idx)
static inline int devpts_pty_new(struct inode *ptmx_inode,
struct tty_struct *tty)
static inline struct tty_struct *devpts_get_tty(struct inode *pts_inode,
int number)
static inline void devpts_pty_kill(struct tty_struct *tty)
