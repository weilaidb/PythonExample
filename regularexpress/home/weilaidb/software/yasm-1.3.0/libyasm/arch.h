#define YASM_ARCH_H
typedef enum yasm_arch_create_error  yasm_arch_create_error;
typedef enum yasm_arch_insnprefix  yasm_arch_insnprefix;
typedef enum yasm_arch_regtmod  yasm_arch_regtmod;
typedef struct yasm_arch_base  yasm_arch_base;
typedef struct yasm_arch_machine  yasm_arch_machine;
typedef struct yasm_arch_module  yasm_arch_module;
const char *yasm_arch_name(const yasm_arch *arch);
const char *yasm_arch_keyword(const yasm_arch *arch);
unsigned int yasm_arch_wordsize(const yasm_arch *arch);
unsigned int yasm_arch_min_insn_len(const yasm_arch *arch); yasm_arch *yasm_arch_create(const yasm_arch_module *module,
const char *machine, const char *parser, yasm_arch_create_error *error);
void yasm_arch_destroy( yasm_arch *arch);
const char *yasm_arch_get_machine(const yasm_arch *arch);
unsigned int yasm_arch_get_address_size(const yasm_arch *arch);
int yasm_arch_set_var(yasm_arch *arch, const char *var, unsigned long val);
yasm_arch_insnprefix yasm_arch_parse_check_insnprefix
(yasm_arch *arch, const char *id, size_t id_len, unsigned long line, yasm_bytecode **bc, uintptr_t *prefix);
yasm_arch_regtmod yasm_arch_parse_check_regtmod
(yasm_arch *arch, const char *id, size_t id_len, uintptr_t *data);
const unsigned char **yasm_arch_get_fill(const yasm_arch *arch);
int yasm_arch_floatnum_tobytes(yasm_arch *arch, const yasm_floatnum *flt,
unsigned char *buf, size_t destsize,
size_t valsize, size_t shift, int warn);
int yasm_arch_intnum_tobytes(yasm_arch *arch, const yasm_intnum *intn,
unsigned char *buf, size_t destsize,
size_t valsize, int shift,
const yasm_bytecode *bc, int warn);
unsigned int yasm_arch_get_reg_size(yasm_arch *arch, uintptr_t reg);
uintptr_t yasm_arch_reggroup_get_reg(yasm_arch *arch, uintptr_t reggroup,
unsigned long regindex);
void yasm_arch_reg_print(yasm_arch *arch, uintptr_t reg, FILE *f);
void yasm_arch_segreg_print(yasm_arch *arch, uintptr_t segreg, FILE *f);
yasm_effaddr *yasm_arch_ea_create(yasm_arch *arch, yasm_expr *e);
void yasm_arch_ea_destroy(yasm_arch *arch, yasm_effaddr *ea);
void yasm_arch_ea_print(const yasm_arch *arch, const yasm_effaddr *ea,
FILE *f, int indent_level); yasm_bytecode *yasm_arch_create_empty_insn(yasm_arch *arch,
unsigned long line);
#define yasm_arch_name(arch) \
(((yasm_arch_base *)arch)->module->name)
#define yasm_arch_keyword(arch) \
(((yasm_arch_base *)arch)->module->keyword)
#define yasm_arch_wordsize(arch) \
(((yasm_arch_base *)arch)->module->wordsize)
#define yasm_arch_min_insn_len(arch) \
(((yasm_arch_base *)arch)->module->min_insn_len)
#define yasm_arch_create(module, machine, parser, error) \
module->create(machine, parser, error)
#define yasm_arch_destroy(arch) \
((yasm_arch_base *)arch)->module->destroy(arch)
#define yasm_arch_get_machine(arch) \
((yasm_arch_base *)arch)->module->get_machine(arch)
#define yasm_arch_get_address_size(arch) \
((yasm_arch_base *)arch)->module->get_address_size(arch)
#define yasm_arch_set_var(arch, var, val) \
((yasm_arch_base *)arch)->module->set_var(arch, var, val)
#define yasm_arch_parse_check_insnprefix(arch, id, id_len, line, bc, prefix) \
((yasm_arch_base *)arch)->module->parse_check_insnprefix \
(arch, id, id_len, line, bc, prefix)
#define yasm_arch_parse_check_regtmod(arch, id, id_len, data) \
((yasm_arch_base *)arch)->module->parse_check_regtmod \
(arch, id, id_len, data)
#define yasm_arch_get_fill(arch) \
((yasm_arch_base *)arch)->module->get_fill(arch)
#define yasm_arch_floatnum_tobytes(arch, flt, buf, destsize, valsize, shift, \
warn) \
((yasm_arch_base *)arch)->module->floatnum_tobytes \
(arch, flt, buf, destsize, valsize, shift, warn)
#define yasm_arch_intnum_tobytes(arch, intn, buf, destsize, valsize, shift, \
bc, warn) \
((yasm_arch_base *)arch)->module->intnum_tobytes \
(arch, intn, buf, destsize, valsize, shift, bc, warn)
#define yasm_arch_get_reg_size(arch, reg) \
((yasm_arch_base *)arch)->module->get_reg_size(arch, reg)
#define yasm_arch_reggroup_get_reg(arch, regg, regi) \
((yasm_arch_base *)arch)->module->reggroup_get_reg(arch, regg, regi)
#define yasm_arch_reg_print(arch, reg, f) \
((yasm_arch_base *)arch)->module->reg_print(arch, reg, f)
#define yasm_arch_segreg_print(arch, segreg, f) \
((yasm_arch_base *)arch)->module->segreg_print(arch, segreg, f)
#define yasm_arch_ea_create(arch, e) \
((yasm_arch_base *)arch)->module->ea_create(arch, e)
#define yasm_arch_ea_destroy(arch, ea) \
((yasm_arch_base *)arch)->module->ea_destroy(ea)
#define yasm_arch_ea_print(arch, ea, f, i) \
((yasm_arch_base *)arch)->module->ea_print(ea, f, i)
#define yasm_arch_create_empty_insn(arch, line) \
((yasm_arch_base *)arch)->module->create_empty_insn(arch, line)
