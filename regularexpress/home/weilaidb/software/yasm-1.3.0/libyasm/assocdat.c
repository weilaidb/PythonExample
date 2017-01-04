typedef struct assoc_data_item  assoc_data_item;
struct yasm__assoc_data ;
yasm__assoc_data *
yasm__assoc_data_create(void)
void *
yasm__assoc_data_get(yasm__assoc_data *assoc_data,
const yasm_assoc_data_callback *callback)
yasm__assoc_data *
yasm__assoc_data_add(yasm__assoc_data *assoc_data_arg,
const yasm_assoc_data_callback *callback, void *data)
void
yasm__assoc_data_destroy(yasm__assoc_data *assoc_data)
void
yasm__assoc_data_print(const yasm__assoc_data *assoc_data, FILE *f,
int indent_level)
