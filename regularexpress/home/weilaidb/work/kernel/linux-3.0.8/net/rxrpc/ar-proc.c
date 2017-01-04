static const char *const rxrpc_conn_states[] = ;
static void *rxrpc_call_seq_start(struct seq_file *seq, loff_t *_pos)
static void *rxrpc_call_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void rxrpc_call_seq_stop(struct seq_file *seq, void *v)
static int rxrpc_call_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations rxrpc_call_seq_ops = ;
static int rxrpc_call_seq_open(struct inode *inode, struct file *file)
const struct file_operations rxrpc_call_seq_fops = ;
static void *rxrpc_connection_seq_start(struct seq_file *seq, loff_t *_pos)
static void *rxrpc_connection_seq_next(struct seq_file *seq, void *v,
loff_t *pos)
static void rxrpc_connection_seq_stop(struct seq_file *seq, void *v)
static int rxrpc_connection_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations rxrpc_connection_seq_ops = ;
static int rxrpc_connection_seq_open(struct inode *inode, struct file *file)
const struct file_operations rxrpc_connection_seq_fops = ;
