static void ph_connect(struct st5481_adapter *adapter);
static void ph_disconnect(struct st5481_adapter *adapter);
static struct Fsm l1fsm;
static char *strL1State[] =
;
static char *strL1Event[] =
;
static inline void D_L1L2(struct st5481_adapter *adapter, int pr, void *arg)
static void
l1_go_f3(struct FsmInst *fi, int event, void *arg)
static void
l1_go_f6(struct FsmInst *fi, int event, void *arg)
static void
l1_go_f7(struct FsmInst *fi, int event, void *arg)
static void
l1_go_f8(struct FsmInst *fi, int event, void *arg)
static void
l1_timer3(struct FsmInst *fi, int event, void *arg)
static void
l1_ignore(struct FsmInst *fi, int event, void *arg)
static void
l1_activate(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L1FnList[] __initdata =
;
static __attribute__((format(printf, 2, 3)))
void l1m_debug(struct FsmInst *fi, char *fmt, ...)
static struct Fsm dout_fsm;
static char *strDoutState[] =
;
static char *strDoutEvent[] =
;
static __attribute__((format(printf, 2, 3)))
void dout_debug(struct FsmInst *fi, char *fmt, ...)
static void dout_stop_event(void *context)
static void usb_d_out(struct st5481_adapter *adapter, int buf_nr)
static void fifo_reseted(void *context)
static void usb_d_out_complete(struct urb *urb)
static void dout_start_xmit(struct FsmInst *fsm, int event, void *arg)
static void dout_short_fifo(struct FsmInst *fsm, int event, void *arg)
static void dout_end_short_frame(struct FsmInst *fsm, int event, void *arg)
static void dout_long_enable_fifo(struct FsmInst *fsm, int event, void *arg)
static void dout_long_den(struct FsmInst *fsm, int event, void *arg)
static void dout_reset(struct FsmInst *fsm, int event, void *arg)
static void dout_stop(struct FsmInst *fsm, int event, void *arg)
static void dout_underrun(struct FsmInst *fsm, int event, void *arg)
static void dout_check_busy(struct FsmInst *fsm, int event, void *arg)
static void dout_reseted(struct FsmInst *fsm, int event, void *arg)
static void dout_complete(struct FsmInst *fsm, int event, void *arg)
static void dout_ignore(struct FsmInst *fsm, int event, void *arg)
static struct FsmNode DoutFnList[] __initdata =
;
void st5481_d_l2l1(struct hisax_if *hisax_d_if, int pr, void *arg)
static void ph_connect(struct st5481_adapter *adapter)
static void ph_disconnect(struct st5481_adapter *adapter)
static int st5481_setup_d_out(struct st5481_adapter *adapter)
static void st5481_release_d_out(struct st5481_adapter *adapter)
int st5481_setup_d(struct st5481_adapter *adapter)
void st5481_release_d(struct st5481_adapter *adapter)
int __init st5481_d_init(void)
void st5481_d_exit(void)
