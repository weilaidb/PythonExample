#define S390_IO_SCH_H
struct io_subchannel_private  __aligned(8);
#define to_io_private(n) ((struct io_subchannel_private *) \
dev_get_drvdata(&(n)->dev))
#define set_io_private(n, p) (dev_set_drvdata(&(n)->dev, p))
static inline struct ccw_device *sch_get_cdev(struct subchannel *sch)
static inline void sch_set_cdev(struct subchannel *sch,
struct ccw_device *cdev)
#define MAX_CIWS 8
enum io_status ;
struct ccw_request  __attribute__((packed));
struct senseid   __attribute__ ((packed, aligned(4)));
enum cdev_todo ;
struct ccw_device_private ;
static inline int rsch(struct subchannel_id schid)
static inline int hsch(struct subchannel_id schid)
static inline int xsch(struct subchannel_id schid)
