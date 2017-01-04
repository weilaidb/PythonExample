#define MSG_TIMEOUT_JIFFIES         (400 * HZ) / 1000
#define MSG_DESCRIPTOR_SIZE         0x24
#define MSG_HEADER_SIZE             (MSG_DESCRIPTOR_SIZE + 4)
#define MSG_DEFAULT_SIZE            512
#define MSG_TYPE_MASK               0x00000003
#define MSG_TYPE_NOTIFY             0
#define MSG_TYPE_COMMAND            1
#define MSG_TYPE_REQUEST            2
#define MSG_TYPE_ANSWER             3
#define MSG_CANCEL_NOTIFY_MASK      0x80000000
static int retrieve_msg_frame(struct mixart_mgr *mgr, u32 *msg_frame)
static int get_msg(struct mixart_mgr *mgr, struct mixart_msg *resp,
u32 msg_frame_address )
static int send_msg( struct mixart_mgr *mgr,
struct mixart_msg *msg,
int max_answersize,
int mark_pending,
u32 *msg_event)
int snd_mixart_send_msg(struct mixart_mgr *mgr, struct mixart_msg *request, int max_resp_size, void *resp_data)
int snd_mixart_send_msg_wait_notif(struct mixart_mgr *mgr,
struct mixart_msg *request, u32 notif_event)
int snd_mixart_send_msg_nonblock(struct mixart_mgr *mgr, struct mixart_msg *request)
static u32 mixart_msg_data[MSG_DEFAULT_SIZE / 4];
void snd_mixart_msg_tasklet(unsigned long arg)
irqreturn_t snd_mixart_interrupt(int irq, void *dev_id)
void snd_mixart_init_mailbox(struct mixart_mgr *mgr)
void snd_mixart_exit_mailbox(struct mixart_mgr *mgr)
void snd_mixart_reset_board(struct mixart_mgr *mgr)
