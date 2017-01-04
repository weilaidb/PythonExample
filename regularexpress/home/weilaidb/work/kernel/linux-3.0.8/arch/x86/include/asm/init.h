#define _ASM_X86_INIT_32_H
extern void __init early_ioremap_page_table_range_init(void);
extern unsigned long __init
kernel_physical_mapping_init(unsigned long start,
unsigned long end,
unsigned long page_size_mask);
extern unsigned long __initdata pgt_buf_start;
extern unsigned long __meminitdata pgt_buf_end;
extern unsigned long __meminitdata pgt_buf_top;
