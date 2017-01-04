yasm_arch_module yasm_x86_LTX_arch;
static yasm_arch *
x86_create(const char *machine, const char *parser, yasm_arch_create_error *error)
static void
x86_destroy( yasm_arch *arch)
static const char *
x86_get_machine(const yasm_arch *arch)
static unsigned int
x86_get_address_size(const yasm_arch *arch)
static int
x86_set_var(yasm_arch *arch, const char *var, unsigned long val)
static void
x86_dir_cpu(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
x86_dir_bits(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
x86_dir_code16(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
x86_dir_code32(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
x86_dir_code64(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static const unsigned char **
x86_get_fill(const yasm_arch *arch)
unsigned int
yasm_x86__get_reg_size(uintptr_t reg)
static unsigned int
x86_get_reg_size(yasm_arch *arch, uintptr_t reg)
static uintptr_t
x86_reggroup_get_reg(yasm_arch *arch, uintptr_t reggroup,
unsigned long regindex)
static void
x86_reg_print(yasm_arch *arch, uintptr_t reg, FILE *f)
static void
x86_segreg_print(yasm_arch *arch, uintptr_t segreg, FILE *f)
static const yasm_arch_machine x86_machines[] = ;
static const yasm_directive x86_directives[] = ;
yasm_arch_module yasm_x86_LTX_arch = ;
