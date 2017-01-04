#define SDIO_HEADER_LEN			4
#define SDIO_BLOCK_SIZE			64
#define FIRMWARE_TRANSFER_NBLOCK	2
#define FW_EXTRA_LEN			36
#define MRVDRV_SIZE_OF_CMD_BUFFER       (2 * 1024)
#define MRVDRV_BT_RX_PACKET_BUFFER_SIZE \
(HCI_MAX_FRAME_SIZE + FW_EXTRA_LEN)
#define ALLOC_BUF_SIZE	(((max_t (int, MRVDRV_BT_RX_PACKET_BUFFER_SIZE, \
MRVDRV_SIZE_OF_CMD_BUFFER) + SDIO_HEADER_LEN \
+ SDIO_BLOCK_SIZE - 1) / SDIO_BLOCK_SIZE) \
* SDIO_BLOCK_SIZE)
#define MAX_POLL_TRIES			100
#define MAX_WRITE_IOMEM_RETRY		2
#define HOST_POWER_UP				BIT(1)
#define HOST_CMD53_FIN				BIT(2)
#define HIM_DISABLE				0xff
#define HIM_ENABLE				(BIT(0) | BIT(1))
#define UP_LD_HOST_INT_STATUS			BIT(0)
#define DN_LD_HOST_INT_STATUS			BIT(1)
#define DN_LD_CARD_RDY				BIT(0)
#define CARD_IO_READY				BIT(3)
#define FIRMWARE_READY				0xfedc
struct btmrvl_sdio_card_reg ;
struct btmrvl_sdio_card ;
struct btmrvl_sdio_device ;
#define BTSDIO_DMA_ALIGN		8
#define ALIGN_SZ(p, a)	\
(((p) + ((a) - 1)) & ~((a) - 1))
#define ALIGN_ADDR(p, a)	\
((((unsigned long)(p)) + (((unsigned long)(a)) - 1)) & \
~(((unsigned long)(a)) - 1))
