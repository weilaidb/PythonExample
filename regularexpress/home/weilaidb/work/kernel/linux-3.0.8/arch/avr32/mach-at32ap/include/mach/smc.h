#define __ARCH_AT32AP_SMC_H
struct smc_timing ;
struct smc_config ;
extern void smc_set_timing(struct smc_config *config,
const struct smc_timing *timing);
extern int smc_set_configuration(int cs, const struct smc_config *config);
extern struct smc_config *smc_get_configuration(int cs);
