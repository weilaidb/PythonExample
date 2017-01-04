#define _ASM_KSPD_H
struct kspd_notifications ;
extern void kspd_notify(struct kspd_notifications *notify);
static inline void kspd_notify(struct kspd_notifications *notify)
