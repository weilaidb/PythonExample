u32 tipc_msg_tot_importance(struct tipc_msg *m)
void tipc_msg_init(struct tipc_msg *m, u32 user, u32 type,
u32 hsize, u32 destnode)
int tipc_msg_build(struct tipc_msg *hdr, struct iovec const *msg_sect,
u32 num_sect, unsigned int total_len,
int max_size, int usrmem, struct sk_buff **buf)
void tipc_msg_dbg(struct print_buf *buf, struct tipc_msg *msg, const char *str)
