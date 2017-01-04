#define __LINUX_OPP_H__
struct opp;
#if defined(CONFIG_PM_OPP)
unsigned long opp_get_voltage(struct opp *opp);
unsigned long opp_get_freq(struct opp *opp);
int opp_get_opp_count(struct device *dev);
struct opp *opp_find_freq_exact(struct device *dev, unsigned long freq,
bool available);
struct opp *opp_find_freq_floor(struct device *dev, unsigned long *freq);
struct opp *opp_find_freq_ceil(struct device *dev, unsigned long *freq);
int opp_add(struct device *dev, unsigned long freq, unsigned long u_volt);
int opp_enable(struct device *dev, unsigned long freq);
int opp_disable(struct device *dev, unsigned long freq);
static inline unsigned long opp_get_voltage(struct opp *opp)
static inline unsigned long opp_get_freq(struct opp *opp)
static inline int opp_get_opp_count(struct device *dev)
static inline struct opp *opp_find_freq_exact(struct device *dev,
unsigned long freq, bool available)
static inline struct opp *opp_find_freq_floor(struct device *dev,
unsigned long *freq)
static inline struct opp *opp_find_freq_ceil(struct device *dev,
unsigned long *freq)
static inline int opp_add(struct device *dev, unsigned long freq,
unsigned long u_volt)
static inline int opp_enable(struct device *dev, unsigned long freq)
static inline int opp_disable(struct device *dev, unsigned long freq)
#if defined(CONFIG_CPU_FREQ) && defined(CONFIG_PM_OPP)
int opp_init_cpufreq_table(struct device *dev,
struct cpufreq_frequency_table **table);
static inline int opp_init_cpufreq_table(struct device *dev,
struct cpufreq_frequency_table **table)
