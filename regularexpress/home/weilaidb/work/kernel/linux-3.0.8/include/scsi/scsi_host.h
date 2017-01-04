#define _SCSI_SCSI_HOST_H
struct request_queue;
struct block_device;
struct completion;
struct module;
struct scsi_cmnd;
struct scsi_device;
struct scsi_target;
struct Scsi_Host;
struct scsi_host_cmd_pool;
struct scsi_transport_template;
struct blk_queue_tags;
#define SG_NONE 0
#define SG_ALL	SCSI_MAX_SG_SEGMENTS
#define MODE_UNKNOWN 0x00
#define MODE_INITIATOR 0x01
#define MODE_TARGET 0x02
#define DISABLE_CLUSTERING 0
#define ENABLE_CLUSTERING 1
enum ;
struct scsi_host_template ;
#define DEF_SCSI_QCMD(func_name) \
int func_name(struct Scsi_Host *shost, struct scsi_cmnd *cmd)	\
enum scsi_host_state ;
struct Scsi_Host ;
#define		class_to_shost(d)	\
container_of(d, struct Scsi_Host, shost_dev)
#define shost_printk(prefix, shost, fmt, a...)	\
dev_printk(prefix, &(shost)->shost_gendev, fmt, ##a)
static inline void *shost_priv(struct Scsi_Host *shost)
int scsi_is_host_device(const struct device *);
static inline struct Scsi_Host *dev_to_shost(struct device *dev)
static inline int scsi_host_in_recovery(struct Scsi_Host *shost)
extern int scsi_queue_work(struct Scsi_Host *, struct work_struct *);
extern void scsi_flush_work(struct Scsi_Host *);
extern struct Scsi_Host *scsi_host_alloc(struct scsi_host_template *, int);
extern int __must_check scsi_add_host_with_dma(struct Scsi_Host *,
struct device *,
struct device *);
extern void scsi_scan_host(struct Scsi_Host *);
extern void scsi_rescan_device(struct device *);
extern void scsi_remove_host(struct Scsi_Host *);
extern struct Scsi_Host *scsi_host_get(struct Scsi_Host *);
extern void scsi_host_put(struct Scsi_Host *t);
extern struct Scsi_Host *scsi_host_lookup(unsigned short);
extern const char *scsi_host_state_name(enum scsi_host_state);
extern void scsi_cmd_get_serial(struct Scsi_Host *, struct scsi_cmnd *);
extern u64 scsi_calculate_bounce_limit(struct Scsi_Host *);
static inline int __must_check scsi_add_host(struct Scsi_Host *host,
struct device *dev)
static inline struct device *scsi_get_device(struct Scsi_Host *shost)
static inline int scsi_host_scan_allowed(struct Scsi_Host *shost)
extern void scsi_unblock_requests(struct Scsi_Host *);
extern void scsi_block_requests(struct Scsi_Host *);
struct class_container;
extern struct request_queue *__scsi_alloc_queue(struct Scsi_Host *shost,
void (*) (struct request_queue *));
extern void scsi_free_host_dev(struct scsi_device *);
extern struct scsi_device *scsi_get_host_dev(struct Scsi_Host *);
enum scsi_host_prot_capabilities ;
static inline void scsi_host_set_prot(struct Scsi_Host *shost, unsigned int mask)
static inline unsigned int scsi_host_get_prot(struct Scsi_Host *shost)
static inline int scsi_host_prot_dma(struct Scsi_Host *shost)
static inline unsigned int scsi_host_dif_capable(struct Scsi_Host *shost, unsigned int target_type)
static inline unsigned int scsi_host_dix_capable(struct Scsi_Host *shost, unsigned int target_type)
enum scsi_host_guard_type ;
static inline void scsi_host_set_guard(struct Scsi_Host *shost, unsigned char type)
static inline unsigned char scsi_host_get_guard(struct Scsi_Host *shost)
extern struct Scsi_Host *scsi_register(struct scsi_host_template *, int);
extern void scsi_unregister(struct Scsi_Host *);
extern int scsi_host_set_state(struct Scsi_Host *, enum scsi_host_state);
