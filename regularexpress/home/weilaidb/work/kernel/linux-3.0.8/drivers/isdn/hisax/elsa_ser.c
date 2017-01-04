#define MAX_MODEM_BUF	256
#define WAKEUP_CHARS	(MAX_MODEM_BUF/2)
#define RS_ISR_PASS_LIMIT 256
#define BASE_BAUD ( 1843200 / 16 )
#undef SERIAL_DEBUG_OPEN
#undef SERIAL_DEBUG_INTR
#undef SERIAL_DEBUG_FLOW
#undef SERIAL_DEBUG_REG
static u_char deb[32];
const char *ModemIn[] = ;
const char *ModemOut[] = ;
static char *MInit_1 = "AT&F&C1E0&D2\r\0";
static char *MInit_2 = "ATL2M1S64=13\r\0";
static char *MInit_3 = "AT+FCLASS=0\r\0";
static char *MInit_4 = "ATV1S2=128X1\r\0";
static char *MInit_5 = "AT\\V8\\N3\r\0";
static char *MInit_6 = "ATL0M0&G0%E1\r\0";
static char *MInit_7 = "AT%L1%M0%C3\r\0";
static char *MInit_speed28800 = "AT%G0%B28800\r\0";
static char *MInit_dialout = "ATs7=60 x1 d\r\0";
static char *MInit_dialin = "ATs7=60 x1 a\r\0";
static inline unsigned int serial_in(struct IsdnCardState *cs, int offset)
static inline unsigned int serial_inp(struct IsdnCardState *cs, int offset)
static inline void serial_out(struct IsdnCardState *cs, int offset, int value)
static inline void serial_outp(struct IsdnCardState *cs, int offset,
int value)
static void change_speed(struct IsdnCardState *cs, int baud)
static int mstartup(struct IsdnCardState *cs)
static void mshutdown(struct IsdnCardState *cs)
static inline int
write_modem(struct BCState *bcs)
static inline void
modem_fill(struct BCState *bcs)
static inline void receive_chars(struct IsdnCardState *cs,
int *status)
static inline void transmit_chars(struct IsdnCardState *cs, int *intr_done)
static void rs_interrupt_elsa(struct IsdnCardState *cs)
extern int open_hscxstate(struct IsdnCardState *cs, struct BCState *bcs);
extern void modehscx(struct BCState *bcs, int mode, int bc);
extern void hscx_l2l1(struct PStack *st, int pr, void *arg);
static void
close_elsastate(struct BCState *bcs)
static void
modem_write_cmd(struct IsdnCardState *cs, u_char *buf, int len)
static void
modem_set_init(struct IsdnCardState *cs)
static void
modem_set_dial(struct IsdnCardState *cs, int outgoing)
static void
modem_l2l1(struct PStack *st, int pr, void *arg)
static int
setstack_elsa(struct PStack *st, struct BCState *bcs)
static void
init_modem(struct IsdnCardState *cs)
static void
release_modem(struct IsdnCardState *cs)
