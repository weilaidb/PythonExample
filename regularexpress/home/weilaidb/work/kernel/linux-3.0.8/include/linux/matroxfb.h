#define __LINUX_MATROXFB_H__
struct matroxioc_output_mode ;
#define MATROXFB_SET_OUTPUT_MODE	_IOW('n',0xFA,size_t)
#define MATROXFB_GET_OUTPUT_MODE	_IOWR('n',0xFA,size_t)
#define MATROXFB_OUTPUT_CONN_PRIMARY	(1 << MATROXFB_OUTPUT_PRIMARY)
#define MATROXFB_OUTPUT_CONN_SECONDARY	(1 << MATROXFB_OUTPUT_SECONDARY)
#define MATROXFB_OUTPUT_CONN_DFP	(1 << MATROXFB_OUTPUT_DFP)
#define MATROXFB_SET_OUTPUT_CONNECTION	_IOW('n',0xF8,size_t)
#define MATROXFB_GET_OUTPUT_CONNECTION	_IOR('n',0xF8,size_t)
#define MATROXFB_GET_AVAILABLE_OUTPUTS	_IOR('n',0xF9,size_t)
#define MATROXFB_GET_ALL_OUTPUTS	_IOR('n',0xFB,size_t)
enum matroxfb_ctrl_id ;