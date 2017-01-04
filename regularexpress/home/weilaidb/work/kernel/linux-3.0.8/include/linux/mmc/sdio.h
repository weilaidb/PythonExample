#define MMC_SDIO_H
#define SD_IO_SEND_OP_COND          5
#define SD_IO_RW_DIRECT            52
#define SD_IO_RW_EXTENDED          53
#define R4_MEMORY_PRESENT (1 << 27)
#define R5_COM_CRC_ERROR	(1 << 15)
#define R5_ILLEGAL_COMMAND	(1 << 14)
#define R5_ERROR		(1 << 11)
#define R5_FUNCTION_NUMBER	(1 << 9)
#define R5_OUT_OF_RANGE		(1 << 8)
#define R5_STATUS(x)		(x & 0xCB00)
#define R5_IO_CURRENT_STATE(x)	((x & 0x3000) >> 12)
#define SDIO_CCCR_CCCR		0x00
#define  SDIO_CCCR_REV_1_00	0
#define  SDIO_CCCR_REV_1_10	1
#define  SDIO_CCCR_REV_1_20	2
#define  SDIO_SDIO_REV_1_00	0
#define  SDIO_SDIO_REV_1_10	1
#define  SDIO_SDIO_REV_1_20	2
#define  SDIO_SDIO_REV_2_00	3
#define SDIO_CCCR_SD		0x01
#define  SDIO_SD_REV_1_01	0
#define  SDIO_SD_REV_1_10	1
#define  SDIO_SD_REV_2_00	2
#define SDIO_CCCR_IOEx		0x02
#define SDIO_CCCR_IORx		0x03
#define SDIO_CCCR_IENx		0x04
#define SDIO_CCCR_INTx		0x05
#define SDIO_CCCR_ABORT		0x06
#define SDIO_CCCR_IF		0x07
#define  SDIO_BUS_WIDTH_1BIT	0x00
#define  SDIO_BUS_WIDTH_4BIT	0x02
#define  SDIO_BUS_ECSI		0x20
#define  SDIO_BUS_SCSI		0x40
#define  SDIO_BUS_ASYNC_INT	0x20
#define  SDIO_BUS_CD_DISABLE     0x80
#define SDIO_CCCR_CAPS		0x08
#define  SDIO_CCCR_CAP_SDC	0x01
#define  SDIO_CCCR_CAP_SMB	0x02
#define  SDIO_CCCR_CAP_SRW	0x04
#define  SDIO_CCCR_CAP_SBS	0x08
#define  SDIO_CCCR_CAP_S4MI	0x10
#define  SDIO_CCCR_CAP_E4MI	0x20
#define  SDIO_CCCR_CAP_LSC	0x40
#define  SDIO_CCCR_CAP_4BLS	0x80
#define SDIO_CCCR_CIS		0x09
#define SDIO_CCCR_SUSPEND	0x0c
#define SDIO_CCCR_SELx		0x0d
#define SDIO_CCCR_EXECx		0x0e
#define SDIO_CCCR_READYx	0x0f
#define SDIO_CCCR_BLKSIZE	0x10
#define SDIO_CCCR_POWER		0x12
#define  SDIO_POWER_SMPC	0x01
#define  SDIO_POWER_EMPC	0x02
#define SDIO_CCCR_SPEED		0x13
#define  SDIO_SPEED_SHS		0x01
#define  SDIO_SPEED_EHS		0x02
#define SDIO_FBR_BASE(f)	((f) * 0x100)
#define SDIO_FBR_STD_IF		0x00
#define  SDIO_FBR_SUPPORTS_CSA	0x40
#define  SDIO_FBR_ENABLE_CSA	0x80
#define SDIO_FBR_STD_IF_EXT	0x01
#define SDIO_FBR_POWER		0x02
#define  SDIO_FBR_POWER_SPS	0x01
#define  SDIO_FBR_POWER_EPS	0x02
#define SDIO_FBR_CIS		0x09
#define SDIO_FBR_CSA		0x0C
#define SDIO_FBR_CSA_DATA	0x0F
#define SDIO_FBR_BLKSIZE	0x10
