#define BARRIER __asm__ __volatile__(".set noreorder\n\t" \
"nop; nop; nop; nop; nop; nop;\n\t" \
".set reorder\n\t")
void __init board_setup(void)
