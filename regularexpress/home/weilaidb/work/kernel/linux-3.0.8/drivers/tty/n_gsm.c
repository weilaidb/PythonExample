static int debug;
module_param(debug, int, 0600);
#define T1	(HZ/10)
#define T2	(HZ/3)
#define N2	3
#define T1	HZ
#define T2	(2 * HZ)
#define MAX_MRU 512
#define MAX_MTU 512
struct gsm_msg ;
struct gsm_dlci ;
#define NUM_DLCI		64
struct gsm_control ;
struct gsm_mux ;
#define MAX_MUX		4
static struct gsm_mux *gsm_mux[MAX_MUX];
static spinlock_t gsm_mux_lock;
#define CR			0x02
#define EA			0x01
#define	PF			0x10
#define RR			0x01
#define UI			0x03
#define RNR			0x05
#define REJ			0x09
#define DM			0x0F
#define SABM			0x2F
#define DISC			0x43
#define UA			0x63
#define	UIH			0xEF
#define CMD_NSC			0x09
#define CMD_TEST		0x11
#define CMD_PSC			0x21
#define CMD_RLS			0x29
#define CMD_FCOFF		0x31
#define CMD_PN			0x41
#define CMD_RPN			0x49
#define CMD_FCON		0x51
#define CMD_CLD			0x61
#define CMD_SNC			0x69
#define CMD_MSC			0x71
#define MDM_FC			0x01
#define MDM_RTC			0x02
#define MDM_RTR			0x04
#define MDM_IC			0x20
#define MDM_DV			0x40
#define GSM0_SOF		0xF9
#define GSM1_SOF		0x7E
#define GSM1_ESCAPE		0x7D
#define GSM1_ESCAPE_BITS	0x20
#define XON			0x11
#define XOFF			0x13
static const struct tty_port_operations gsm_port_ops;
static const u8 gsm_fcs8[256] = ;
#define INIT_FCS	0xFF
#define GOOD_FCS	0xCF
static inline u8 gsm_fcs_add(u8 fcs, u8 c)
static inline u8 gsm_fcs_add_block(u8 fcs, u8 *c, int len)
static int gsm_read_ea(unsigned int *val, u8 c)
static u8 gsm_encode_modem(const struct gsm_dlci *dlci)
static void gsm_print_packet(const char *hdr, int addr, int cr,
u8 control, const u8 *data, int dlen)
static int gsm_stuff_frame(const u8 *input, u8 *output, int len)
static void gsm_send(struct gsm_mux *gsm, int addr, int cr, int control)
static inline void gsm_response(struct gsm_mux *gsm, int addr, int control)
static inline void gsm_command(struct gsm_mux *gsm, int addr, int control)
#define HDR_LEN		6
static struct gsm_msg *gsm_data_alloc(struct gsm_mux *gsm, u8 addr, int len,
u8 ctrl)
static void gsm_data_kick(struct gsm_mux *gsm)
static void __gsm_data_queue(struct gsm_dlci *dlci, struct gsm_msg *msg)
static void gsm_data_queue(struct gsm_dlci *dlci, struct gsm_msg *msg)
static int gsm_dlci_data_output(struct gsm_mux *gsm, struct gsm_dlci *dlci)
static int gsm_dlci_data_output_framed(struct gsm_mux *gsm,
struct gsm_dlci *dlci)
static void gsm_dlci_data_sweep(struct gsm_mux *gsm)
static void gsm_dlci_data_kick(struct gsm_dlci *dlci)
static void gsm_control_reply(struct gsm_mux *gsm, int cmd, u8 *data,
int dlen)
static void gsm_process_modem(struct tty_struct *tty, struct gsm_dlci *dlci,
u32 modem, int clen)
static void gsm_control_modem(struct gsm_mux *gsm, u8 *data, int clen)
static void gsm_control_rls(struct gsm_mux *gsm, u8 *data, int clen)
static void gsm_dlci_begin_close(struct gsm_dlci *dlci);
static void gsm_control_message(struct gsm_mux *gsm, unsigned int command,
u8 *data, int clen)
static void gsm_control_response(struct gsm_mux *gsm, unsigned int command,
u8 *data, int clen)
static void gsm_control_transmit(struct gsm_mux *gsm, struct gsm_control *ctrl)
static void gsm_control_retransmit(unsigned long data)
static struct gsm_control *gsm_control_send(struct gsm_mux *gsm,
unsigned int command, u8 *data, int clen)
static int gsm_control_wait(struct gsm_mux *gsm, struct gsm_control *control)
static void gsm_dlci_close(struct gsm_dlci *dlci)
static void gsm_dlci_open(struct gsm_dlci *dlci)
static void gsm_dlci_t1(unsigned long data)
static void gsm_dlci_begin_open(struct gsm_dlci *dlci)
static void gsm_dlci_begin_close(struct gsm_dlci *dlci)
static void gsm_dlci_data(struct gsm_dlci *dlci, u8 *data, int clen)
static void gsm_dlci_command(struct gsm_dlci *dlci, u8 *data, int len)
static struct gsm_dlci *gsm_dlci_alloc(struct gsm_mux *gsm, int addr)
static void gsm_dlci_free(struct gsm_dlci *dlci)
static void gsm_queue(struct gsm_mux *gsm)
static void gsm0_receive(struct gsm_mux *gsm, unsigned char c)
static void gsm1_receive(struct gsm_mux *gsm, unsigned char c)
static void gsm_error(struct gsm_mux *gsm,
unsigned char data, unsigned char flag)
void gsm_cleanup_mux(struct gsm_mux *gsm)
EXPORT_SYMBOL_GPL(gsm_cleanup_mux);
int gsm_activate_mux(struct gsm_mux *gsm)
EXPORT_SYMBOL_GPL(gsm_activate_mux);
void gsm_free_mux(struct gsm_mux *gsm)
EXPORT_SYMBOL_GPL(gsm_free_mux);
struct gsm_mux *gsm_alloc_mux(void)
EXPORT_SYMBOL_GPL(gsm_alloc_mux);
static int gsmld_output(struct gsm_mux *gsm, u8 *data, int len)
static int gsmld_attach_gsm(struct tty_struct *tty, struct gsm_mux *gsm)
static void gsmld_detach_gsm(struct tty_struct *tty, struct gsm_mux *gsm)
static void gsmld_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
static ssize_t gsmld_chars_in_buffer(struct tty_struct *tty)
static void gsmld_flush_buffer(struct tty_struct *tty)
static void gsmld_close(struct tty_struct *tty)
static int gsmld_open(struct tty_struct *tty)
static void gsmld_write_wakeup(struct tty_struct *tty)
static ssize_t gsmld_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t nr)
static ssize_t gsmld_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr)
static unsigned int gsmld_poll(struct tty_struct *tty, struct file *file,
poll_table *wait)
static int gsmld_config(struct tty_struct *tty, struct gsm_mux *gsm,
struct gsm_config *c)
static int gsmld_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
struct tty_ldisc_ops tty_ldisc_packet = ;
#define TX_SIZE		512
static int gsmtty_modem_update(struct gsm_dlci *dlci, u8 brk)
static int gsm_carrier_raised(struct tty_port *port)
static void gsm_dtr_rts(struct tty_port *port, int onoff)
static const struct tty_port_operations gsm_port_ops = ;
static int gsmtty_open(struct tty_struct *tty, struct file *filp)
static void gsmtty_close(struct tty_struct *tty, struct file *filp)
static void gsmtty_hangup(struct tty_struct *tty)
static int gsmtty_write(struct tty_struct *tty, const unsigned char *buf,
int len)
static int gsmtty_write_room(struct tty_struct *tty)
static int gsmtty_chars_in_buffer(struct tty_struct *tty)
static void gsmtty_flush_buffer(struct tty_struct *tty)
static void gsmtty_wait_until_sent(struct tty_struct *tty, int timeout)
static int gsmtty_tiocmget(struct tty_struct *tty)
static int gsmtty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int gsmtty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void gsmtty_set_termios(struct tty_struct *tty, struct ktermios *old)
static void gsmtty_throttle(struct tty_struct *tty)
static void gsmtty_unthrottle(struct tty_struct *tty)
static int gsmtty_break_ctl(struct tty_struct *tty, int state)
static struct tty_driver *gsm_tty_driver;
static const struct tty_operations gsmtty_ops = ;
static int __init gsm_init(void)
static void __exit gsm_exit(void)
module_init(gsm_init);
module_exit(gsm_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_GSM0710);
