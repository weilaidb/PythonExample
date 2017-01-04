#define __SEQ_FILE_NET_H__
struct net;
extern struct net init_net;
struct seq_net_private ;
int seq_open_net(struct inode *, struct file *,
const struct seq_operations *, int);
int single_open_net(struct inode *, struct file *file,
int (*show)(struct seq_file *, void *));
int seq_release_net(struct inode *, struct file *);
int single_release_net(struct inode *, struct file *);
static inline struct net *seq_file_net(struct seq_file *seq)
