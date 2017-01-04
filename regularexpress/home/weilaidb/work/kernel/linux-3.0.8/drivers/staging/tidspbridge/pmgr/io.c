static u32 refs;
int io_create(struct io_mgr **io_man, struct dev_object *hdev_obj,
const struct io_attrs *mgr_attrts)
int io_destroy(struct io_mgr *hio_mgr)
void io_exit(void)
bool io_init(void)
