#define _TIPC_LOG_H
struct print_buf ;
#define TIPC_PB_MIN_SIZE 64
#define TIPC_PB_MAX_STR 512
void tipc_printbuf_init(struct print_buf *pb, char *buf, u32 size);
int  tipc_printbuf_validate(struct print_buf *pb);
int tipc_log_resize(int log_size);
struct sk_buff *tipc_log_resize_cmd(const void *req_tlv_area,
int req_tlv_space);
struct sk_buff *tipc_log_dump(void);
