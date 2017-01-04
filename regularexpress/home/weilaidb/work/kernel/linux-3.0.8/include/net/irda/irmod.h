#define IRMOD_H
typedef enum  LINK_STATUS;
typedef enum  LOCK_STATUS;
typedef enum  LOCAL_FLOW;
typedef enum  LM_REASON;
#define LM_UNKNOWN 0xff
struct qos_info;
typedef struct  notify_t;
#define NOTIFY_MAX_NAME 16
void irda_notify_init(notify_t *notify);
#define irda_lock(lock)		(! test_and_set_bit(0, (void *) (lock)))
#define irda_unlock(lock)	(test_and_clear_bit(0, (void *) (lock)))
