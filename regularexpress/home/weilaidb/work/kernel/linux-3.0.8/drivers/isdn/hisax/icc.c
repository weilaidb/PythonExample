#define DBUSY_TIMER_VALUE 80
#define ARCOFI_USE 0
static char *ICCVer[] =
;
void
ICCVersion(struct IsdnCardState *cs, char *s)
static void
ph_command(struct IsdnCardState *cs, unsigned int command)
static void
icc_new_ph(struct IsdnCardState *cs)
static void
icc_bh(struct work_struct *work)
static void
icc_empty_fifo(struct IsdnCardState *cs, int count)
static void
icc_fill_fifo(struct IsdnCardState *cs)
void
icc_interrupt(struct IsdnCardState *cs, u_char val)
static void
ICC_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_icc(struct PStack *st, struct IsdnCardState *cs)
static void
DC_Close_icc(struct IsdnCardState *cs)
static void
dbusy_timer_handler(struct IsdnCardState *cs)
void
initicc(struct IsdnCardState *cs)
void
clear_pending_icc_ints(struct IsdnCardState *cs)
void __devinit
setup_icc(struct IsdnCardState *cs)
