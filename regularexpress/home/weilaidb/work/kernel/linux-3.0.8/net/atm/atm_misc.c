int atm_charge(struct atm_vcc *vcc, int truesize)
EXPORT_SYMBOL(atm_charge);
struct sk_buff *atm_alloc_charge(struct atm_vcc *vcc, int pdu_size,
gfp_t gfp_flags)
EXPORT_SYMBOL(atm_alloc_charge);
int atm_pcr_goal(const struct atm_trafprm *tp)
EXPORT_SYMBOL(atm_pcr_goal);
void sonet_copy_stats(struct k_sonet_stats *from, struct sonet_stats *to)
EXPORT_SYMBOL(sonet_copy_stats);
void sonet_subtract_stats(struct k_sonet_stats *from, struct sonet_stats *to)
EXPORT_SYMBOL(sonet_subtract_stats);
