#define _PPC64_PSERIES_RECONFIG_H
#define PSERIES_RECONFIG_ADD		0x0001
#define PSERIES_RECONFIG_REMOVE		0x0002
#define PSERIES_DRCONF_MEM_ADD		0x0003
#define PSERIES_DRCONF_MEM_REMOVE	0x0004
extern int pSeries_reconfig_notifier_register(struct notifier_block *);
extern void pSeries_reconfig_notifier_unregister(struct notifier_block *);
extern struct blocking_notifier_head pSeries_reconfig_chain;
extern void pSeries_coalesce_init(void);
static inline int pSeries_reconfig_notifier_register(struct notifier_block *nb)
static inline void pSeries_reconfig_notifier_unregister(struct notifier_block *nb)
static inline void pSeries_coalesce_init(void)
