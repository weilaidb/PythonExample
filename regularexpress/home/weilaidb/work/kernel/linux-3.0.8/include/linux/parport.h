#define _PARPORT_H_
#define PARPORT_MAX  16
#define PARPORT_IRQ_NONE  -1
#define PARPORT_DMA_NONE  -1
#define PARPORT_IRQ_AUTO  -2
#define PARPORT_DMA_AUTO  -2
#define PARPORT_DMA_NOFIFO -3
#define PARPORT_DISABLE   -2
#define PARPORT_IRQ_PROBEONLY -3
#define PARPORT_IOHI_AUTO -1
#define PARPORT_CONTROL_STROBE    0x1
#define PARPORT_CONTROL_AUTOFD    0x2
#define PARPORT_CONTROL_INIT      0x4
#define PARPORT_CONTROL_SELECT    0x8
#define PARPORT_STATUS_ERROR      0x8
#define PARPORT_STATUS_SELECT     0x10
#define PARPORT_STATUS_PAPEROUT   0x20
#define PARPORT_STATUS_ACK        0x40
#define PARPORT_STATUS_BUSY       0x80
typedef enum  parport_device_class;
#define PARPORT_MODE_PCSPP	(1<<0)
#define PARPORT_MODE_TRISTATE	(1<<1)
#define PARPORT_MODE_EPP	(1<<2)
#define PARPORT_MODE_ECP	(1<<3)
#define PARPORT_MODE_COMPAT	(1<<4)
#define PARPORT_MODE_DMA	(1<<5)
#define PARPORT_MODE_SAFEININT	(1<<6)
#define IEEE1284_MODE_NIBBLE             0
#define IEEE1284_MODE_BYTE              (1<<0)
#define IEEE1284_MODE_COMPAT            (1<<8)
#define IEEE1284_MODE_BECP              (1<<9)
#define IEEE1284_MODE_ECP               (1<<4)
#define IEEE1284_MODE_ECPRLE            (IEEE1284_MODE_ECP | (1<<5))
#define IEEE1284_MODE_ECPSWE            (1<<10)
#define IEEE1284_MODE_EPP               (1<<6)
#define IEEE1284_MODE_EPPSL             (1<<11)
#define IEEE1284_MODE_EPPSWE            (1<<12)
#define IEEE1284_DEVICEID               (1<<2)
#define IEEE1284_EXT_LINK               (1<<14)
#define IEEE1284_ADDR			(1<<13)
#define IEEE1284_DATA			 0
#define PARPORT_EPP_FAST		(1<<0)
#define PARPORT_W91284PIC		(1<<1)
struct parport;
struct pardevice;
struct pc_parport_state ;
struct ax_parport_state ;
struct amiga_parport_state ;
struct ax88796_parport_state ;
struct ip32_parport_state ;
struct parport_state ;
struct parport_operations ;
struct parport_device_info ;
struct pardevice ;
enum ieee1284_phase ;
struct ieee1284_info ;
struct parport ;
#define DEFAULT_SPIN_TIME 500
struct parport_driver ;
struct parport *parport_register_port(unsigned long base, int irq, int dma,
struct parport_operations *ops);
void parport_announce_port (struct parport *port);
extern void parport_remove_port(struct parport *port);
extern int parport_register_driver (struct parport_driver *);
extern void parport_unregister_driver (struct parport_driver *);
extern struct parport *parport_find_number (int);
extern struct parport *parport_find_base (unsigned long);
extern irqreturn_t parport_irq_handler(int irq, void *dev_id);
extern struct parport *parport_get_port (struct parport *);
extern void parport_put_port (struct parport *);
struct pardevice *parport_register_device(struct parport *port,
const char *name,
int (*pf)(void *), void (*kf)(void *),
void (*irq_func)(void *),
int flags, void *handle);
extern void parport_unregister_device(struct pardevice *dev);
extern int parport_claim(struct pardevice *dev);
extern int parport_claim_or_block(struct pardevice *dev);
extern void parport_release(struct pardevice *dev);
static __inline__ int parport_yield(struct pardevice *dev)
static __inline__ int parport_yield_blocking(struct pardevice *dev)
#define PARPORT_DEV_TRAN		0
#define PARPORT_DEV_LURK		(1<<0)
#define PARPORT_DEV_EXCL		(1<<1)
#define PARPORT_FLAG_EXCL		(1<<1)
extern void parport_ieee1284_interrupt (void *);
extern int parport_negotiate (struct parport *, int mode);
extern ssize_t parport_write (struct parport *, const void *buf, size_t len);
extern ssize_t parport_read (struct parport *, void *buf, size_t len);
#define PARPORT_INACTIVITY_O_NONBLOCK 1
extern long parport_set_timeout (struct pardevice *, long inactivity);
extern int parport_wait_event (struct parport *, long timeout);
extern int parport_wait_peripheral (struct parport *port,
unsigned char mask,
unsigned char val);
extern int parport_poll_peripheral (struct parport *port,
unsigned char mask,
unsigned char val,
int usec);
extern size_t parport_ieee1284_write_compat (struct parport *,
const void *, size_t, int);
extern size_t parport_ieee1284_read_nibble (struct parport *,
void *, size_t, int);
extern size_t parport_ieee1284_read_byte (struct parport *,
void *, size_t, int);
extern size_t parport_ieee1284_ecp_read_data (struct parport *,
void *, size_t, int);
extern size_t parport_ieee1284_ecp_write_data (struct parport *,
const void *, size_t, int);
extern size_t parport_ieee1284_ecp_write_addr (struct parport *,
const void *, size_t, int);
extern size_t parport_ieee1284_epp_write_data (struct parport *,
const void *, size_t, int);
extern size_t parport_ieee1284_epp_read_data (struct parport *,
void *, size_t, int);
extern size_t parport_ieee1284_epp_write_addr (struct parport *,
const void *, size_t, int);
extern size_t parport_ieee1284_epp_read_addr (struct parport *,
void *, size_t, int);
extern int parport_daisy_init (struct parport *port);
extern void parport_daisy_fini (struct parport *port);
extern struct pardevice *parport_open (int devnum, const char *name);
extern void parport_close (struct pardevice *dev);
extern ssize_t parport_device_id (int devnum, char *buffer, size_t len);
extern void parport_daisy_deselect_all (struct parport *port);
extern int parport_daisy_select (struct parport *port, int daisy, int mode);
static inline void parport_generic_irq(struct parport *port)
extern int parport_proc_register(struct parport *pp);
extern int parport_proc_unregister(struct parport *pp);
extern int parport_device_proc_register(struct pardevice *device);
extern int parport_device_proc_unregister(struct pardevice *device);
#if !defined(CONFIG_PARPORT_NOT_PC)
#define parport_write_data(p,x)            parport_pc_write_data(p,x)
#define parport_read_data(p)               parport_pc_read_data(p)
#define parport_write_control(p,x)         parport_pc_write_control(p,x)
#define parport_read_control(p)            parport_pc_read_control(p)
#define parport_frob_control(p,m,v)        parport_pc_frob_control(p,m,v)
#define parport_read_status(p)             parport_pc_read_status(p)
#define parport_enable_irq(p)              parport_pc_enable_irq(p)
#define parport_disable_irq(p)             parport_pc_disable_irq(p)
#define parport_data_forward(p)            parport_pc_data_forward(p)
#define parport_data_reverse(p)            parport_pc_data_reverse(p)
#define parport_write_data(p,x)            (p)->ops->write_data(p,x)
#define parport_read_data(p)               (p)->ops->read_data(p)
#define parport_write_control(p,x)         (p)->ops->write_control(p,x)
#define parport_read_control(p)            (p)->ops->read_control(p)
#define parport_frob_control(p,m,v)        (p)->ops->frob_control(p,m,v)
#define parport_read_status(p)             (p)->ops->read_status(p)
#define parport_enable_irq(p)              (p)->ops->enable_irq(p)
#define parport_disable_irq(p)             (p)->ops->disable_irq(p)
#define parport_data_forward(p)            (p)->ops->data_forward(p)
#define parport_data_reverse(p)            (p)->ops->data_reverse(p)
extern unsigned long parport_default_timeslice;
extern int parport_default_spintime;
