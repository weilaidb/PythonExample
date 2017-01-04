#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static void
dummyf(struct IsdnCardState *cs, u_char * data, int size)
static inline u_char
ReadReg(struct IsdnCardState *cs, int data, u_char reg)
static inline void
WriteReg(struct IsdnCardState *cs, int data, u_char reg, u_char value)
static u_char
readreghfcd(struct IsdnCardState *cs, u_char offset)
static void
writereghfcd(struct IsdnCardState *cs, u_char offset, u_char value)
static inline int
WaitForBusy(struct IsdnCardState *cs)
static inline int
WaitNoBusy(struct IsdnCardState *cs)
static int
SelFiFo(struct IsdnCardState *cs, u_char FiFo)
static int
GetFreeFifoBytes_B(struct BCState *bcs)
static int
GetFreeFifoBytes_D(struct IsdnCardState *cs)
static int
ReadZReg(struct IsdnCardState *cs, u_char reg)
static struct sk_buff
*hfc_empty_fifo(struct BCState *bcs, int count)
static void
hfc_fill_fifo(struct BCState *bcs)
static void
hfc_send_data(struct BCState *bcs)
static void
main_rec_2bds0(struct BCState *bcs)
static void
mode_2bs0(struct BCState *bcs, int mode, int bc)
static void
hfc_l2l1(struct PStack *st, int pr, void *arg)
static void
close_2bs0(struct BCState *bcs)
static int
open_hfcstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_2b(struct PStack *st, struct BCState *bcs)
static void
hfcd_bh(struct work_struct *work)
static
int receive_dmsg(struct IsdnCardState *cs)
static void
hfc_fill_dfifo(struct IsdnCardState *cs)
static
struct BCState *Sel_BCS(struct IsdnCardState *cs, int channel)
void
hfc2bds0_interrupt(struct IsdnCardState *cs, u_char val)
static void
HFCD_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_hfcd(struct PStack *st, struct IsdnCardState *cs)
static void
hfc_dbusy_timer(struct IsdnCardState *cs)
static unsigned int
*init_send_hfcd(int cnt)
void
init2bds0(struct IsdnCardState *cs)
void
release2bds0(struct IsdnCardState *cs)
void
set_cs_func(struct IsdnCardState *cs)
