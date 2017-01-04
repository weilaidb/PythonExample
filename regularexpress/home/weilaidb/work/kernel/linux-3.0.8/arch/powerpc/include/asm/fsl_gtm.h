#define __ASM_FSL_GTM_H
struct gtm;
struct gtm_timer ;
extern struct gtm_timer *gtm_get_timer16(void);
extern struct gtm_timer *gtm_get_specific_timer16(struct gtm *gtm,
unsigned int timer);
extern void gtm_put_timer16(struct gtm_timer *tmr);
extern int gtm_set_timer16(struct gtm_timer *tmr, unsigned long usec,
bool reload);
extern int gtm_set_exact_timer16(struct gtm_timer *tmr, u16 usec,
bool reload);
extern void gtm_stop_timer16(struct gtm_timer *tmr);
extern void gtm_ack_timer16(struct gtm_timer *tmr, u16 events);
