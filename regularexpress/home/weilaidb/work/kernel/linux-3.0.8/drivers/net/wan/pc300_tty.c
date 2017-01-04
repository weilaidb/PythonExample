#define	CPC_TTY_NPORTS	8
#define	CPC_TTY_MAJOR	CYCLADES_MAJOR
#define CPC_TTY_MINOR_START	240
#define CPC_TTY_MAX_MTU	2000
#define	CPC_TTY_ST_IDLE	0
#define CPC_TTY_ST_INIT	1
#define CPC_TTY_ST_OPEN	2
#define	CPC_TTY_LOCK(card,flags)\
do  while (0)
#define CPC_TTY_UNLOCK(card,flags)	\
do  while (0)
#define	CPC_TTY_DBG(format,a...)
typedef struct _st_cpc_rx_buf  st_cpc_rx_buf;
struct st_cpc_rx_list ;
typedef	struct _st_cpc_tty_area  st_cpc_tty_area;
static struct tty_driver serial_drv;
static st_cpc_tty_area	cpc_tty_area[CPC_TTY_NPORTS];
static int cpc_tty_cnt = 0;
static int cpc_tty_unreg_flag = 0;
static int cpc_tty_open(struct tty_struct *tty, struct file *flip);
static void cpc_tty_close(struct tty_struct *tty, struct file *flip);
static int cpc_tty_write(struct tty_struct *tty, const unsigned char *buf, int count);
static int cpc_tty_write_room(struct tty_struct *tty);
static int cpc_tty_chars_in_buffer(struct tty_struct *tty);
static void cpc_tty_flush_buffer(struct tty_struct *tty);
static void cpc_tty_hangup(struct tty_struct *tty);
static void cpc_tty_rx_work(struct work_struct *work);
static void cpc_tty_tx_work(struct work_struct *work);
static int cpc_tty_send_to_card(pc300dev_t *dev,void *buf, int len);
static void cpc_tty_trace(pc300dev_t *dev, char* buf, int len, char rxtx);
static void cpc_tty_signal_off(pc300dev_t *pc300dev, unsigned char);
static void cpc_tty_signal_on(pc300dev_t *pc300dev, unsigned char);
static int pc300_tiocmset(struct tty_struct *, unsigned int, unsigned int);
static int pc300_tiocmget(struct tty_struct *);
void cpc_tty_init(pc300dev_t *dev);
void cpc_tty_unregister_service(pc300dev_t *pc300dev);
void cpc_tty_receive(pc300dev_t *pc300dev);
void cpc_tty_trigger_poll(pc300dev_t *pc300dev);
void cpc_tty_reset_var(void);
static void cpc_tty_signal_off(pc300dev_t *pc300dev, unsigned char signal)
static void cpc_tty_signal_on(pc300dev_t *pc300dev, unsigned char signal)
static const struct tty_operations pc300_ops = ;
void cpc_tty_init(pc300dev_t *pc300dev)
static int cpc_tty_open(struct tty_struct *tty, struct file *flip)
static void cpc_tty_close(struct tty_struct *tty, struct file *flip)
static int cpc_tty_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int cpc_tty_write_room(struct tty_struct *tty)
static int cpc_tty_chars_in_buffer(struct tty_struct *tty)
static int pc300_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int pc300_tiocmget(struct tty_struct *tty)
static void cpc_tty_flush_buffer(struct tty_struct *tty)
static void cpc_tty_hangup(struct tty_struct *tty)
static void cpc_tty_rx_work(struct work_struct *work)
static void cpc_tty_rx_disc_frame(pc300ch_t *pc300chan)
void cpc_tty_receive(pc300dev_t *pc300dev)
static void cpc_tty_tx_work(struct work_struct *work)
static int cpc_tty_send_to_card(pc300dev_t *dev,void* buf, int len)
static void cpc_tty_trace(pc300dev_t *dev, char* buf, int len, char rxtx)
void cpc_tty_unregister_service(pc300dev_t *pc300dev)
void cpc_tty_trigger_poll(pc300dev_t *pc300dev)
void cpc_tty_reset_var(void)
