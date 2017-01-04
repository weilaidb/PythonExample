#define IRDA_SIR_H
struct sir_fsm ;
#define SIRDEV_STATE_WAIT_TX_COMPLETE	0x0100
#define SIRDEV_STATE_WAIT_XMIT		0x0101
#define SIRDEV_STATE_WAIT_UNTIL_SENT	0x0102
#define SIRDEV_STATE_TX_DONE		0x0103
#define SIRDEV_STATE_DONGLE_OPEN		0x0300
#define SIRDEV_STATE_DONGLE_CLOSE	0x0400
#define SIRDEV_STATE_SET_DTR_RTS		0x0500
#define SIRDEV_STATE_SET_SPEED		0x0700
#define SIRDEV_STATE_DONGLE_CHECK	0x0800
#define SIRDEV_STATE_DONGLE_RESET	0x0900
#define SIRDEV_STATE_DONGLE_SPEED	0x0a00
#define SIRDEV_STATE_PORT_SPEED		0x0b00
#define SIRDEV_STATE_DONE		0x0c00
#define SIRDEV_STATE_ERROR		0x0d00
#define SIRDEV_STATE_COMPLETE		0x0e00
#define SIRDEV_STATE_DEAD		0xffff
struct sir_dev;
struct dongle_driver ;
struct sir_driver ;
extern int irda_register_dongle(struct dongle_driver *new);
extern int irda_unregister_dongle(struct dongle_driver *drv);
extern struct sir_dev * sirdev_get_instance(const struct sir_driver *drv, const char *name);
extern int sirdev_put_instance(struct sir_dev *self);
extern int sirdev_set_dongle(struct sir_dev *dev, IRDA_DONGLE type);
extern void sirdev_write_complete(struct sir_dev *dev);
extern int sirdev_receive(struct sir_dev *dev, const unsigned char *cp, size_t count);
extern int sirdev_raw_write(struct sir_dev *dev, const char *buf, int len);
extern int sirdev_raw_read(struct sir_dev *dev, char *buf, int len);
extern int sirdev_set_dtr_rts(struct sir_dev *dev, int dtr, int rts);
extern int sirdev_get_dongle(struct sir_dev *self, IRDA_DONGLE type);
extern int sirdev_put_dongle(struct sir_dev *self);
extern void sirdev_enable_rx(struct sir_dev *dev);
extern int sirdev_schedule_request(struct sir_dev *dev, int state, unsigned param);
static inline int sirdev_schedule_speed(struct sir_dev *dev, unsigned speed)
static inline int sirdev_schedule_dongle_open(struct sir_dev *dev, int dongle_id)
static inline int sirdev_schedule_dongle_close(struct sir_dev *dev)
static inline int sirdev_schedule_dtr_rts(struct sir_dev *dev, int dtr, int rts)
struct sir_dev ;
