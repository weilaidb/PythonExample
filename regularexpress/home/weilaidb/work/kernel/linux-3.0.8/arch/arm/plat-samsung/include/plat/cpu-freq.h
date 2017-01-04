struct s3c_cpufreq_info;
struct s3c_cpufreq_board;
struct s3c_iotimings;
struct s3c_freq ;
struct s3c_cpufreq_freqs ;
#define to_s3c_cpufreq(_cf) container_of(_cf, struct s3c_cpufreq_freqs, freqs)
struct s3c_clkdivs ;
#define PLLVAL(_m, _p, _s) (((_m) << 12) | ((_p) << 4) | (_s))
struct s3c_pllval ;
struct s3c_cpufreq_board ;
#define __init_or_cpufreq
#define __init_or_cpufreq __init
extern int s3c_cpufreq_setboard(struct s3c_cpufreq_board *board);
static inline int s3c_cpufreq_setboard(struct s3c_cpufreq_board *board)
