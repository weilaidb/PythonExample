#define PRIO_QUEUE_H
typedef int (*prio_queue_compare_fn)(const void *one, const void *two, void *cb_data);
struct prio_queue ;
extern void prio_queue_put(struct prio_queue *, void *thing);
extern void *prio_queue_get(struct prio_queue *);
extern void clear_prio_queue(struct prio_queue *);
extern void prio_queue_reverse(struct prio_queue *);
