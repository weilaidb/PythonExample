#define	__DRIVERS_PARPORT_PARPORT_GSC_H
#undef	DEBUG_PARPORT
#define DELAY_TIME 	0
#if DELAY_TIME == 0
#define parport_readb	gsc_readb
#define parport_writeb	gsc_writeb
static __inline__ unsigned char parport_readb( unsigned long port )
static __inline__ void parport_writeb( unsigned char value, unsigned long port )
#define EPPDATA(p)  ((p)->base    + 0x4)
#define EPPADDR(p)  ((p)->base    + 0x3)
#define CONTROL(p)  ((p)->base    + 0x2)
#define STATUS(p)   ((p)->base    + 0x1)
#define DATA(p)     ((p)->base    + 0x0)
struct parport_gsc_private ;
static inline void parport_gsc_write_data(struct parport *p, unsigned char d)
static inline unsigned char parport_gsc_read_data(struct parport *p)
static inline unsigned char __parport_gsc_frob_control(struct parport *p,
unsigned char mask,
unsigned char val)
static inline void parport_gsc_data_reverse(struct parport *p)
static inline void parport_gsc_data_forward(struct parport *p)
static inline void parport_gsc_write_control(struct parport *p,
unsigned char d)
static inline unsigned char parport_gsc_read_control(struct parport *p)
static inline unsigned char parport_gsc_frob_control(struct parport *p,
unsigned char mask,
unsigned char val)
static inline unsigned char parport_gsc_read_status(struct parport *p)
static inline void parport_gsc_disable_irq(struct parport *p)
static inline void parport_gsc_enable_irq(struct parport *p)
extern void parport_gsc_release_resources(struct parport *p);
extern int parport_gsc_claim_resources(struct parport *p);
extern void parport_gsc_init_state(struct pardevice *, struct parport_state *s);
extern void parport_gsc_save_state(struct parport *p, struct parport_state *s);
extern void parport_gsc_restore_state(struct parport *p, struct parport_state *s);
extern void parport_gsc_inc_use_count(void);
extern void parport_gsc_dec_use_count(void);
extern struct parport *parport_gsc_probe_port(unsigned long base,
unsigned long base_hi,
int irq, int dma,
struct pci_dev *dev);
