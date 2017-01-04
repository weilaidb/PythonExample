struct seq_file;
#define MAX_BANKS (8)
#define S3C2412_MAX_IO	(8)
struct s3c2410_iobank_timing ;
struct s3c2412_iobank_timing ;
union s3c_iobank ;
struct s3c_iotimings ;
struct s3c_plltab ;
struct s3c_cpufreq_config ;
struct s3c_cpufreq_info ;
extern int s3c_cpufreq_register(struct s3c_cpufreq_info *info);
extern int s3c_plltab_register(struct cpufreq_frequency_table *plls, unsigned int plls_no);
extern struct s3c_cpufreq_config *s3c_cpufreq_getconfig(void);
extern struct s3c_iotimings *s3c_cpufreq_getiotimings(void);
extern void s3c2410_iotiming_debugfs(struct seq_file *seq,
struct s3c_cpufreq_config *cfg,
union s3c_iobank *iob);
extern void s3c2412_iotiming_debugfs(struct seq_file *seq,
struct s3c_cpufreq_config *cfg,
union s3c_iobank *iob);
#define s3c_cpufreq_debugfs_call(x) x
#define s3c_cpufreq_debugfs_call(x) NULL
extern struct clk *s3c_cpufreq_clk_get(struct device *, const char *);
extern void s3c2410_cpufreq_setrefresh(struct s3c_cpufreq_config *cfg);
extern void s3c2410_set_fvco(struct s3c_cpufreq_config *cfg);
extern int s3c2410_iotiming_calc(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot);
extern int s3c2410_iotiming_get(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *timings);
extern void s3c2410_iotiming_set(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot);
#define s3c2410_iotiming_calc NULL
#define s3c2410_iotiming_get NULL
#define s3c2410_iotiming_set NULL
extern int s3c2412_iotiming_get(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *timings);
extern int s3c2412_iotiming_get(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *timings);
extern int s3c2412_iotiming_calc(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot);
extern void s3c2412_iotiming_set(struct s3c_cpufreq_config *cfg,
struct s3c_iotimings *iot);
#define s3c_freq_dbg(x...) printk(KERN_INFO x)
#define s3c_freq_dbg(x...) do  while (0)
#define s3c_freq_iodbg(x...) printk(KERN_INFO x)
#define s3c_freq_iodbg(x...) do  while (0)
static inline int s3c_cpufreq_addfreq(struct cpufreq_frequency_table *table,
int index, size_t table_size,
unsigned int freq)
