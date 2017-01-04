#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static void atm_push_raw(struct atm_vcc *vcc, struct sk_buff *skb)
static void atm_pop_raw(struct atm_vcc *vcc, struct sk_buff *skb)
static int atm_send_aal0(struct atm_vcc *vcc, struct sk_buff *skb)
int atm_init_aal0(struct atm_vcc *vcc)
int atm_init_aal34(struct atm_vcc *vcc)
int atm_init_aal5(struct atm_vcc *vcc)
EXPORT_SYMBOL(atm_init_aal5);
