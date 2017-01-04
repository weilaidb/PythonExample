static void
amd_get_mtrr(unsigned int reg, unsigned long *base,
unsigned long *size, mtrr_type *type)
static void
amd_set_mtrr(unsigned int reg, unsigned long base, unsigned long size, mtrr_type type)
static int
amd_validate_add_page(unsigned long base, unsigned long size, unsigned int type)
static const struct mtrr_ops amd_mtrr_ops = ;
int __init amd_init_mtrr(void)
