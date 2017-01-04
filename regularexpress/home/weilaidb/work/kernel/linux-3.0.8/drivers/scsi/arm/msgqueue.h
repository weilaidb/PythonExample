#define MSGQUEUE_H
struct message ;
struct msgqueue_entry ;
#define NR_MESSAGES 4
typedef struct  MsgQueue_t;
extern void msgqueue_initialise(MsgQueue_t *msgq);
extern void msgqueue_free(MsgQueue_t *msgq);
extern int msgqueue_msglength(MsgQueue_t *msgq);
extern struct message *msgqueue_getmsg(MsgQueue_t *msgq, int msgno);
extern int msgqueue_addmsg(MsgQueue_t *msgq, int length, ...);
extern void msgqueue_flush(MsgQueue_t *msgq);
