#define FSM_TIMER_DEBUG 0
int
FsmNew(struct Fsm *fsm, struct FsmNode *fnlist, int fncount)
void
FsmFree(struct Fsm *fsm)
int
FsmEvent(struct FsmInst *fi, int event, void *arg)
void
FsmChangeState(struct FsmInst *fi, int newstate)
static void
FsmExpireTimer(struct FsmTimer *ft)
void
FsmInitTimer(struct FsmInst *fi, struct FsmTimer *ft)
void
FsmDelTimer(struct FsmTimer *ft, int where)
int
FsmAddTimer(struct FsmTimer *ft,
int millisec, int event, void *arg, int where)
void
FsmRestartTimer(struct FsmTimer *ft,
int millisec, int event, void *arg, int where)
