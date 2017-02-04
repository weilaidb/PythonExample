#define YASM_ARCH_H
typedef enum yasm_arch_create_error  yasm_arch_create_error;
typedef enum yasm_arch_insnprefix  yasm_arch_insnprefix;
typedef enum yasm_arch_regtmod  yasm_arch_regtmod;
typedef struct yasm_arch_base  yasm_arch_base;
typedef struct yasm_arch_machine  yasm_arch_machine;
typedef struct yasm_arch_module  yasm_arch_module;
*yasm_arch_name;
*yasm_arch_keyword;
yasm_arch_wordsize;
*yasm_arch_create;
yasm_arch_destroy;
*yasm_arch_get_machine;
yasm_arch_get_address_size;
yasm_arch_set_var;
yasm_arch_insnprefix yasm_arch_parse_check_insnprefix
(yasm_arch *arch, const char *id, size_t id_len, unsigned long line, yasm_bytecode **bc, uintptr_t *prefix);
yasm_arch_regtmod yasm_arch_parse_check_regtmod
(yasm_arch *arch, const char *id, size_t id_len, uintptr_t *data);
**yasm_arch_get_fill;
yasm_arch_floatnum_tobytes;
yasm_arch_intnum_tobytes;
yasm_arch_get_reg_size;
yasm_arch_reggroup_get_reg;
yasm_arch_reg_print;
yasm_arch_segreg_print;
*yasm_arch_ea_create;
yasm_arch_ea_destroy;
yasm_arch_ea_print*yasm_arch_create_empty_insn;
yasm_arch_name \
(((yasm_arch_base *)arch)->module->name)
yasm_arch_keyword \
(((yasm_arch_base *)arch)->module->keyword)
yasm_arch_wordsize \
(((yasm_arch_base *)arch)->module->wordsize)
yasm_arch_min_insn_len \
(((yasm_arch_base *)arch)->module->min_insn_len)
yasm_arch_create \
module->create(machine, parser, error)
yasm_arch_destroy \
((yasm_arch_base *)arch)->module->destroy(arch)
yasm_arch_get_machine \
((yasm_arch_base *)arch)->module->get_machine(arch)
yasm_arch_get_address_size \
((yasm_arch_base *)arch)->module->get_address_size(arch)
yasm_arch_set_var \
((yasm_arch_base *)arch)->module->set_var(arch, var, val)
yasm_arch_parse_check_insnprefix \
((yasm_arch_base *)arch)->module->parse_check_insnprefix \
(arch, id, id_len, line, bc, prefix)
yasm_arch_parse_check_regtmod \
((yasm_arch_base *)arch)->module->parse_check_regtmod \
(arch, id, id_len, data)
yasm_arch_get_fill \
((yasm_arch_base *)arch)->module->get_fill(arch)
yasm_arch_floatnum_tobytes \
((yasm_arch_base *)arch)->module->floatnum_tobytes \
(arch, flt, buf, destsize, valsize, shift, warn)
yasm_arch_intnum_tobytes \
((yasm_arch_base *)arch)->module->intnum_tobytes \
(arch, intn, buf, destsize, valsize, shift, bc, warn)
yasm_arch_get_reg_size \
((yasm_arch_base *)arch)->module->get_reg_size(arch, reg)
yasm_arch_reggroup_get_reg \
((yasm_arch_base *)arch)->module->reggroup_get_reg(arch, regg, regi)
yasm_arch_reg_print \
((yasm_arch_base *)arch)->module->reg_print(arch, reg, f)
yasm_arch_segreg_print \
((yasm_arch_base *)arch)->module->segreg_print(arch, segreg, f)
yasm_arch_ea_create \
((yasm_arch_base *)arch)->module->ea_create(arch, e)
yasm_arch_ea_destroy \
((yasm_arch_base *)arch)->module->ea_destroy(ea)
yasm_arch_ea_print \
((yasm_arch_base *)arch)->module->ea_print(ea, f, i)
yasm_arch_create_empty_insn \
((yasm_arch_base *)arch)->module->create_empty_insn(arch, line)
