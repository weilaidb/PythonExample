#define __INC_FIRMWARE_H
#define RTL8190_CPU_START_OFFSET	0x80
#define GET_COMMAND_PACKET_FRAG_THRESHOLD(v)	(4*(v/4) - 8 - USB_HWDESC_HEADER_LEN)
typedef enum _firmware_init_stepfirmware_init_step_e;
typedef enum _opt_rst_typeopt_rst_type_e;
