struct m32r_sio_probe ;
int m32r_sio_register_probe(struct m32r_sio_probe *probe);
void m32r_sio_unregister_probe(struct m32r_sio_probe *probe);
void m32r_sio_get_irq_map(unsigned int *map);
void m32r_sio_suspend_port(int line);
void m32r_sio_resume_port(int line);
struct old_serial_port ;
#define _INLINE_ inline
#define PROBE_RSA	(1 << 0)
#define PROBE_ANY	(~0)
#define HIGH_BITS_OFFSET ((sizeof(long)-sizeof(int))*8)
