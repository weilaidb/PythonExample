asmlinkage void
create_params (unsigned long *buffer)
typedef int (*ofw_handle_t)(void *);
int
of_decode_int(const unsigned char *p)
int
OF_finddevice(ofw_handle_t openfirmware, char *name)
int
OF_getproplen(ofw_handle_t openfirmware, int handle, char *prop)
int
OF_getprop(ofw_handle_t openfirmware, int handle, char *prop, void *buf, unsigned int buflen)
asmlinkage void ofw_init(ofw_handle_t o, int *nomr, int *pointer)
