static void
cyrix_get_arr(unsigned int reg, unsigned long *base,
unsigned long *size, mtrr_type * type)
static int
cyrix_get_free_region(unsigned long base, unsigned long size, int replace_reg)
static u32 cr4, ccr3;
static void prepare_set(void)
static void post_set(void)
static void cyrix_set_arr(unsigned int reg, unsigned long base,
unsigned long size, mtrr_type type)
typedef struct  arr_state_t;
static arr_state_t arr_state[8] = ;
static unsigned char ccr_state[7] = ;
static void cyrix_set_all(void)
static const struct mtrr_ops cyrix_mtrr_ops = ;
int __init cyrix_init_mtrr(void)
