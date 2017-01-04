#define __SEP_DRIVER_API_H__
#define SEP_DRIVER_SRC_REPLY		1
#define SEP_DRIVER_SRC_REQ		2
#define SEP_DRIVER_SRC_PRINTF		3
struct alloc_struct ;
struct caller_id_struct ;
struct sep_dcblock ;
struct sep_caller_id_entry ;
struct build_dcb_struct ;
struct sep_dma_map ;
struct sep_dma_resource ;
struct rar_hndl_to_bus_struct ;
struct sep_lli_entry ;
#define SEP_IOC_MAGIC_NUMBER	                     's'
#define SEP_IOCSENDSEPCOMMAND	 \
_IO(SEP_IOC_MAGIC_NUMBER, 0)
#define SEP_IOCSENDSEPRPLYCOMMAND	 \
_IO(SEP_IOC_MAGIC_NUMBER, 1)
#define SEP_IOCALLOCDATAPOLL	\
_IOW(SEP_IOC_MAGIC_NUMBER, 2, struct alloc_struct)
#define SEP_IOCFREEDMATABLEDATA	 \
_IO(SEP_IOC_MAGIC_NUMBER, 7)
#define SEP_IOCGETSTATICPOOLADDR	\
_IO(SEP_IOC_MAGIC_NUMBER, 8)
#define SEP_IOCENDTRANSACTION	 \
_IO(SEP_IOC_MAGIC_NUMBER, 15)
#define SEP_IOCRARPREPAREMESSAGE	\
_IOW(SEP_IOC_MAGIC_NUMBER, 20, struct rar_hndl_to_bus_struct)
#define SEP_IOCTLSETCALLERID	\
_IOW(SEP_IOC_MAGIC_NUMBER, 34, struct caller_id_struct)
#define SEP_IOCPREPAREDCB					\
_IOW(SEP_IOC_MAGIC_NUMBER, 35, struct build_dcb_struct)
#define SEP_IOCFREEDCB					\
_IO(SEP_IOC_MAGIC_NUMBER, 36)
