#define _SERIO_H
#define SPIOCSTYPE	_IOW('q', 0x01, unsigned long)
struct serio ;
#define to_serio_port(d)	container_of(d, struct serio, dev)
struct serio_driver ;
#define to_serio_driver(d)	container_of(d, struct serio_driver, driver)
int serio_open(struct serio *serio, struct serio_driver *drv);
void serio_close(struct serio *serio);
void serio_rescan(struct serio *serio);
void serio_reconnect(struct serio *serio);
irqreturn_t serio_interrupt(struct serio *serio, unsigned char data, unsigned int flags);
void __serio_register_port(struct serio *serio, struct module *owner);
static inline void serio_register_port(struct serio *serio)
void serio_unregister_port(struct serio *serio);
void serio_unregister_child_port(struct serio *serio);
int __serio_register_driver(struct serio_driver *drv, struct module *owner, const char *mod_name);
static inline int __must_check serio_register_driver(struct serio_driver *drv)
void serio_unregister_driver(struct serio_driver *drv);
static inline int serio_write(struct serio *serio, unsigned char data)
static inline void serio_drv_write_wakeup(struct serio *serio)
static inline void *serio_get_drvdata(struct serio *serio)
static inline void serio_set_drvdata(struct serio *serio, void *data)
static inline void serio_pause_rx(struct serio *serio)
static inline void serio_continue_rx(struct serio *serio)
#define SERIO_TIMEOUT	1
#define SERIO_PARITY	2
#define SERIO_FRAME	4
#define SERIO_XT	0x00
#define SERIO_8042	0x01
#define SERIO_RS232	0x02
#define SERIO_HIL_MLC	0x03
#define SERIO_PS_PSTHRU	0x05
#define SERIO_8042_XL	0x06
#define SERIO_UNKNOWN	0x00
#define SERIO_MSC	0x01
#define SERIO_SUN	0x02
#define SERIO_MS	0x03
#define SERIO_MP	0x04
#define SERIO_MZ	0x05
#define SERIO_MZP	0x06
#define SERIO_MZPP	0x07
#define SERIO_VSXXXAA	0x08
#define SERIO_SUNKBD	0x10
#define SERIO_WARRIOR	0x18
#define SERIO_SPACEORB	0x19
#define SERIO_MAGELLAN	0x1a
#define SERIO_SPACEBALL	0x1b
#define SERIO_GUNZE	0x1c
#define SERIO_IFORCE	0x1d
#define SERIO_STINGER	0x1e
#define SERIO_NEWTON	0x1f
#define SERIO_STOWAWAY	0x20
#define SERIO_H3600	0x21
#define SERIO_PS2SER	0x22
#define SERIO_TWIDKBD	0x23
#define SERIO_TWIDJOY	0x24
#define SERIO_HIL	0x25
#define SERIO_SNES232	0x26
#define SERIO_SEMTECH	0x27
#define SERIO_LKKBD	0x28
#define SERIO_ELO	0x29
#define SERIO_MICROTOUCH	0x30
#define SERIO_PENMOUNT	0x31
#define SERIO_TOUCHRIGHT	0x32
#define SERIO_TOUCHWIN	0x33
#define SERIO_TAOSEVM	0x34
#define SERIO_FUJITSU	0x35
#define SERIO_ZHENHUA	0x36
#define SERIO_INEXIO	0x37
#define SERIO_TOUCHIT213	0x38
#define SERIO_W8001	0x39
#define SERIO_DYNAPRO	0x3a
#define SERIO_HAMPSHIRE	0x3b
#define SERIO_PS2MULT	0x3c
