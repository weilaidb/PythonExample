#if !defined(_IO_EDGEPORT_H_)
#define	_IO_EDGEPORT_H_
#define MAX_RS232_PORTS		8
#define LOW8(a)		((unsigned char)(a & 0xff))
#define HIGH8(a)	((unsigned char)((a & 0xff00) >> 8))
#define __KERNEL__
#define MAX_EDGEPORTS	64
struct comMapper ;
#define EDGEPORT_CONFIG_DEVICE "/proc/edgeport"
#define PROC_GET_MAPPING_TO_PATH	1
#define PROC_GET_COM_ENTRY		2
#define PROC_GET_EDGE_MANUF_DESCRIPTOR	3
#define PROC_GET_BOOT_DESCRIPTOR	4
#define PROC_GET_PRODUCT_INFO		5
#define PROC_GET_STRINGS		6
#define PROC_GET_CURRENT_COM_MAPPING	7
#define PROC_READ_SETUP(Command, Argument)	((Command) + ((Argument)<<8))
#define PROC_SET_COM_MAPPING		1
#define PROC_SET_COM_ENTRY		2
struct procWrite ;
struct edgeport_product_info ;
#define EDGESTRING_MANUFNAME		1
#define EDGESTRING_PRODNAME		2
#define EDGESTRING_SERIALNUM		3
#define EDGESTRING_ASSEMNUM		4
#define EDGESTRING_OEMASSEMNUM		5
#define EDGESTRING_MANUFDATE		6
#define EDGESTRING_ORIGSERIALNUM	7
struct string_block ;
