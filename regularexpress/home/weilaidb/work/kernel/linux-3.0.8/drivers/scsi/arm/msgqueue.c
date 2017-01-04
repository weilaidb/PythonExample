static struct msgqueue_entry *mqe_alloc(MsgQueue_t *msgq)
static void mqe_free(MsgQueue_t *msgq, struct msgqueue_entry *mq)
void msgqueue_initialise(MsgQueue_t *msgq)
void msgqueue_free(MsgQueue_t *msgq)
int msgqueue_msglength(MsgQueue_t *msgq)
struct message *msgqueue_getmsg(MsgQueue_t *msgq, int msgno)
int msgqueue_addmsg(MsgQueue_t *msgq, int length, ...)
void msgqueue_flush(MsgQueue_t *msgq)
EXPORT_SYMBOL(msgqueue_initialise);
EXPORT_SYMBOL(msgqueue_free);
EXPORT_SYMBOL(msgqueue_msglength);
EXPORT_SYMBOL(msgqueue_getmsg);
EXPORT_SYMBOL(msgqueue_addmsg);
EXPORT_SYMBOL(msgqueue_flush);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("SCSI message queue handling");
MODULE_LICENSE("GPL");
