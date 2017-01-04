#define YASM_OBJFMT_H
typedef struct yasm_objfmt_base  yasm_objfmt_base;
struct yasm_objfmt_module ; yasm_objfmt *yasm_objfmt_create
(const yasm_objfmt_module *module, yasm_object *object);
void yasm_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns);
void yasm_objfmt_destroy( yasm_objfmt *objfmt);
yasm_section *yasm_objfmt_add_default_section(yasm_object *object);
void yasm_objfmt_init_new_section(yasm_object *object, unsigned long line); yasm_section *yasm_objfmt_section_switch
(yasm_object *object, yasm_valparamhead *valparams, yasm_valparamhead *objext_valparams, unsigned long line); yasm_symrec *yasm_objfmt_get_special_sym
(yasm_object *object, const char *name, const char *parser);
#define yasm_objfmt_create(module, object) module->create(object)
#define yasm_objfmt_output(object, f, all_syms, ews) \
((yasm_objfmt_base *)((object)->objfmt))->module->output \
(object, f, all_syms, ews)
#define yasm_objfmt_destroy(objfmt) \
((yasm_objfmt_base *)objfmt)->module->destroy(objfmt)
#define yasm_objfmt_section_switch(object, vpms, oe_vpms, line) \
((yasm_objfmt_base *)((object)->objfmt))->module->section_switch \
(object, vpms, oe_vpms, line)
#define yasm_objfmt_add_default_section(object) \
((yasm_objfmt_base *)((object)->objfmt))->module->add_default_section \
(object)
#define yasm_objfmt_init_new_section(section, line) \
((yasm_objfmt_base *)((object)->objfmt))->module->init_new_section \
(section, line)
#define yasm_objfmt_get_special_sym(object, name, parser) \
((yasm_objfmt_base *)((object)->objfmt))->module->get_special_sym \
(object, name, parser)
