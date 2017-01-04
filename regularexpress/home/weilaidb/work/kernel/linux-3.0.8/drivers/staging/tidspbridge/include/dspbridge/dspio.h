#define DSPIO_
extern int bridge_io_create(struct io_mgr **io_man,
struct dev_object *hdev_obj,
const struct io_attrs *mgr_attrts);
extern int bridge_io_destroy(struct io_mgr *hio_mgr);
extern int bridge_io_on_loaded(struct io_mgr *hio_mgr);
extern int bridge_io_get_proc_load(struct io_mgr *hio_mgr,
struct dsp_procloadstat *proc_lstat);
