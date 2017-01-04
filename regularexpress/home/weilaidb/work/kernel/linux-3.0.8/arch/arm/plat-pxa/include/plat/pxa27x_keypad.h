#define __ASM_ARCH_PXA27x_KEYPAD_H
#define MAX_MATRIX_KEY_ROWS	(8)
#define MAX_MATRIX_KEY_COLS	(8)
#define MATRIX_ROW_SHIFT	(3)
#define MAX_DIRECT_KEY_NUM	(8)
struct pxa27x_keypad_platform_data ;
extern void pxa_set_keypad_info(struct pxa27x_keypad_platform_data *info);
