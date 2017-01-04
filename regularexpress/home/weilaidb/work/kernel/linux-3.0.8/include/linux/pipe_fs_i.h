#define _LINUX_PIPE_FS_I_H
#define PIPEFS_MAGIC 0x50495045
#define PIPE_DEF_BUFFERS	16
#define PIPE_BUF_FLAG_LRU	0x01
#define PIPE_BUF_FLAG_ATOMIC	0x02
#define PIPE_BUF_FLAG_GIFT	0x04
struct pipe_buffer ;
struct pipe_inode_info ;
struct pipe_buf_operations ;
#define PIPE_SIZE		PAGE_SIZE
void pipe_lock(struct pipe_inode_info *);
void pipe_unlock(struct pipe_inode_info *);
void pipe_double_lock(struct pipe_inode_info *, struct pipe_inode_info *);
extern unsigned int pipe_max_size, pipe_min_size;
int pipe_proc_fn(struct ctl_table *, int, void __user *, size_t *, loff_t *);
void pipe_wait(struct pipe_inode_info *pipe);
struct pipe_inode_info * alloc_pipe_info(struct inode * inode);
void free_pipe_info(struct inode * inode);
void __free_pipe_info(struct pipe_inode_info *);
void *generic_pipe_buf_map(struct pipe_inode_info *, struct pipe_buffer *, int);
void generic_pipe_buf_unmap(struct pipe_inode_info *, struct pipe_buffer *, void *);
void generic_pipe_buf_get(struct pipe_inode_info *, struct pipe_buffer *);
int generic_pipe_buf_confirm(struct pipe_inode_info *, struct pipe_buffer *);
int generic_pipe_buf_steal(struct pipe_inode_info *, struct pipe_buffer *);
void generic_pipe_buf_release(struct pipe_inode_info *, struct pipe_buffer *);
long pipe_fcntl(struct file *, unsigned int, unsigned long arg);
struct pipe_inode_info *get_pipe_info(struct file *file);
