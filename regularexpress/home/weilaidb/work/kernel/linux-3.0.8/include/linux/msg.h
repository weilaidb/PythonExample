#define _LINUX_MSG_H
#define MSG_STAT 11
#define MSG_INFO 12
#define MSG_NOERROR     010000
#define MSG_EXCEPT      020000
struct msqid_ds ;
struct msgbuf ;
struct msginfo ;
#define MSG_MEM_SCALE 32
#define MSGMNI    16
#define MSGMAX  8192
#define MSGMNB 16384
#define MSGPOOL (MSGMNI * MSGMNB / 1024)
#define MSGTQL  MSGMNB
#define MSGMAP  MSGMNB
#define MSGSSZ  16
#define __MSGSEG ((MSGPOOL * 1024) / MSGSSZ)
#define MSGSEG (__MSGSEG <= 0xffff ? __MSGSEG : 0xffff)
struct msg_msg ;
struct msg_queue ;
extern long do_msgsnd(int msqid, long mtype, void __user *mtext,
size_t msgsz, int msgflg);
extern long do_msgrcv(int msqid, long *pmtype, void __user *mtext,
size_t msgsz, long msgtyp, int msgflg);
