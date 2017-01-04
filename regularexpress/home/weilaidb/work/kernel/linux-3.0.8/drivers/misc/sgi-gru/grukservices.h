#define __GRU_KSERVICES_H_
struct gru_message_queue_desc ;
extern int gru_create_message_queue(struct gru_message_queue_desc *mqd,
void *p, unsigned int bytes, int nasid, int vector, int apicid);
extern int gru_send_message_gpa(struct gru_message_queue_desc *mqd,
void *mesg, unsigned int bytes);
#define MQE_OK			0
#define MQE_CONGESTION		1
#define MQE_QUEUE_FULL		2
#define MQE_UNEXPECTED_CB_ERR	3
#define MQE_PAGE_OVERFLOW	10
#define MQE_BUG_NO_RESOURCES	11
extern void gru_free_message(struct gru_message_queue_desc *mqd,
void *mesq);
extern void *gru_get_next_message(struct gru_message_queue_desc *mqd);
int gru_read_gpa(unsigned long *value, unsigned long gpa);
extern int gru_copy_gpa(unsigned long dest_gpa, unsigned long src_gpa,
unsigned int bytes);
extern unsigned long gru_reserve_async_resources(int blade_id, int cbrs, int dsr_bytes,
struct completion *cmp);
extern void gru_release_async_resources(unsigned long han);
extern void gru_wait_async_cbr(unsigned long han);
extern void gru_lock_async_resource(unsigned long han,  void **cb, void **dsr);
extern void gru_unlock_async_resource(unsigned long han);
