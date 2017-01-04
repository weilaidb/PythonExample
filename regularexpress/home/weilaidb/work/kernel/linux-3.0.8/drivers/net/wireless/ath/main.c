MODULE_AUTHOR("Atheros Communications");
MODULE_DESCRIPTION("Shared library for Atheros wireless LAN cards.");
MODULE_LICENSE("Dual BSD/GPL");
struct sk_buff *ath_rxbuf_alloc(struct ath_common *common,
u32 len,
gfp_t gfp_mask)
EXPORT_SYMBOL(ath_rxbuf_alloc);
int ath_printk(const char *level, struct ath_common *common,
const char *fmt, ...)
EXPORT_SYMBOL(ath_printk);
