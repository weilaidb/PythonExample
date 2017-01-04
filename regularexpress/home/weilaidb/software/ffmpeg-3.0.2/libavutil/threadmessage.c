struct AVThreadMessageQueue ;
int av_thread_message_queue_alloc(AVThreadMessageQueue **mq,
unsigned nelem,
unsigned elsize)
void av_thread_message_queue_set_free_func(AVThreadMessageQueue *mq,
void (*free_func)(void *msg))
void av_thread_message_queue_free(AVThreadMessageQueue **mq)
#if HAVE_THREADS
static int av_thread_message_queue_send_locked(AVThreadMessageQueue *mq,
void *msg,
unsigned flags)
static int av_thread_message_queue_recv_locked(AVThreadMessageQueue *mq,
void *msg,
unsigned flags)
int av_thread_message_queue_send(AVThreadMessageQueue *mq,
void *msg,
unsigned flags)
int av_thread_message_queue_recv(AVThreadMessageQueue *mq,
void *msg,
unsigned flags)
void av_thread_message_queue_set_err_send(AVThreadMessageQueue *mq,
int err)
void av_thread_message_queue_set_err_recv(AVThreadMessageQueue *mq,
int err)
#if HAVE_THREADS
static void free_func_wrap(void *arg, void *msg, int size)
void av_thread_message_flush(AVThreadMessageQueue *mq)
