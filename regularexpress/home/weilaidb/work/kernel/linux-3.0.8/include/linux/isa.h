#define __LINUX_ISA_H
struct isa_driver ;
#define to_isa_driver(x) container_of((x), struct isa_driver, driver)
int isa_register_driver(struct isa_driver *, unsigned int);
void isa_unregister_driver(struct isa_driver *);
static inline int isa_register_driver(struct isa_driver *d, unsigned int i)
static inline void isa_unregister_driver(struct isa_driver *d)
