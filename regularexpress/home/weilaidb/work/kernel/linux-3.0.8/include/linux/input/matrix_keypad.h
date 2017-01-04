#define _MATRIX_KEYPAD_H
#define MATRIX_MAX_ROWS		32
#define MATRIX_MAX_COLS		32
#define KEY(row, col, val)	((((row) & (MATRIX_MAX_ROWS - 1)) << 24) |\
(((col) & (MATRIX_MAX_COLS - 1)) << 16) |\
((val) & 0xffff))
#define KEY_ROW(k)		(((k) >> 24) & 0xff)
#define KEY_COL(k)		(((k) >> 16) & 0xff)
#define KEY_VAL(k)		((k) & 0xffff)
#define MATRIX_SCAN_CODE(row, col, row_shift)	(((row) << (row_shift)) + (col))
struct matrix_keymap_data ;
struct matrix_keypad_platform_data ;
static inline void
matrix_keypad_build_keymap(const struct matrix_keymap_data *keymap_data,
unsigned int row_shift,
unsigned short *keymap, unsigned long *keybit)
