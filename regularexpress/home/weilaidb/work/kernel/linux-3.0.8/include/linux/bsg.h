#define BSG_H
#define BSG_PROTOCOL_SCSI		0
#define BSG_SUB_PROTOCOL_SCSI_CMD	0
#define BSG_SUB_PROTOCOL_SCSI_TMF	1
#define BSG_SUB_PROTOCOL_SCSI_TRANSPORT	2
#define BSG_FLAG_Q_AT_TAIL 0x10
struct sg_io_v4 ;
#if defined(CONFIG_BLK_DEV_BSG)
struct bsg_class_device ;
extern int bsg_register_queue(struct request_queue *q,
struct device *parent, const char *name,
void (*release)(struct device *));
extern void bsg_unregister_queue(struct request_queue *);
static inline int bsg_register_queue(struct request_queue *q,
struct device *parent, const char *name,
void (*release)(struct device *))
static inline void bsg_unregister_queue(struct request_queue *q)
