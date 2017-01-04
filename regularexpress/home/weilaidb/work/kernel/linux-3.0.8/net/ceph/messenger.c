static char tag_msg = CEPH_MSGR_TAG_MSG;
static char tag_ack = CEPH_MSGR_TAG_ACK;
static char tag_keepalive = CEPH_MSGR_TAG_KEEPALIVE;
static struct lock_class_key socket_class;
static void queue_con(struct ceph_connection *con);
static void con_work(struct work_struct *);
static void ceph_fault(struct ceph_connection *con);
#define MAX_ADDR_STR 20
#define MAX_ADDR_STR_LEN 60
static char addr_str[MAX_ADDR_STR][MAX_ADDR_STR_LEN];
static DEFINE_SPINLOCK(addr_str_lock);
static int last_addr_str;
const char *ceph_pr_addr(const struct sockaddr_storage *ss)
EXPORT_SYMBOL(ceph_pr_addr);
static void encode_my_addr(struct ceph_messenger *msgr)
struct workqueue_struct *ceph_msgr_wq;
int ceph_msgr_init(void)
EXPORT_SYMBOL(ceph_msgr_init);
void ceph_msgr_exit(void)
EXPORT_SYMBOL(ceph_msgr_exit);
void ceph_msgr_flush(void)
EXPORT_SYMBOL(ceph_msgr_flush);
static void ceph_data_ready(struct sock *sk, int count_unused)
static void ceph_write_space(struct sock *sk)
static void ceph_state_change(struct sock *sk)
static void set_sock_callbacks(struct socket *sock,
struct ceph_connection *con)
static struct socket *ceph_tcp_connect(struct ceph_connection *con)
static int ceph_tcp_recvmsg(struct socket *sock, void *buf, size_t len)
static int ceph_tcp_sendmsg(struct socket *sock, struct kvec *iov,
size_t kvlen, size_t len, int more)
static int con_close_socket(struct ceph_connection *con)
static void ceph_msg_remove(struct ceph_msg *msg)
static void ceph_msg_remove_list(struct list_head *head)
static void reset_connection(struct ceph_connection *con)
void ceph_con_close(struct ceph_connection *con)
EXPORT_SYMBOL(ceph_con_close);
void ceph_con_open(struct ceph_connection *con, struct ceph_entity_addr *addr)
EXPORT_SYMBOL(ceph_con_open);
bool ceph_con_opened(struct ceph_connection *con)
struct ceph_connection *ceph_con_get(struct ceph_connection *con)
void ceph_con_put(struct ceph_connection *con)
void ceph_con_init(struct ceph_messenger *msgr, struct ceph_connection *con)
EXPORT_SYMBOL(ceph_con_init);
static u32 get_global_seq(struct ceph_messenger *msgr, u32 gt)
static void prepare_write_message_footer(struct ceph_connection *con, int v)
static void prepare_write_message(struct ceph_connection *con)
static void prepare_write_ack(struct ceph_connection *con)
static void prepare_write_keepalive(struct ceph_connection *con)
static int prepare_connect_authorizer(struct ceph_connection *con)
static void prepare_write_banner(struct ceph_messenger *msgr,
struct ceph_connection *con)
static int prepare_write_connect(struct ceph_messenger *msgr,
struct ceph_connection *con,
int after_banner)
static int write_partial_kvec(struct ceph_connection *con)
static void init_bio_iter(struct bio *bio, struct bio **iter, int *seg)
static void iter_bio_next(struct bio **bio_iter, int *seg)
static int write_partial_msg_pages(struct ceph_connection *con)
static int write_partial_skip(struct ceph_connection *con)
static void prepare_read_banner(struct ceph_connection *con)
static void prepare_read_connect(struct ceph_connection *con)
static void prepare_read_ack(struct ceph_connection *con)
static void prepare_read_tag(struct ceph_connection *con)
static int prepare_read_message(struct ceph_connection *con)
static int read_partial(struct ceph_connection *con,
int *to, int size, void *object)
static int read_partial_banner(struct ceph_connection *con)
static int read_partial_connect(struct ceph_connection *con)
static int verify_hello(struct ceph_connection *con)
static bool addr_is_blank(struct sockaddr_storage *ss)
static int addr_port(struct sockaddr_storage *ss)
static void addr_set_port(struct sockaddr_storage *ss, int p)
int ceph_parse_ips(const char *c, const char *end,
struct ceph_entity_addr *addr,
int max_count, int *count)
EXPORT_SYMBOL(ceph_parse_ips);
static int process_banner(struct ceph_connection *con)
static void fail_protocol(struct ceph_connection *con)
static int process_connect(struct ceph_connection *con)
static int read_partial_ack(struct ceph_connection *con)
static void process_ack(struct ceph_connection *con)
static int read_partial_message_section(struct ceph_connection *con,
struct kvec *section,
unsigned int sec_len, u32 *crc)
static struct ceph_msg *ceph_alloc_msg(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip);
static int read_partial_message_pages(struct ceph_connection *con,
struct page **pages,
unsigned data_len, int datacrc)
static int read_partial_message_bio(struct ceph_connection *con,
struct bio **bio_iter, int *bio_seg,
unsigned data_len, int datacrc)
static int read_partial_message(struct ceph_connection *con)
static void process_message(struct ceph_connection *con)
static int try_write(struct ceph_connection *con)
static int try_read(struct ceph_connection *con)
static void queue_con(struct ceph_connection *con)
static void con_work(struct work_struct *work)
static void ceph_fault(struct ceph_connection *con)
struct ceph_messenger *ceph_messenger_create(struct ceph_entity_addr *myaddr,
u32 supported_features,
u32 required_features)
EXPORT_SYMBOL(ceph_messenger_create);
void ceph_messenger_destroy(struct ceph_messenger *msgr)
EXPORT_SYMBOL(ceph_messenger_destroy);
static void clear_standby(struct ceph_connection *con)
void ceph_con_send(struct ceph_connection *con, struct ceph_msg *msg)
EXPORT_SYMBOL(ceph_con_send);
void ceph_con_revoke(struct ceph_connection *con, struct ceph_msg *msg)
void ceph_con_revoke_message(struct ceph_connection *con, struct ceph_msg *msg)
void ceph_con_keepalive(struct ceph_connection *con)
EXPORT_SYMBOL(ceph_con_keepalive);
struct ceph_msg *ceph_msg_new(int type, int front_len, gfp_t flags)
EXPORT_SYMBOL(ceph_msg_new);
static int ceph_alloc_middle(struct ceph_connection *con, struct ceph_msg *msg)
static struct ceph_msg *ceph_alloc_msg(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip)
void ceph_msg_kfree(struct ceph_msg *m)
void ceph_msg_last_put(struct kref *kref)
EXPORT_SYMBOL(ceph_msg_last_put);
void ceph_msg_dump(struct ceph_msg *msg)
EXPORT_SYMBOL(ceph_msg_dump);
