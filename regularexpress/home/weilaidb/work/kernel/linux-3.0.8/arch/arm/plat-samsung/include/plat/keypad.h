#define __PLAT_SAMSUNG_KEYPAD_H
#define SAMSUNG_MAX_ROWS	8
#define SAMSUNG_MAX_COLS	8
struct samsung_keypad_platdata ;
extern void samsung_keypad_set_platdata(struct samsung_keypad_platdata *pd);
extern void samsung_keypad_cfg_gpio(unsigned int rows, unsigned int cols);
