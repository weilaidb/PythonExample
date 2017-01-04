#define _DYNAMIC_LOADER_H_
struct dynamic_loader_stream;
struct dynamic_loader_sym;
struct dynamic_loader_allocate;
struct dynamic_loader_initialize;
#define DLOAD_INITBSS 0x1
extern int dynamic_load_module(
struct dynamic_loader_stream *module,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init,
unsigned options,
void **mhandle);
extern int dynamic_open_module(
struct dynamic_loader_stream *module,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init,
unsigned options,
void **mhandle);
extern int dynamic_unload_module(void *mhandle,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init);
struct dynamic_loader_stream ;
typedef u32 ldr_addr;
struct dynload_symbol ;
struct dynamic_loader_sym ;
struct ldr_section_info ;
#define DLOAD_SECTION_TYPE(typeinfo) (typeinfo & 0xF)
#define DLOAD_TEXT 0
#define DLOAD_DATA 1
#define DLOAD_BSS 2
#define DLOAD_CINIT 3
struct dynamic_loader_allocate ;
struct dynamic_loader_initialize ;
