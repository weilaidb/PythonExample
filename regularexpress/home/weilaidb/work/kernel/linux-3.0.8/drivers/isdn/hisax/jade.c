int
JadeVersion(struct IsdnCardState *cs, char *s)
static void
jade_write_indirect(struct IsdnCardState *cs, u_char reg, u_char value)
static void
modejade(struct BCState *bcs, int mode, int bc)
static void
jade_l2l1(struct PStack *st, int pr, void *arg)
static void
close_jadestate(struct BCState *bcs)
static int
open_jadestate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_jade(struct PStack *st, struct BCState *bcs)
void
clear_pending_jade_ints(struct IsdnCardState *cs)
void
initjade(struct IsdnCardState *cs)
