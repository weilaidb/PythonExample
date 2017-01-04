Elf_Half __weak elf_core_extra_phdrs(void)
int __weak elf_core_write_extra_phdrs(struct file *file, loff_t offset, size_t *size,
unsigned long limit)
int __weak elf_core_write_extra_data(struct file *file, size_t *size,
unsigned long limit)
size_t __weak elf_core_extra_data_size(void)
