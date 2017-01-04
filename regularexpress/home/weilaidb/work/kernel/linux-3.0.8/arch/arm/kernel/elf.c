int elf_check_arch(const struct elf32_hdr *x)
EXPORT_SYMBOL(elf_check_arch);
void elf_set_personality(const struct elf32_hdr *x)
EXPORT_SYMBOL(elf_set_personality);
int arm_elf_read_implies_exec(const struct elf32_hdr *x, int executable_stack)
EXPORT_SYMBOL(arm_elf_read_implies_exec);
