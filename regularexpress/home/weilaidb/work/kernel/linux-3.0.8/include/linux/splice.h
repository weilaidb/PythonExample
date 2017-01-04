#define SPLICE_H
#define SPLICE_F_MOVE	(0x01)
#define SPLICE_F_NONBLOCK (0x02)
#define SPLICE_F_MORE	(0x04)
#define SPLICE_F_GIFT	(0x08)
struct splice_desc ;
struct partial_page ;
struct splice_pipe_desc ;
typedef int (splice_actor)(struct pipe_inode_info *, struct pipe_buffer *,
struct splice_desc *);
typedef int (splice_direct_actor)(struct pipe_inode_info *,
struct splice_desc *);
extern ssize_t splice_from_pipe(struct pipe_inode_info *, struct file *,
loff_t *, size_t, unsigned int,
splice_actor *);
extern ssize_t __splice_from_pipe(struct pipe_inode_info *,
struct splice_desc *, splice_actor *);
extern int splice_from_pipe_feed(struct pipe_inode_info *, struct splice_desc *,
splice_actor *);
extern int splice_from_pipe_next(struct pipe_inode_info *,
struct splice_desc *);
extern void splice_from_pipe_begin(struct splice_desc *);
extern void splice_from_pipe_end(struct pipe_inode_info *,
struct splice_desc *);
extern int pipe_to_file(struct pipe_inode_info *, struct pipe_buffer *,
struct splice_desc *);
extern ssize_t splice_to_pipe(struct pipe_inode_info *,
struct splice_pipe_desc *);
extern ssize_t splice_direct_to_actor(struct file *, struct splice_desc *,
splice_direct_actor *);
extern int splice_grow_spd(struct pipe_inode_info *, struct splice_pipe_desc *);
extern void splice_shrink_spd(struct pipe_inode_info *,
struct splice_pipe_desc *);
