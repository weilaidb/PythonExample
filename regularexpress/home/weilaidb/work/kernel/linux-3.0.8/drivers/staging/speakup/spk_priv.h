#define _SPEAKUP_PRIVATE_H
#define pr_warn(fmt, arg...) printk(KERN_WARNING fmt, ##arg)
#define V_LAST_VAR
#define SPACE 0x20
#define SYNTH_CHECK 20030716
#define SF_DEC 1
#define SYNTH_START 1
#define SYNTH_START 0
#define KT_SPKUP 15
extern struct serial_state *spk_serial_init(int index);
extern void stop_serial_interrupt(void);
extern int wait_for_xmitr(void);
extern unsigned char spk_serial_in(void);
extern unsigned char spk_serial_in_nowait(void);
extern int spk_serial_out(const char ch);
extern void spk_serial_release(void);
extern char synth_buffer_getc(void);
extern char synth_buffer_peek(void);
extern int synth_buffer_empty(void);
extern struct var_t *get_var(enum var_id_t var_id);
extern ssize_t spk_var_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf);
extern ssize_t spk_var_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count);
extern int serial_synth_probe(struct spk_synth *synth);
extern const char *spk_synth_immediate(struct spk_synth *synth, const char *buff);
extern void spk_do_catch_up(struct spk_synth *synth);
extern void spk_synth_flush(struct spk_synth *synth);
extern int spk_synth_is_alive_nop(struct spk_synth *synth);
extern int spk_synth_is_alive_restart(struct spk_synth *synth);
extern void synth_printf(const char *buf, ...);
extern int synth_request_region(u_long, u_long);
extern int synth_release_region(u_long, u_long);
extern int synth_add(struct spk_synth *in_synth);
extern void synth_remove(struct spk_synth *in_synth);
extern struct speakup_info_t speakup_info;
extern struct var_t synth_time_vars[];
#define spk_lock(flags) spin_lock_irqsave(&speakup_info.spinlock, flags)
#define spk_trylock(flags) spin_trylock_irqsave(&speakup_info.spinlock, flags)
#define spk_unlock(flags) spin_unlock_irqrestore(&speakup_info.spinlock, flags)
