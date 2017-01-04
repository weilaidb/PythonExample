#define FSM_TIMER_DEBUG 0
void
mISDN_FsmNew(struct Fsm *fsm,
struct FsmNode *fnlist, int fncount)
EXPORT_SYMBOL(mISDN_FsmNew);
void
mISDN_FsmFree(struct Fsm *fsm)
EXPORT_SYMBOL(mISDN_FsmFree);
int
mISDN_FsmEvent(struct FsmInst *fi, int event, void *arg)
EXPORT_SYMBOL(mISDN_FsmEvent);
void
mISDN_FsmChangeState(struct FsmInst *fi, int newstate)
EXPORT_SYMBOL(mISDN_FsmChangeState);
static void
FsmExpireTimer(struct FsmTimer *ft)
void
mISDN_FsmInitTimer(struct FsmInst *fi, struct FsmTimer *ft)
EXPORT_SYMBOL(mISDN_FsmInitTimer);
void
mISDN_FsmDelTimer(struct FsmTimer *ft, int where)
EXPORT_SYMBOL(mISDN_FsmDelTimer);
int
mISDN_FsmAddTimer(struct FsmTimer *ft,
int millisec, int event, void *arg, int where)
EXPORT_SYMBOL(mISDN_FsmAddTimer);
void
mISDN_FsmRestartTimer(struct FsmTimer *ft,
int millisec, int event, void *arg, int where)
EXPORT_SYMBOL(mISDN_FsmRestartTimer);
