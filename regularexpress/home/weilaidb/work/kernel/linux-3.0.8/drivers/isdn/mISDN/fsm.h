#define _MISDN_FSM_H
struct FsmInst;
typedef void (*FSMFNPTR)(struct FsmInst *, int, void *);
struct Fsm ;
struct FsmInst ;
struct FsmNode ;
struct FsmTimer ;
extern void mISDN_FsmNew(struct Fsm *, struct FsmNode *, int);
extern void mISDN_FsmFree(struct Fsm *);
extern int mISDN_FsmEvent(struct FsmInst *, int , void *);
extern void mISDN_FsmChangeState(struct FsmInst *, int);
extern void mISDN_FsmInitTimer(struct FsmInst *, struct FsmTimer *);
extern int mISDN_FsmAddTimer(struct FsmTimer *, int, int, void *, int);
extern void mISDN_FsmRestartTimer(struct FsmTimer *, int, int, void *, int);
extern void mISDN_FsmDelTimer(struct FsmTimer *, int);
