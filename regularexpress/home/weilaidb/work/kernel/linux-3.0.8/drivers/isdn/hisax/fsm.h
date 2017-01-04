#define __FSM_H__
struct FsmInst;
typedef void (* FSMFNPTR)(struct FsmInst *, int, void *);
struct Fsm ;
struct FsmInst ;
struct FsmNode ;
struct FsmTimer ;
int FsmNew(struct Fsm *fsm, struct FsmNode *fnlist, int fncount);
void FsmFree(struct Fsm *fsm);
int FsmEvent(struct FsmInst *fi, int event, void *arg);
void FsmChangeState(struct FsmInst *fi, int newstate);
void FsmInitTimer(struct FsmInst *fi, struct FsmTimer *ft);
int FsmAddTimer(struct FsmTimer *ft, int millisec, int event,
void *arg, int where);
void FsmRestartTimer(struct FsmTimer *ft, int millisec, int event,
void *arg, int where);
void FsmDelTimer(struct FsmTimer *ft, int where);
