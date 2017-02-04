#define YASM_ASSOCDAT_H
#define YASM_LIB_DECL
typedef struct yasm__assoc_data yasm__assoc_data;
*yasm__assoc_data_create;
YASM_LIB_DECL void *yasm__assoc_data_get
( yasm__assoc_data *assoc_data,
const yasm_assoc_data_callback *callback);
YASM_LIB_DECL yasm__assoc_data *yasm__assoc_data_add
( yasm__assoc_data *assoc_data,
const yasm_assoc_data_callback *callback, void *data);
YASM_LIB_DECL
void yasm__assoc_data_destroy
( yasm__assoc_data *assoc_data);
YASM_LIB_DECL
yasm__assoc_data_print;
