#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
SCTP_DBG_OBJCNT(sock);
SCTP_DBG_OBJCNT(ep);
SCTP_DBG_OBJCNT(transport);
SCTP_DBG_OBJCNT(assoc);
SCTP_DBG_OBJCNT(bind_addr);
SCTP_DBG_OBJCNT(bind_bucket);
SCTP_DBG_OBJCNT(chunk);
SCTP_DBG_OBJCNT(addr);
SCTP_DBG_OBJCNT(ssnmap);
SCTP_DBG_OBJCNT(datamsg);
SCTP_DBG_OBJCNT(keys);
static sctp_dbg_objcnt_entry_t sctp_dbg_objcnt[] = ;
static int sctp_objcnt_seq_show(struct seq_file *seq, void *v)
static void *sctp_objcnt_seq_start(struct seq_file *seq, loff_t *pos)
static void sctp_objcnt_seq_stop(struct seq_file *seq, void *v)
static void * sctp_objcnt_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static const struct seq_operations sctp_objcnt_seq_ops = ;
static int sctp_objcnt_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sctp_objcnt_ops = ;
void sctp_dbg_objcnt_init(void)
void sctp_dbg_objcnt_exit(void)
