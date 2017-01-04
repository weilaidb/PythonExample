#define YASM_FLOATNUM_H
#define YASM_LIB_DECL
YASM_LIB_DECL
void yasm_floatnum_initialize(void);
YASM_LIB_DECL
void yasm_floatnum_cleanup(void);
YASM_LIB_DECL yasm_floatnum *yasm_floatnum_create(const char *str);
YASM_LIB_DECL yasm_floatnum *yasm_floatnum_copy(const yasm_floatnum *flt);
YASM_LIB_DECL
void yasm_floatnum_destroy( yasm_floatnum *flt);
YASM_LIB_DECL
int yasm_floatnum_calc(yasm_floatnum *acc, yasm_expr_op op,
yasm_floatnum *operand);
YASM_LIB_DECL
int yasm_floatnum_get_int(const yasm_floatnum *flt, unsigned long *ret_val);
YASM_LIB_DECL
int yasm_floatnum_get_sized(const yasm_floatnum *flt, unsigned char *ptr,
size_t destsize, size_t valsize, size_t shift,
int bigendian, int warn);
YASM_LIB_DECL
int yasm_floatnum_check_size(const yasm_floatnum *flt, size_t size);
YASM_LIB_DECL
void yasm_floatnum_print(const yasm_floatnum *flt, FILE *f);
