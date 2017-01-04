#define _SCSI_SCSI_DEVICE_H
struct request_queue;
struct scsi_cmnd;
struct scsi_lun;
struct scsi_sense_hdr;
struct scsi_mode_data ;
enum scsi_device_state ;
enum scsi_device_event ;
struct scsi_event ;
struct scsi_device  __attribute__((aligned(sizeof(unsigned long))));
struct scsi_dh_devlist ;
typedef void (*activate_complete)(void *, int);
struct scsi_device_handler ;
struct scsi_dh_data ;
#define	to_scsi_device(d)	\
container_of(d, struct scsi_device, sdev_gendev)
#define	class_to_sdev(d)	\
container_of(d, struct scsi_device, sdev_dev)
#define transport_class_to_sdev(class_dev) \
to_scsi_device(class_dev->parent)
#define sdev_printk(prefix, sdev, fmt, a...)	\
dev_printk(prefix, &(sdev)->sdev_gendev, fmt, ##a)
#define scmd_printk(prefix, scmd, fmt, a...)				\
(scmd)->request->rq_disk ?					\
sdev_printk(prefix, (scmd)->device, "[%s] " fmt,		\
(scmd)->request->rq_disk->disk_name, ##a) :		\
sdev_printk(prefix, (scmd)->device, fmt, ##a)
enum scsi_target_state ;
struct scsi_target  __attribute__((aligned(sizeof(unsigned long))));
#define to_scsi_target(d)	container_of(d, struct scsi_target, dev)
static inline struct scsi_target *scsi_target(struct scsi_device *sdev)
#define transport_class_to_starget(class_dev) \
to_scsi_target(class_dev->parent)
#define starget_printk(prefix, starget, fmt, a...)	\
dev_printk(prefix, &(starget)->dev, fmt, ##a)
extern struct scsi_device *__scsi_add_device(struct Scsi_Host *,
uint, uint, uint, void *hostdata);
extern int scsi_add_device(struct Scsi_Host *host, uint channel,
uint target, uint lun);
extern int scsi_register_device_handler(struct scsi_device_handler *scsi_dh);
extern void scsi_remove_device(struct scsi_device *);
extern int scsi_unregister_device_handler(struct scsi_device_handler *scsi_dh);
extern int scsi_device_get(struct scsi_device *);
extern void scsi_device_put(struct scsi_device *);
extern struct scsi_device *scsi_device_lookup(struct Scsi_Host *,
uint, uint, uint);
extern struct scsi_device *__scsi_device_lookup(struct Scsi_Host *,
uint, uint, uint);
extern struct scsi_device *scsi_device_lookup_by_target(struct scsi_target *,
uint);
extern struct scsi_device *__scsi_device_lookup_by_target(struct scsi_target *,
uint);
extern void starget_for_each_device(struct scsi_target *, void *,
void (*fn)(struct scsi_device *, void *));
extern void __starget_for_each_device(struct scsi_target *, void *,
void (*fn)(struct scsi_device *,
void *));
extern struct scsi_device *__scsi_iterate_devices(struct Scsi_Host *,
struct scsi_device *);
#define shost_for_each_device(sdev, shost) \
for ((sdev) = __scsi_iterate_devices((shost), NULL); \
(sdev); \
(sdev) = __scsi_iterate_devices((shost), (sdev)))
#define __shost_for_each_device(sdev, shost) \
list_for_each_entry((sdev), &((shost)->__devices), siblings)
extern void scsi_adjust_queue_depth(struct scsi_device *, int, int);
extern int scsi_track_queue_full(struct scsi_device *, int);
extern int scsi_set_medium_removal(struct scsi_device *, char);
extern int scsi_mode_sense(struct scsi_device *sdev, int dbd, int modepage,
unsigned char *buffer, int len, int timeout,
int retries, struct scsi_mode_data *data,
struct scsi_sense_hdr *);
extern int scsi_mode_select(struct scsi_device *sdev, int pf, int sp,
int modepage, unsigned char *buffer, int len,
int timeout, int retries,
struct scsi_mode_data *data,
struct scsi_sense_hdr *);
extern int scsi_test_unit_ready(struct scsi_device *sdev, int timeout,
int retries, struct scsi_sense_hdr *sshdr);
extern int scsi_get_vpd_page(struct scsi_device *, u8 page, unsigned char *buf,
int buf_len);
extern int scsi_device_set_state(struct scsi_device *sdev,
enum scsi_device_state state);
extern struct scsi_event *sdev_evt_alloc(enum scsi_device_event evt_type,
gfp_t gfpflags);
extern void sdev_evt_send(struct scsi_device *sdev, struct scsi_event *evt);
extern void sdev_evt_send_simple(struct scsi_device *sdev,
enum scsi_device_event evt_type, gfp_t gfpflags);
extern int scsi_device_quiesce(struct scsi_device *sdev);
extern void scsi_device_resume(struct scsi_device *sdev);
extern void scsi_target_quiesce(struct scsi_target *);
extern void scsi_target_resume(struct scsi_target *);
extern void scsi_scan_target(struct device *parent, unsigned int channel,
unsigned int id, unsigned int lun, int rescan);
extern void scsi_target_reap(struct scsi_target *);
extern void scsi_target_block(struct device *);
extern void scsi_target_unblock(struct device *);
extern void scsi_remove_target(struct device *);
extern void int_to_scsilun(unsigned int, struct scsi_lun *);
extern int scsilun_to_int(struct scsi_lun *);
extern const char *scsi_device_state_name(enum scsi_device_state);
extern int scsi_is_sdev_device(const struct device *);
extern int scsi_is_target_device(const struct device *);
extern int scsi_execute(struct scsi_device *sdev, const unsigned char *cmd,
int data_direction, void *buffer, unsigned bufflen,
unsigned char *sense, int timeout, int retries,
int flag, int *resid);
extern int scsi_execute_req(struct scsi_device *sdev, const unsigned char *cmd,
int data_direction, void *buffer, unsigned bufflen,
struct scsi_sense_hdr *, int timeout, int retries,
int *resid);
extern int scsi_autopm_get_device(struct scsi_device *);
extern void scsi_autopm_put_device(struct scsi_device *);
static inline int scsi_autopm_get_device(struct scsi_device *d)
static inline void scsi_autopm_put_device(struct scsi_device *d)
static inline int __must_check scsi_device_reprobe(struct scsi_device *sdev)
static inline unsigned int sdev_channel(struct scsi_device *sdev)
static inline unsigned int sdev_id(struct scsi_device *sdev)
#define scmd_id(scmd) sdev_id((scmd)->device)
#define scmd_channel(scmd) sdev_channel((scmd)->device)
static inline int scsi_device_online(struct scsi_device *sdev)
static inline int scsi_device_blocked(struct scsi_device *sdev)
static inline int scsi_device_created(struct scsi_device *sdev)
static inline int scsi_device_sync(struct scsi_device *sdev)
static inline int scsi_device_wide(struct scsi_device *sdev)
static inline int scsi_device_dt(struct scsi_device *sdev)
static inline int scsi_device_dt_only(struct scsi_device *sdev)
static inline int scsi_device_ius(struct scsi_device *sdev)
static inline int scsi_device_qas(struct scsi_device *sdev)
static inline int scsi_device_enclosure(struct scsi_device *sdev)
static inline int scsi_device_protection(struct scsi_device *sdev)
#define MODULE_ALIAS_SCSI_DEVICE(type) \
MODULE_ALIAS("scsi:t-" __stringify(type) "*")
#define SCSI_DEVICE_MODALIAS_FMT "scsi:t-0x%02x"
