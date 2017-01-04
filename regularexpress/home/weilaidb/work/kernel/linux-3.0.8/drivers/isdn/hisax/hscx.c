static char *HSCXVer[] =
;
int
HscxVersion(struct IsdnCardState *cs, char *s)
void
modehscx(struct BCState *bcs, int mode, int bc)
void
hscx_l2l1(struct PStack *st, int pr, void *arg)
static void
close_hscxstate(struct BCState *bcs)
int
open_hscxstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_hscx(struct PStack *st, struct BCState *bcs)
void
clear_pending_hscx_ints(struct IsdnCardState *cs)
void
inithscx(struct IsdnCardState *cs)
void
inithscxisac(struct IsdnCardState *cs, int part)
