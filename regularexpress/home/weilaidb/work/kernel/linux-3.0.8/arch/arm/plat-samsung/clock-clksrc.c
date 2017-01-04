static inline struct clksrc_clk *to_clksrc(struct clk *clk)
static inline u32 bit_mask(u32 shift, u32 nr_bits)
static unsigned long s3c_getrate_clksrc(struct clk *clk)
static int s3c_setrate_clksrc(struct clk *clk, unsigned long rate)
static int s3c_setparent_clksrc(struct clk *clk, struct clk *parent)
static unsigned long s3c_roundrate_clksrc(struct clk *clk,
unsigned long rate)
void __init_or_cpufreq s3c_set_clksrc(struct clksrc_clk *clk, bool announce)
static struct clk_ops clksrc_ops = ;
static struct clk_ops clksrc_ops_nodiv = ;
static struct clk_ops clksrc_ops_nosrc = ;
void __init s3c_register_clksrc(struct clksrc_clk *clksrc, int size)
