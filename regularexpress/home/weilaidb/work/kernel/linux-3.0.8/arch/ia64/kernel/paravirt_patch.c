typedef union ia64_inst  ia64_inst_t;
void __init_or_module
paravirt_flush_i_cache_range(const void *instr, unsigned long size)
bundle_t* __init_or_module
paravirt_get_bundle(unsigned long tag)
unsigned long __init_or_module
paravirt_get_slot(unsigned long tag)
unsigned long __init_or_module
paravirt_get_num_inst(unsigned long stag, unsigned long etag)
unsigned long __init_or_module
paravirt_get_next_tag(unsigned long tag)
ia64_inst_t __init_or_module
paravirt_read_slot0(const bundle_t *bundle)
ia64_inst_t __init_or_module
paravirt_read_slot1(const bundle_t *bundle)
ia64_inst_t __init_or_module
paravirt_read_slot2(const bundle_t *bundle)
ia64_inst_t __init_or_module
paravirt_read_inst(unsigned long tag)
void __init_or_module
paravirt_write_slot0(bundle_t *bundle, ia64_inst_t inst)
void __init_or_module
paravirt_write_slot1(bundle_t *bundle, ia64_inst_t inst)
void __init_or_module
paravirt_write_slot2(bundle_t *bundle, ia64_inst_t inst)
void __init_or_module
paravirt_write_inst(unsigned long tag, ia64_inst_t inst)
void
paravirt_print_bundle(const bundle_t *bundle)
static int noreplace_paravirt __init_or_module = 0;
static int __init setup_noreplace_paravirt(char *str)
__setup("noreplace-paravirt", setup_noreplace_paravirt);
static void __init_or_module
fill_nop_bundle(void *sbundle, void *ebundle)
unsigned long __init_or_module
__paravirt_patch_apply_bundle(void *sbundle, void *ebundle, unsigned long type,
const struct paravirt_patch_bundle_elem *elems,
unsigned long nelems,
const struct paravirt_patch_bundle_elem **found)
void __init_or_module
paravirt_patch_apply_bundle(const struct paravirt_patch_site_bundle *start,
const struct paravirt_patch_site_bundle *end)
static void __init_or_module
fill_nop_inst(unsigned long stag, unsigned long etag)
void __init_or_module
paravirt_patch_apply_inst(const struct paravirt_patch_site_inst *start,
const struct paravirt_patch_site_inst *end)
typedef union inst_x3_op  inst_x3_op_t;
typedef union inst_x3_imm  inst_x3_imm_t;
void __init_or_module
paravirt_patch_reloc_brl(unsigned long tag, const void *target)
typedef union inst_b1  inst_b1_t;
void __init
paravirt_patch_reloc_br(unsigned long tag, const void *target)
void __init
__paravirt_patch_apply_branch(
unsigned long tag, unsigned long type,
const struct paravirt_patch_branch_target *entries,
unsigned int nr_entries)
static void __init
paravirt_patch_apply_branch(const struct paravirt_patch_site_branch *start,
const struct paravirt_patch_site_branch *end)
void __init
paravirt_patch_apply(void)
