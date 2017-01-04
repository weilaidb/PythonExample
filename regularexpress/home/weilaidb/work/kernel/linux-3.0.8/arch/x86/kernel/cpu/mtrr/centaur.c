static struct  centaur_mcr[8];
static u8 centaur_mcr_reserved;
static u8 centaur_mcr_type;
static int
centaur_get_free_region(unsigned long base, unsigned long size, int replace_reg)
void mtrr_centaur_report_mcr(int mcr, u32 lo, u32 hi)
static void
centaur_get_mcr(unsigned int reg, unsigned long *base,
unsigned long *size, mtrr_type * type)
static void
centaur_set_mcr(unsigned int reg, unsigned long base,
unsigned long size, mtrr_type type)
static int
centaur_validate_add_page(unsigned long base, unsigned long size, unsigned int type)
static const struct mtrr_ops centaur_mtrr_ops = ;
int __init centaur_init_mtrr(void)
