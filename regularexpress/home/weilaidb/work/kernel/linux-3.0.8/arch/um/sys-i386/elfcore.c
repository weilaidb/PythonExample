Elf32_Half elf_core_extra_phdrs(void)
int elf_core_write_extra_phdrs(struct file *file, loff_t offset, size_t *size,
unsigned long limit)
int elf_core_write_extra_data(struct file *file, size_t *size,
unsigned long limit)
size_t elf_core_extra_data_size(void)
