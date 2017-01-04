#define DEBUG
typedef struct queue_entry  QE_t;
#define QUEUE_MAGIC_FREE	0xf7e1c9a3
#define QUEUE_MAGIC_USED	0xf7e1cc33
#define SET_MAGIC(q,m)	((q)->magic = (m))
#define BAD_MAGIC(q,m)	((q)->magic != (m))
#define SET_MAGIC(q,m)	do  while (0)
#define BAD_MAGIC(q,m)	(0)
#define NR_QE	32
int queue_initialise (Queue_t *queue)
void queue_free (Queue_t *queue)
int __queue_add(Queue_t *queue, struct scsi_cmnd *SCpnt, int head)
static struct scsi_cmnd *__queue_remove(Queue_t *queue, struct list_head *ent)
struct scsi_cmnd *queue_remove_exclude(Queue_t *queue, unsigned long *exclude)
struct scsi_cmnd *queue_remove(Queue_t *queue)
struct scsi_cmnd *queue_remove_tgtluntag(Queue_t *queue, int target, int lun,
int tag)
void queue_remove_all_target(Queue_t *queue, int target)
int queue_probetgtlun (Queue_t *queue, int target, int lun)
int queue_remove_cmd(Queue_t *queue, struct scsi_cmnd *SCpnt)
EXPORT_SYMBOL(queue_initialise);
EXPORT_SYMBOL(queue_free);
EXPORT_SYMBOL(__queue_add);
EXPORT_SYMBOL(queue_remove);
EXPORT_SYMBOL(queue_remove_exclude);
EXPORT_SYMBOL(queue_remove_tgtluntag);
EXPORT_SYMBOL(queue_remove_cmd);
EXPORT_SYMBOL(queue_remove_all_target);
EXPORT_SYMBOL(queue_probetgtlun);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("SCSI command queueing");
MODULE_LICENSE("GPL");
