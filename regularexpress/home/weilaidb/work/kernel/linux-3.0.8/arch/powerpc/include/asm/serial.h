#define _ASM_POWERPC_SERIAL_H
#define BASE_BAUD ( 1843200 / 16 )
extern void find_legacy_serial_ports(void);
#define find_legacy_serial_ports()	do  while (0)
