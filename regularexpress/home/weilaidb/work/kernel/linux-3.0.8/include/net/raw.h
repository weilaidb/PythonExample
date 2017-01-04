#define _RAW_H
extern struct proto raw_prot;
void raw_icmp_error(struct sk_buff *, int, u32);
int raw_local_deliver(struct sk_buff *, int);
extern int 	raw_rcv(struct sock *, struct sk_buff *);
#define RAW_HTABLE_SIZE	MAX_INET_PROTOS
struct raw_hashinfo ;
extern int  raw_proc_init(void);
extern void raw_proc_exit(void);
struct raw_iter_state ;
static inline struct raw_iter_state *raw_seq_private(struct seq_file *seq)
void *raw_seq_start(struct seq_file *seq, loff_t *pos);
void *raw_seq_next(struct seq_file *seq, void *v, loff_t *pos);
void raw_seq_stop(struct seq_file *seq, void *v);
int raw_seq_open(struct inode *ino, struct file *file,
struct raw_hashinfo *h, const struct seq_operations *ops);
void raw_hash_sk(struct sock *sk);
void raw_unhash_sk(struct sock *sk);
struct raw_sock ;
static inline struct raw_sock *raw_sk(const struct sock *sk)
