#define S390_CIO_H
struct pmcw  __attribute__ ((packed));
struct schib_config  __attribute__ ((packed));
struct schib  __attribute__ ((packed,aligned(4)));
enum sch_todo ;
struct subchannel  __attribute__ ((aligned(8)));
#define to_subchannel(n) container_of(n, struct subchannel, dev)
extern int cio_validate_subchannel (struct subchannel *, struct subchannel_id);
extern int cio_enable_subchannel(struct subchannel *, u32);
extern int cio_disable_subchannel (struct subchannel *);
extern int cio_cancel (struct subchannel *);
extern int cio_clear (struct subchannel *);
extern int cio_resume (struct subchannel *);
extern int cio_halt (struct subchannel *);
extern int cio_start (struct subchannel *, struct ccw1 *, __u8);
extern int cio_start_key (struct subchannel *, struct ccw1 *, __u8, __u8);
extern int cio_cancel (struct subchannel *);
extern int cio_set_options (struct subchannel *, int);
extern int cio_update_schib(struct subchannel *sch);
extern int cio_commit_config(struct subchannel *sch);
int cio_tm_start_key(struct subchannel *sch, struct tcw *tcw, u8 lpm, u8 key);
int cio_tm_intrg(struct subchannel *sch);
int cio_create_sch_lock(struct subchannel *);
void do_adapter_IO(u8 isc);
void do_IRQ(struct pt_regs *);
extern struct subchannel *cio_probe_console(void);
extern void cio_release_console(void);
extern int cio_is_console(struct subchannel_id);
extern struct subchannel *cio_get_console_subchannel(void);
extern spinlock_t * cio_get_console_lock(void);
extern void *cio_get_console_priv(void);
#define cio_is_console(schid) 0
#define cio_get_console_subchannel() NULL
#define cio_get_console_lock() NULL
#define cio_get_console_priv() NULL
