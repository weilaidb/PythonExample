#define MV_NAME_SIZE 32
#define for_each_mv(mv) \
for ((mv) = (struct sh_machine_vector *)&__machvec_start; \
(mv) && (unsigned long)(mv) < (unsigned long)&__machvec_end; \
(mv)++)
static struct sh_machine_vector * __init get_mv_byname(const char *name)
static unsigned int __initdata machvec_selected;
static int __init early_parse_mv(char *from)
early_param("sh_mv", early_parse_mv);
void __init sh_mv_setup(void)
