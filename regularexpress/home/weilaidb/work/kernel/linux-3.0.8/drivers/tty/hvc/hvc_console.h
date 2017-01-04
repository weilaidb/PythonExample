#define HVC_CONSOLE_H
#define MAX_NR_HVC_CONSOLES	16
#define HVC_ALLOC_TTY_ADAPTERS	8
struct hvc_struct ;
struct hv_ops ;
extern int hvc_instantiate(uint32_t vtermno, int index,
const struct hv_ops *ops);
extern struct hvc_struct * hvc_alloc(uint32_t vtermno, int data,
const struct hv_ops *ops, int outbuf_size);
extern int hvc_remove(struct hvc_struct *hp);
int hvc_poll(struct hvc_struct *hp);
void hvc_kick(void);
extern void __hvc_resize(struct hvc_struct *hp, struct winsize ws);
static inline void hvc_resize(struct hvc_struct *hp, struct winsize ws)
extern int notifier_add_irq(struct hvc_struct *hp, int data);
extern void notifier_del_irq(struct hvc_struct *hp, int data);
extern void notifier_hangup_irq(struct hvc_struct *hp, int data);
#if defined(CONFIG_XMON) && defined(CONFIG_SMP)
static inline int cpus_are_in_xmon(void)
