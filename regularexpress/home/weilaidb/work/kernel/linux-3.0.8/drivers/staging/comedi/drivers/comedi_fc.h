#define _COMEDI_FC_H
extern unsigned int cfc_write_array_to_buffer(struct comedi_subdevice *subd,
void *data,
unsigned int num_bytes);
static inline unsigned int cfc_write_to_buffer(struct comedi_subdevice *subd,
short data)
;
static inline unsigned int cfc_write_long_to_buffer(struct comedi_subdevice
*subd, unsigned int data)
;
extern unsigned int cfc_read_array_from_buffer(struct comedi_subdevice *subd,
void *data,
unsigned int num_bytes);
extern unsigned int cfc_handle_events(struct comedi_device *dev,
struct comedi_subdevice *subd);
static inline unsigned int cfc_bytes_per_scan(struct comedi_subdevice *subd)
