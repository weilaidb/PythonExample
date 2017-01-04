static DEFINE_PER_CPU(struct rnd_state, net_rand_state);
u32 prandom32(struct rnd_state *state)
EXPORT_SYMBOL(prandom32);
u32 random32(void)
EXPORT_SYMBOL(random32);
void srandom32(u32 entropy)
EXPORT_SYMBOL(srandom32);
static int __init random32_init(void)
core_initcall(random32_init);
static int __init random32_reseed(void)
late_initcall(random32_reseed);
