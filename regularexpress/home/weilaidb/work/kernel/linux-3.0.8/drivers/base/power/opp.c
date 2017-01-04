struct opp ;
struct device_opp ;
static LIST_HEAD(dev_opp_list);
static DEFINE_MUTEX(dev_opp_list_lock);
static struct device_opp *find_device_opp(struct device *dev)
unsigned long opp_get_voltage(struct opp *opp)
unsigned long opp_get_freq(struct opp *opp)
int opp_get_opp_count(struct device *dev)
struct opp *opp_find_freq_exact(struct device *dev, unsigned long freq,
bool available)
struct opp *opp_find_freq_ceil(struct device *dev, unsigned long *freq)
struct opp *opp_find_freq_floor(struct device *dev, unsigned long *freq)
int opp_add(struct device *dev, unsigned long freq, unsigned long u_volt)
static int opp_set_availability(struct device *dev, unsigned long freq,
bool availability_req)
int opp_enable(struct device *dev, unsigned long freq)
int opp_disable(struct device *dev, unsigned long freq)
int opp_init_cpufreq_table(struct device *dev,
struct cpufreq_frequency_table **table)
