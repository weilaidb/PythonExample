static inline int
WaitForBusy(struct IsdnCardState *cs)
static inline int
WaitNoBusy(struct IsdnCardState *cs)
static int
GetFreeFifoBytes(struct BCState *bcs)
static int
ReadZReg(struct BCState *bcs, u_char reg)
static void
hfc_clear_fifo(struct BCState *bcs)
static struct sk_buff
*
hfc_empty_fifo(struct BCState *bcs, int count)
static void
hfc_fill_fifo(struct BCState *bcs)
void
main_irq_hfc(struct BCState *bcs)
static void
mode_hfc(struct BCState *bcs, int mode, int bc)
static void
hfc_l2l1(struct PStack *st, int pr, void *arg)
static void
close_hfcstate(struct BCState *bcs)
static int
open_hfcstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_hfc(struct PStack *st, struct BCState *bcs)
static void
init_send(struct BCState *bcs)
void
inithfc(struct IsdnCardState *cs)
void
releasehfc(struct IsdnCardState *cs)
