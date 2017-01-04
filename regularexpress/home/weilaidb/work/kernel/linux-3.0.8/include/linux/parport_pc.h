#define __LINUX_PARPORT_PC_H
#define ECONTROL(p) ((p)->base_hi + 0x2)
#define CONFIGB(p)  ((p)->base_hi + 0x1)
#define CONFIGA(p)  ((p)->base_hi + 0x0)
#define FIFO(p)     ((p)->base_hi + 0x0)
#define EPPDATA(p)  ((p)->base    + 0x4)
#define EPPADDR(p)  ((p)->base    + 0x3)
#define CONTROL(p)  ((p)->base    + 0x2)
#define STATUS(p)   ((p)->base    + 0x1)
#define DATA(p)     ((p)->base    + 0x0)
struct parport_pc_private ;
struct parport_pc_via_data
;
static __inline__ void parport_pc_write_data(struct parport *p, unsigned char d)
static __inline__ unsigned char parport_pc_read_data(struct parport *p)
static inline void dump_parport_state (char *str, struct parport *p)
#define dump_parport_state(args...)
static __inline__ unsigned char __parport_pc_frob_control (struct parport *p,
unsigned char mask,
unsigned char val)
static __inline__ void parport_pc_data_reverse (struct parport *p)
static __inline__ void parport_pc_data_forward (struct parport *p)
static __inline__ void parport_pc_write_control (struct parport *p,
unsigned char d)
static __inline__ unsigned char parport_pc_read_control(struct parport *p)
static __inline__ unsigned char parport_pc_frob_control (struct parport *p,
unsigned char mask,
unsigned char val)
static __inline__ unsigned char parport_pc_read_status(struct parport *p)
static __inline__ void parport_pc_disable_irq(struct parport *p)
static __inline__ void parport_pc_enable_irq(struct parport *p)
extern void parport_pc_release_resources(struct parport *p);
extern int parport_pc_claim_resources(struct parport *p);
extern struct parport *parport_pc_probe_port(unsigned long base,
unsigned long base_hi,
int irq, int dma,
struct device *dev,
int irqflags);
extern void parport_pc_unregister_port(struct parport *p);
