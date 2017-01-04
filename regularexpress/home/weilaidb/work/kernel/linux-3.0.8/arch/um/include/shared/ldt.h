#define __ASM_LDT_H
extern void ldt_host_info(void);
#define LDT_PAGES_MAX \
((LDT_ENTRIES * LDT_ENTRY_SIZE)/PAGE_SIZE)
#define LDT_ENTRIES_PER_PAGE \
(PAGE_SIZE/LDT_ENTRY_SIZE)
#define LDT_DIRECT_ENTRIES \
((LDT_PAGES_MAX*sizeof(void *))/LDT_ENTRY_SIZE)
struct ldt_entry ;
typedef struct uml_ldt  uml_ldt_t;
