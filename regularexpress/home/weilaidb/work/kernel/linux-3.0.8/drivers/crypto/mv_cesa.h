#define DIGEST_INITIAL_VAL_A	0xdd00
#define DIGEST_INITIAL_VAL_B	0xdd04
#define DIGEST_INITIAL_VAL_C	0xdd08
#define DIGEST_INITIAL_VAL_D	0xdd0c
#define DIGEST_INITIAL_VAL_E	0xdd10
#define DES_CMD_REG		0xdd58
#define SEC_ACCEL_CMD		0xde00
#define SEC_CMD_EN_SEC_ACCL0	(1 << 0)
#define SEC_CMD_EN_SEC_ACCL1	(1 << 1)
#define SEC_CMD_DISABLE_SEC	(1 << 2)
#define SEC_ACCEL_DESC_P0	0xde04
#define SEC_DESC_P0_PTR(x)	(x)
#define SEC_ACCEL_DESC_P1	0xde14
#define SEC_DESC_P1_PTR(x)	(x)
#define SEC_ACCEL_CFG		0xde08
#define SEC_CFG_STOP_DIG_ERR	(1 << 0)
#define SEC_CFG_CH0_W_IDMA	(1 << 7)
#define SEC_CFG_CH1_W_IDMA	(1 << 8)
#define SEC_CFG_ACT_CH0_IDMA	(1 << 9)
#define SEC_CFG_ACT_CH1_IDMA	(1 << 10)
#define SEC_ACCEL_STATUS	0xde0c
#define SEC_ST_ACT_0		(1 << 0)
#define SEC_ST_ACT_1		(1 << 1)
#define FPGA_INT_STATUS		0xdd68
#define SEC_ACCEL_INT_STATUS	0xde20
#define SEC_INT_AUTH_DONE	(1 << 0)
#define SEC_INT_DES_E_DONE	(1 << 1)
#define SEC_INT_AES_E_DONE	(1 << 2)
#define SEC_INT_AES_D_DONE	(1 << 3)
#define SEC_INT_ENC_DONE	(1 << 4)
#define SEC_INT_ACCEL0_DONE	(1 << 5)
#define SEC_INT_ACCEL1_DONE	(1 << 6)
#define SEC_INT_ACC0_IDMA_DONE	(1 << 7)
#define SEC_INT_ACC1_IDMA_DONE	(1 << 8)
#define SEC_ACCEL_INT_MASK	0xde24
#define AES_KEY_LEN	(8 * 4)
struct sec_accel_config __attribute__ ((packed));
#define SRAM_CONFIG		0x00
#define SRAM_DATA_KEY_P		0x20
#define SRAM_DATA_IV		0x40
#define SRAM_DATA_IV_BUF	0x40
#define SRAM_DATA_IN_START	0x80
#define SRAM_DATA_OUT_START	0x80
#define SRAM_HMAC_IV_IN		0x20
#define SRAM_HMAC_IV_OUT	0x34
#define SRAM_DIGEST_BUF		0x48
#define SRAM_CFG_SPACE		0x80
