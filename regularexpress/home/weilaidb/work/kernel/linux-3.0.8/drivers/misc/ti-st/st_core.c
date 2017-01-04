#define pr_fmt(fmt)	"(stc): " fmt
void (*st_recv) (void*, const unsigned char*, long);
static void add_channel_to_table(struct st_data_s *st_gdata,
struct st_proto_s *new_proto)
static void remove_channel_from_table(struct st_data_s *st_gdata,
struct st_proto_s *proto)
int st_get_uart_wr_room(struct st_data_s *st_gdata)
int st_int_write(struct st_data_s *st_gdata,
const unsigned char *data, int count)
void st_send_frame(unsigned char chnl_id, struct st_data_s *st_gdata)
void st_reg_complete(struct st_data_s *st_gdata, char err)
static inline int st_check_data_len(struct st_data_s *st_gdata,
unsigned char chnl_id, int len)
static inline void st_wakeup_ack(struct st_data_s *st_gdata,
unsigned char cmd)
void st_int_recv(void *disc_data,
const unsigned char *data, long count)
struct sk_buff *st_int_dequeue(struct st_data_s *st_gdata)
void st_int_enqueue(struct st_data_s *st_gdata, struct sk_buff *skb)
void st_tx_wakeup(struct st_data_s *st_data)
void kim_st_list_protocols(struct st_data_s *st_gdata, void *buf)
long st_register(struct st_proto_s *new_proto)
EXPORT_SYMBOL_GPL(st_register);
long st_unregister(struct st_proto_s *proto)
long st_write(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(st_unregister);
static int st_tty_open(struct tty_struct *tty)
static void st_tty_close(struct tty_struct *tty)
static void st_tty_receive(struct tty_struct *tty, const unsigned char *data,
char *tty_flags, int count)
static void st_tty_wakeup(struct tty_struct *tty)
static void st_tty_flush_buffer(struct tty_struct *tty)
static struct tty_ldisc_ops st_ldisc_ops = ;
int st_core_init(struct st_data_s **core_data)
void st_core_exit(struct st_data_s *st_gdata)
