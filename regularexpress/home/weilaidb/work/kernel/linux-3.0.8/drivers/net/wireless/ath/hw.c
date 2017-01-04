#define REG_READ	(common->ops->read)
#define REG_WRITE	(common->ops->write)
void ath_hw_setbssidmask(struct ath_common *common)
EXPORT_SYMBOL(ath_hw_setbssidmask);
void ath_hw_cycle_counters_update(struct ath_common *common)
EXPORT_SYMBOL(ath_hw_cycle_counters_update);
int32_t ath_hw_get_listen_time(struct ath_common *common)
EXPORT_SYMBOL(ath_hw_get_listen_time);
