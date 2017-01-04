#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define STATIC
#define STATIC  static
#if defined(CONFIG_SBE_HDLC_V7) || defined(CONFIG_SBE_WAN256T3_HDLC_V7) || \
defined(CONFIG_SBE_HDLC_V7_MODULE) || defined(CONFIG_SBE_WAN256T3_HDLC_V7_MODULE)
#define _v7_hdlc_  1
#define _v7_hdlc_  0
#if _v7_hdlc_
#define V7(x) (x ## _v7)
extern int  hdlc_netif_rx_v7 (hdlc_device *, struct sk_buff *);
extern int  register_hdlc_device_v7 (hdlc_device *);
extern int  unregister_hdlc_device_v7 (hdlc_device *);
#define V7(x) x
static int  dummy = 0;
extern int  cxt1e1_log_level;
extern int  drvr_state;
#if 1
u_int32_t
pci_read_32 (u_int32_t *p)
void
pci_write_32 (u_int32_t *p, u_int32_t v)
void
pci_flush_write (ci_t * ci)
STATIC void
watchdog_func (unsigned long arg)
int OS_init_watchdog(struct watchdog *wdp, void (*f) (void *), void *c, int usec)
void
OS_uwait (int usec, char *description)
void
OS_uwait_dummy (void)
void
OS_sem_init (void *sem, int state)
int
sd_line_is_ok (void *user)
void
sd_line_is_up (void *user)
void
sd_line_is_down (void *user)
void
sd_disable_xmit (void *user)
void
sd_enable_xmit (void *user)
int
sd_queue_stopped (void *user)
void sd_recv_consume(void *token, size_t len, void *user)
extern ci_t *CI;
void
VMETRO_TRACE (void *x)
void
VMETRO_TRIGGER (ci_t * ci, int x)
