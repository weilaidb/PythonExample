#define _IO_INTERFACE_MUX_H
enum cris_io_interface ;
int cris_request_io_interface(enum cris_io_interface ioif, const char *device_id);
void cris_free_io_interface(enum cris_io_interface ioif);
int cris_io_interface_allocate_pins(const enum cris_io_interface ioif,
const char port,
const unsigned start_bit,
const unsigned stop_bit);
int cris_io_interface_free_pins(const enum cris_io_interface ioif,
const char port,
const unsigned start_bit,
const unsigned stop_bit);
int cris_io_interface_register_watcher(void (*notify)(const unsigned int gpio_in_available,
const unsigned int gpio_out_available,
const unsigned char pa_available,
const unsigned char pb_available));
void cris_io_interface_delete_watcher(void (*notify)(const unsigned int gpio_in_available,
const unsigned int gpio_out_available,
const unsigned char pa_available,
const unsigned char pb_available));
