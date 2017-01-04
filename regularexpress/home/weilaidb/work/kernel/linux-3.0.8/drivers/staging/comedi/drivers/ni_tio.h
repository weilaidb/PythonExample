#define _COMEDI_NI_TIO_H
struct mite_struct;
struct ni_gpct_device;
enum ni_gpct_register ;
enum ni_gpct_variant ;
struct ni_gpct ;
struct ni_gpct_device ;
extern struct ni_gpct_device *ni_gpct_device_construct(struct comedi_device
*dev,
void (*write_register)
(struct ni_gpct *
counter, unsigned bits,
enum ni_gpct_register
reg),
unsigned (*read_register)
(struct ni_gpct *
counter,
enum ni_gpct_register
reg),
enum ni_gpct_variant
variant,
unsigned num_counters);
extern void ni_gpct_device_destroy(struct ni_gpct_device *counter_dev);
extern void ni_tio_init_counter(struct ni_gpct *counter);
extern int ni_tio_rinsn(struct ni_gpct *counter,
struct comedi_insn *insn, unsigned int *data);
extern int ni_tio_insn_config(struct ni_gpct *counter,
struct comedi_insn *insn, unsigned int *data);
extern int ni_tio_winsn(struct ni_gpct *counter,
struct comedi_insn *insn, unsigned int *data);
extern int ni_tio_cmd(struct ni_gpct *counter, struct comedi_async *async);
extern int ni_tio_cmdtest(struct ni_gpct *counter, struct comedi_cmd *cmd);
extern int ni_tio_cancel(struct ni_gpct *counter);
extern void ni_tio_handle_interrupt(struct ni_gpct *counter,
struct comedi_subdevice *s);
extern void ni_tio_set_mite_channel(struct ni_gpct *counter,
struct mite_channel *mite_chan);
extern void ni_tio_acknowledge_and_confirm(struct ni_gpct *counter,
int *gate_error, int *tc_error,
int *perm_stale_data,
int *stale_data);
static inline struct ni_gpct *subdev_to_counter(struct comedi_subdevice *s)
