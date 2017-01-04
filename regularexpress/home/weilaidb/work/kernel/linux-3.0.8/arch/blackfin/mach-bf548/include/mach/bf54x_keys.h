#define _BFIN_KPAD_H
struct bfin_kpad_platform_data ;
#define KEYVAL(col, row, val) (((1 << col) << 24) | ((1 << row) << 16) | (val))
