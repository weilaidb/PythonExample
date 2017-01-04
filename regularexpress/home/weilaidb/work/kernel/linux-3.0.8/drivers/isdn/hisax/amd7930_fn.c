static void Amd7930_new_ph(struct IsdnCardState *cs);
static WORD initAMD[] = ;
static void
WriteWordAmd7930(struct IsdnCardState *cs, BYTE reg, WORD val)
static WORD
ReadWordAmd7930(struct IsdnCardState *cs, BYTE reg)
static void
Amd7930_ph_command(struct IsdnCardState *cs, u_char command, char *s)
static BYTE i430States[] = ;
static BYTE stateHelper[] = ;
static void
Amd7930_get_state(struct IsdnCardState *cs)
static void
Amd7930_new_ph(struct IsdnCardState *cs)
static void
Amd7930_bh(struct work_struct *work)
static void
Amd7930_empty_Dfifo(struct IsdnCardState *cs, int flag)
static void
Amd7930_fill_Dfifo(struct IsdnCardState *cs)
void Amd7930_interrupt(struct IsdnCardState *cs, BYTE irflags)
static void
Amd7930_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_Amd7930(struct PStack *st, struct IsdnCardState *cs)
static void
DC_Close_Amd7930(struct IsdnCardState *cs)
static void
dbusy_timer_handler(struct IsdnCardState *cs)
void Amd7930_init(struct IsdnCardState *cs)
void __devinit
setup_Amd7930(struct IsdnCardState *cs)
