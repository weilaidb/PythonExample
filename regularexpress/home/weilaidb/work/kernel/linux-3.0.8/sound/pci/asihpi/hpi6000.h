#define _HPI6000_H_
#define HPI_NMIXER_CONTROLS 200
struct hpi_hif_6000 ;
#define HPI_HIF_PACK_ADAPTER_INFO(adapter, version_major, version_minor) \
((adapter << 16) | (version_major << 8) | version_minor)
#define HPI_HIF_ADAPTER_INFO_EXTRACT_ADAPTER(adapterinfo) \
((adapterinfo >> 16) & 0xffff)
#define HPI_HIF_ADAPTER_INFO_EXTRACT_HWVERSION_MAJOR(adapterinfo) \
((adapterinfo >> 8) & 0xff)
#define HPI_HIF_ADAPTER_INFO_EXTRACT_HWVERSION_MINOR(adapterinfo) \
(adapterinfo & 0xff)
#define HPI_HIF_IDLE            0
#define HPI_HIF_SEND_MSG        1
#define HPI_HIF_GET_RESP        2
#define HPI_HIF_DATA_MASK       0x10
#define HPI_HIF_SEND_DATA       0x13
#define HPI_HIF_GET_DATA        0x14
#define HPI_HIF_SEND_DONE       5
#define HPI_HIF_RESET           9
