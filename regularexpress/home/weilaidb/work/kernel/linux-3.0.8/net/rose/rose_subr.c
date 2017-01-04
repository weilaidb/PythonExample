static int rose_create_facilities(unsigned char *buffer, struct rose_sock *rose);
void rose_clear_queues(struct sock *sk)
void rose_frames_acked(struct sock *sk, unsigned short nr)
void rose_requeue_frames(struct sock *sk)
int rose_validate_nr(struct sock *sk, unsigned short nr)
void rose_write_internal(struct sock *sk, int frametype)
int rose_decode(struct sk_buff *skb, int *ns, int *nr, int *q, int *d, int *m)
static int rose_parse_national(unsigned char *p, struct rose_facilities_struct *facilities, int len)
static int rose_parse_ccitt(unsigned char *p, struct rose_facilities_struct *facilities, int len)
int rose_parse_facilities(unsigned char *p, unsigned packet_len,
struct rose_facilities_struct *facilities)
static int rose_create_facilities(unsigned char *buffer, struct rose_sock *rose)
void rose_disconnect(struct sock *sk, int reason, int cause, int diagnostic)
