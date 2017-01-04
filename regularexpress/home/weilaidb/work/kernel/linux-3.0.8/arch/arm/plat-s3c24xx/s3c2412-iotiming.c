#define print_ns(x) ((x) / 10), ((x) % 10)
static void s3c2412_print_timing(const char *pfx, struct s3c_iotimings *iot)
static inline unsigned int to_div(unsigned int cyc_tns, unsigned int clk_tns)
static unsigned int calc_timing(unsigned int hwtm, unsigned int clk_tns,
unsigned int *err)
static int s3c2412_calc_bank(struct s3c_cpufreq_config *cfg,
struct s3c2412_iobank_timing *bt)
void s3c2412_iotiming_debugfs(struct seq_file *seq,
struct s3c_cpufreq_config *cfg,
union s3c_iobank *iob)
int s3c2412_iotiming_calc(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot)
void s3c2412_iotiming_set(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot)
static inline unsigned int s3c2412_decode_timing(unsigned int clock, u32 reg)
static void s3c2412_iotiming_getbank(struct s3c_cpufreq_config *cfg,
struct s3c2412_iobank_timing *bt,
unsigned int bank)
static inline bool bank_is_io(unsigned int bank, u32 bankcfg)
int s3c2412_iotiming_get(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *timings)
void s3c2412_cpufreq_setrefresh(struct s3c_cpufreq_config *cfg)
