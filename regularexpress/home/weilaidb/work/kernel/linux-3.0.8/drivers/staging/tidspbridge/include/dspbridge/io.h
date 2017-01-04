#define IO_
struct io_mgr;
struct io_attrs ;
extern int io_create(struct io_mgr **io_man,
struct dev_object *hdev_obj,
const struct io_attrs *mgr_attrts);
extern int io_destroy(struct io_mgr *hio_mgr);
extern void io_exit(void);
extern bool io_init(void);
