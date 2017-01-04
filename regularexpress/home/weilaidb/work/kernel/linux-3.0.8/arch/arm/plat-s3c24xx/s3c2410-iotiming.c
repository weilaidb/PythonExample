#define print_ns(x) ((x) / 10), ((x) % 10)
static void s3c2410_print_timing(const char *pfx,
struct s3c_iotimings *timings)
static inline void __iomem *bank_reg(unsigned int bank)
static inline int bank_is_io(unsigned long bankcon)
static inline unsigned int to_div(unsigned int cyc, unsigned int hclk_tns)
static unsigned int calc_0124(unsigned int cyc, unsigned long hclk_tns,
unsigned long *v, int shift)
int calc_tacp(unsigned int cyc, unsigned long hclk, unsigned long *v)
static int calc_tacc(unsigned int cyc, int nwait_en,
unsigned long hclk_tns, unsigned long *v)
static int s3c2410_calc_bank(struct s3c_cpufreq_config *cfg,
struct s3c2410_iobank_timing *bt)
static unsigned int tacc_tab[] = ;
static unsigned int get_tacc(unsigned long hclk_tns,
unsigned long val)
static unsigned int get_0124(unsigned long hclk_tns,
unsigned long val)
void s3c2410_iotiming_getbank(struct s3c_cpufreq_config *cfg,
struct s3c2410_iobank_timing *bt)
void s3c2410_iotiming_debugfs(struct seq_file *seq,
struct s3c_cpufreq_config *cfg,
union s3c_iobank *iob)
int s3c2410_iotiming_calc(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot)
void s3c2410_iotiming_set(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot)
int s3c2410_iotiming_get(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *timings)
