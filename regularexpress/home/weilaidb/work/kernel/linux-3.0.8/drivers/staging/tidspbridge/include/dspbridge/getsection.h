#define _GETSECTION_H_
extern void *dload_module_open(struct dynamic_loader_stream
*module, struct dynamic_loader_sym
*syms);
extern int dload_get_section_info(void *minfo,
const char *section_name,
const struct ldr_section_info
**const section_info);
extern int dload_get_section(void *minfo,
const struct ldr_section_info *section_info,
void *section_data);
extern void dload_module_close(void *minfo);
