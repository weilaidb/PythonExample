#define DBUSY_TIMER_VALUE 80
#define ARCOFI_USE 1
static char *ISACVer[] __devinitdata =
;
void __devinit ISACVersion(struct IsdnCardState *cs, char *s)
static void
ph_command(struct IsdnCardState *cs, unsigned int command)
static void
isac_new_ph(struct IsdnCardState *cs)
static void
isac_bh(struct work_struct *work)
static void
isac_empty_fifo(struct IsdnCardState *cs, int count)
static void
isac_fill_fifo(struct IsdnCardState *cs)
void
isac_interrupt(struct IsdnCardState *cs, u_char val)
static void
ISAC_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_isac(struct PStack *st, struct IsdnCardState *cs)
static void
DC_Close_isac(struct IsdnCardState *cs)
static void
dbusy_timer_handler(struct IsdnCardState *cs)
void initisac(struct IsdnCardState *cs)
void clear_pending_isac_ints(struct IsdnCardState *cs)
void __devinit
setup_isac(struct IsdnCardState *cs)
