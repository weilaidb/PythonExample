#define _LINUX_PSTORE_H
enum pstore_type_id ;
struct pstore_info ;
extern int pstore_register(struct pstore_info *);
extern int pstore_write(enum pstore_type_id type, char *buf, size_t size);
static inline int
pstore_register(struct pstore_info *psi)
static inline int
pstore_write(enum pstore_type_id type, char *buf, size_t size)
