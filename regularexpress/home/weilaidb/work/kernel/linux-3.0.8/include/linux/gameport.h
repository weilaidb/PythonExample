#define _GAMEPORT_H
struct gameport ;
#define to_gameport_port(d)	container_of(d, struct gameport, dev)
struct gameport_driver ;
#define to_gameport_driver(d)	container_of(d, struct gameport_driver, driver)
int gameport_open(struct gameport *gameport, struct gameport_driver *drv, int mode);
void gameport_close(struct gameport *gameport);
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
void __gameport_register_port(struct gameport *gameport, struct module *owner);
static inline void gameport_register_port(struct gameport *gameport)
void gameport_unregister_port(struct gameport *gameport);
void gameport_set_phys(struct gameport *gameport, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline void gameport_register_port(struct gameport *gameport)
static inline void gameport_unregister_port(struct gameport *gameport)
static inline void gameport_set_phys(struct gameport *gameport,
const char *fmt, ...)
static inline struct gameport *gameport_allocate_port(void)
static inline void gameport_free_port(struct gameport *gameport)
static inline void gameport_set_name(struct gameport *gameport, const char *name)
static inline void *gameport_get_drvdata(struct gameport *gameport)
static inline void gameport_set_drvdata(struct gameport *gameport, void *data)
static inline int gameport_pin_driver(struct gameport *gameport)
static inline void gameport_unpin_driver(struct gameport *gameport)
int __gameport_register_driver(struct gameport_driver *drv,
struct module *owner, const char *mod_name);
static inline int __must_check gameport_register_driver(struct gameport_driver *drv)
void gameport_unregister_driver(struct gameport_driver *drv);
#define GAMEPORT_MODE_DISABLED		0
#define GAMEPORT_MODE_RAW		1
#define GAMEPORT_MODE_COOKED		2
#define GAMEPORT_ID_VENDOR_ANALOG	0x0001
#define GAMEPORT_ID_VENDOR_MADCATZ	0x0002
#define GAMEPORT_ID_VENDOR_LOGITECH	0x0003
#define GAMEPORT_ID_VENDOR_CREATIVE	0x0004
#define GAMEPORT_ID_VENDOR_GENIUS	0x0005
#define GAMEPORT_ID_VENDOR_INTERACT	0x0006
#define GAMEPORT_ID_VENDOR_MICROSOFT	0x0007
#define GAMEPORT_ID_VENDOR_THRUSTMASTER	0x0008
#define GAMEPORT_ID_VENDOR_GRAVIS	0x0009
#define GAMEPORT_ID_VENDOR_GUILLEMOT	0x000a
static inline void gameport_trigger(struct gameport *gameport)
static inline unsigned char gameport_read(struct gameport *gameport)
static inline int gameport_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static inline int gameport_calibrate(struct gameport *gameport, int *axes, int *max)
static inline int gameport_time(struct gameport *gameport, int time)
static inline void gameport_set_poll_handler(struct gameport *gameport, void (*handler)(struct gameport *))
static inline void gameport_set_poll_interval(struct gameport *gameport, unsigned int msecs)
void gameport_start_polling(struct gameport *gameport);
void gameport_stop_polling(struct gameport *gameport);
