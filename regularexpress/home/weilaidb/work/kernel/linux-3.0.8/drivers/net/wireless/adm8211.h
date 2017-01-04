#define ADM8211_H
#define ADM8211_SIG1		0x82011317
#define ADM8211_SIG2		0x82111317
#define ADM8211_CSR_READ(r) ioread32(&priv->map->r)
#define ADM8211_CSR_WRITE(r, val) iowrite32((val), &priv->map->r)
struct adm8211_csr  __packed;
#define ADM8211_PAR_MWIE	(1 << 24)
#define ADM8211_PAR_MRLE	(1 << 23)
#define ADM8211_PAR_MRME	(1 << 21)
#define ADM8211_PAR_RAP		((1 << 18) | (1 << 17))
#define ADM8211_PAR_CAL		((1 << 15) | (1 << 14))
#define ADM8211_PAR_PBL		0x00003f00
#define ADM8211_PAR_BLE		(1 << 7)
#define ADM8211_PAR_DSL		0x0000007c
#define ADM8211_PAR_BAR		(1 << 1)
#define ADM8211_PAR_SWR		(1 << 0)
#define ADM8211_FRCTL_PWRMGT	(1 << 31)
#define ADM8211_FRCTL_MAXPSP	(1 << 27)
#define ADM8211_FRCTL_DRVPRSP	(1 << 26)
#define ADM8211_FRCTL_DRVBCON	(1 << 25)
#define ADM8211_FRCTL_AID	0x0000ffff
#define ADM8211_FRCTL_AID_ON	0x0000c000
#define ADM8211_STSR_PCF	(1 << 31)
#define ADM8211_STSR_BCNTC	(1 << 30)
#define ADM8211_STSR_GPINT	(1 << 29)
#define ADM8211_STSR_LinkOff	(1 << 28)
#define ADM8211_STSR_ATIMTC	(1 << 27)
#define ADM8211_STSR_TSFTF	(1 << 26)
#define ADM8211_STSR_TSCZ	(1 << 25)
#define ADM8211_STSR_LinkOn	(1 << 24)
#define ADM8211_STSR_SQL	(1 << 23)
#define ADM8211_STSR_WEPTD	(1 << 22)
#define ADM8211_STSR_ATIME	(1 << 21)
#define ADM8211_STSR_TBTT	(1 << 20)
#define ADM8211_STSR_NISS	(1 << 16)
#define ADM8211_STSR_AISS	(1 << 15)
#define ADM8211_STSR_TEIS	(1 << 14)
#define ADM8211_STSR_FBE	(1 << 13)
#define ADM8211_STSR_REIS	(1 << 12)
#define ADM8211_STSR_GPTT	(1 << 11)
#define ADM8211_STSR_RPS	(1 << 8)
#define ADM8211_STSR_RDU	(1 << 7)
#define ADM8211_STSR_RCI	(1 << 6)
#define ADM8211_STSR_TUF	(1 << 5)
#define ADM8211_STSR_TRT	(1 << 4)
#define ADM8211_STSR_TLT	(1 << 3)
#define ADM8211_STSR_TDU	(1 << 2)
#define ADM8211_STSR_TPS	(1 << 1)
#define ADM8211_STSR_TCI	(1 << 0)
#define ADM8211_NAR_TXCF	(1 << 31)
#define ADM8211_NAR_HF		(1 << 30)
#define ADM8211_NAR_UTR		(1 << 29)
#define ADM8211_NAR_SQ		(1 << 28)
#define ADM8211_NAR_CFP		(1 << 27)
#define ADM8211_NAR_SF		(1 << 21)
#define ADM8211_NAR_TR		((1 << 15) | (1 << 14))
#define ADM8211_NAR_ST		(1 << 13)
#define ADM8211_NAR_OM		((1 << 11) | (1 << 10))
#define ADM8211_NAR_MM		(1 << 7)
#define ADM8211_NAR_PR		(1 << 6)
#define ADM8211_NAR_EA		(1 << 5)
#define ADM8211_NAR_PB		(1 << 3)
#define ADM8211_NAR_STPDMA	(1 << 2)
#define ADM8211_NAR_SR		(1 << 1)
#define ADM8211_NAR_CTX		(1 << 0)
#define ADM8211_IDLE() 							   \
do  while (0)
#define ADM8211_IDLE_RX() 						\
do  while (0)
#define ADM8211_RESTORE()					\
do  while (0)
#define ADM8211_IER_PCFIE	(1 << 31)
#define ADM8211_IER_BCNTCIE	(1 << 30)
#define ADM8211_IER_GPIE	(1 << 29)
#define ADM8211_IER_LinkOffIE	(1 << 28)
#define ADM8211_IER_ATIMTCIE	(1 << 27)
#define ADM8211_IER_TSFTFIE	(1 << 26)
#define ADM8211_IER_TSCZE	(1 << 25)
#define ADM8211_IER_LinkOnIE	(1 << 24)
#define ADM8211_IER_SQLIE	(1 << 23)
#define ADM8211_IER_WEPIE	(1 << 22)
#define ADM8211_IER_ATIMEIE	(1 << 21)
#define ADM8211_IER_TBTTIE	(1 << 20)
#define ADM8211_IER_NIE		(1 << 16)
#define ADM8211_IER_AIE		(1 << 15)
#define ADM8211_IER_TEIE	(1 << 14)
#define ADM8211_IER_FBEIE	(1 << 13)
#define ADM8211_IER_REIE	(1 << 12)
#define ADM8211_IER_GPTIE	(1 << 11)
#define ADM8211_IER_RSIE	(1 << 8)
#define ADM8211_IER_RUIE	(1 << 7)
#define ADM8211_IER_RCIE	(1 << 6)
#define ADM8211_IER_TUIE	(1 << 5)
#define ADM8211_IER_TRTIE	(1 << 4)
#define ADM8211_IER_TLTTIE	(1 << 3)
#define ADM8211_IER_TDUIE	(1 << 2)
#define ADM8211_IER_TPSIE	(1 << 1)
#define ADM8211_IER_TCIE	(1 << 0)
#define ADM8211_SPR_SRS		(1 << 11)
#define ADM8211_SPR_SDO		(1 << 3)
#define ADM8211_SPR_SDI		(1 << 2)
#define ADM8211_SPR_SCLK	(1 << 1)
#define ADM8211_SPR_SCS		(1 << 0)
#define ADM8211_CSR_TEST0_EPNE	(1 << 18)
#define ADM8211_CSR_TEST0_EPSNM	(1 << 17)
#define ADM8211_CSR_TEST0_EPTYP	(1 << 16)
#define ADM8211_CSR_TEST0_EPRLD	(1 << 15)
#define ADM8211_WCSR_CRCT	(1 << 30)
#define ADM8211_WCSR_TSFTWE	(1 << 20)
#define ADM8211_WCSR_TIMWE	(1 << 19)
#define ADM8211_WCSR_ATIMWE	(1 << 18)
#define ADM8211_WCSR_KEYWE	(1 << 17)
#define ADM8211_WCSR_MPRE	(1 << 9)
#define ADM8211_WCSR_LSOE	(1 << 8)
#define ADM8211_WCSR_KEYUP	(1 << 6)
#define ADM8211_WCSR_TSFTW	(1 << 5)
#define ADM8211_WCSR_TIMW	(1 << 4)
#define ADM8211_WCSR_ATIMW	(1 << 3)
#define ADM8211_WCSR_MPR	(1 << 1)
#define ADM8211_WCSR_LSO	(1 << 0)
#define ADM8211_CSR_GPIO_EN5	(1 << 17)
#define ADM8211_CSR_GPIO_EN4	(1 << 16)
#define ADM8211_CSR_GPIO_EN3	(1 << 15)
#define ADM8211_CSR_GPIO_EN2	(1 << 14)
#define ADM8211_CSR_GPIO_EN1	(1 << 13)
#define ADM8211_CSR_GPIO_EN0	(1 << 12)
#define ADM8211_CSR_GPIO_O5	(1 << 11)
#define ADM8211_CSR_GPIO_O4	(1 << 10)
#define ADM8211_CSR_GPIO_O3	(1 << 9)
#define ADM8211_CSR_GPIO_O2	(1 << 8)
#define ADM8211_CSR_GPIO_O1	(1 << 7)
#define ADM8211_CSR_GPIO_O0	(1 << 6)
#define ADM8211_CSR_GPIO_IN	0x0000003f
#define ADM8211_BBPCTL_MMISEL	(1 << 31)
#define ADM8211_BBPCTL_SPICADD  (0x7F << 24)
#define ADM8211_BBPCTL_RF3000	(0x20 << 24)
#define ADM8211_BBPCTL_TXCE	(1 << 23)
#define ADM8211_BBPCTL_RXCE	(1 << 22)
#define ADM8211_BBPCTL_CCAP	(1 << 21)
#define ADM8211_BBPCTL_TYPE	0x001c0000
#define ADM8211_BBPCTL_WR	(1 << 17)
#define ADM8211_BBPCTL_RD	(1 << 16)
#define ADM8211_BBPCTL_ADDR	0x0000ff00
#define ADM8211_BBPCTL_DATA	0x000000ff
#define ADM8211_SYNCTL_WR	(1 << 31)
#define ADM8211_SYNCTL_RD	(1 << 30)
#define ADM8211_SYNCTL_CS0	(1 << 29)
#define ADM8211_SYNCTL_CS1	(1 << 28)
#define ADM8211_SYNCTL_CAL	(1 << 27)
#define ADM8211_SYNCTL_SELCAL	(1 << 26)
#define ADM8211_SYNCTL_RFtype	((1 << 24) | (1 << 23) | (1 << 22))
#define ADM8211_SYNCTL_RFMD	(1 << 22)
#define ADM8211_SYNCTL_GENERAL	(0x7 << 22)
#define ADM8211_CMDR_PM		(1 << 19)
#define ADM8211_CMDR_APM	(1 << 18)
#define ADM8211_CMDR_RTE	(1 << 4)
#define ADM8211_CMDR_DRT	((1 << 3) | (1 << 2))
#define ADM8211_CMDR_DRT_8DW	(0x0 << 2)
#define ADM8211_CMDR_DRT_16DW	(0x1 << 2)
#define ADM8211_CMDR_DRT_SF	(0x2 << 2)
#define ADM8211_SYNRF_SELSYN	(1 << 31)
#define ADM8211_SYNRF_SELRF	(1 << 30)
#define ADM8211_SYNRF_LERF	(1 << 29)
#define ADM8211_SYNRF_LEIF	(1 << 28)
#define ADM8211_SYNRF_SYNCLK	(1 << 27)
#define ADM8211_SYNRF_SYNDATA	(1 << 26)
#define ADM8211_SYNRF_PE1	(1 << 25)
#define ADM8211_SYNRF_PE2	(1 << 24)
#define ADM8211_SYNRF_PA_PE	(1 << 23)
#define ADM8211_SYNRF_TR_SW	(1 << 22)
#define ADM8211_SYNRF_TR_SWN	(1 << 21)
#define ADM8211_SYNRF_RADIO	(1 << 20)
#define ADM8211_SYNRF_CAL_EN	(1 << 19)
#define ADM8211_SYNRF_PHYRST	(1 << 18)
#define ADM8211_SYNRF_IF_SELECT_0 	(1 << 31)
#define ADM8211_SYNRF_IF_SELECT_1 	((1 << 31) | (1 << 28))
#define ADM8211_SYNRF_WRITE_SYNDATA_0	(1 << 31)
#define ADM8211_SYNRF_WRITE_SYNDATA_1	((1 << 31) | (1 << 26))
#define ADM8211_SYNRF_WRITE_CLOCK_0	(1 << 31)
#define ADM8211_SYNRF_WRITE_CLOCK_1	((1 << 31) | (1 << 27))
#define ADM8211_WEPCTL_WEPENABLE   (1 << 31)
#define ADM8211_WEPCTL_WPAENABLE   (1 << 30)
#define ADM8211_WEPCTL_CURRENT_TABLE (1 << 29)
#define ADM8211_WEPCTL_TABLE_WR	(1 << 28)
#define ADM8211_WEPCTL_TABLE_RD	(1 << 27)
#define ADM8211_WEPCTL_WEPRXBYP	(1 << 25)
#define ADM8211_WEPCTL_SEL_WEPTABLE (1 << 23)
#define ADM8211_WEPCTL_ADDR	(0x000001ff)
#define ADM8211_WESK_DATA	(0x0000ffff)
#define ADM8211_FER_INTR_EV_ENT	(1 << 15)
#define SI4126_MAIN_CONF	0
#define SI4126_PHASE_DET_GAIN	1
#define SI4126_POWERDOWN	2
#define SI4126_RF1_N_DIV	3
#define SI4126_RF2_N_DIV	4
#define SI4126_IF_N_DIV		5
#define SI4126_RF1_R_DIV	6
#define SI4126_RF2_R_DIV	7
#define SI4126_IF_R_DIV		8
#define SI4126_MAIN_XINDIV2	(1 << 6)
#define SI4126_MAIN_IFDIV	((1 << 11) | (1 << 10))
#define SI4126_POWERDOWN_PDIB	(1 << 1)
#define SI4126_POWERDOWN_PDRB	(1 << 0)
#define RF3000_MODEM_CTRL__RX_STATUS 0x01
#define RF3000_CCA_CTRL 0x02
#define RF3000_DIVERSITY__RSSI 0x03
#define RF3000_RX_SIGNAL_FIELD 0x04
#define RF3000_RX_LEN_MSB 0x05
#define RF3000_RX_LEN_LSB 0x06
#define RF3000_RX_SERVICE_FIELD 0x07
#define RF3000_TX_VAR_GAIN__TX_LEN_EXT 0x11
#define RF3000_TX_LEN_MSB 0x12
#define RF3000_TX_LEN_LSB 0x13
#define RF3000_LOW_GAIN_CALIB 0x14
#define RF3000_HIGH_GAIN_CALIB 0x15
#define ADM8211_REV_AB 0x11
#define ADM8211_REV_AF 0x15
#define ADM8211_REV_BA 0x20
#define ADM8211_REV_CA 0x30
struct adm8211_desc ;
#define RDES0_STATUS_OWN	(1 << 31)
#define RDES0_STATUS_ES		(1 << 30)
#define RDES0_STATUS_SQL	(1 << 29)
#define RDES0_STATUS_DE		(1 << 28)
#define RDES0_STATUS_FS		(1 << 27)
#define RDES0_STATUS_LS		(1 << 26)
#define RDES0_STATUS_PCF	(1 << 25)
#define RDES0_STATUS_SFDE	(1 << 24)
#define RDES0_STATUS_SIGE	(1 << 23)
#define RDES0_STATUS_CRC16E	(1 << 22)
#define RDES0_STATUS_RXTOE	(1 << 21)
#define RDES0_STATUS_CRC32E	(1 << 20)
#define RDES0_STATUS_ICVE	(1 << 19)
#define RDES0_STATUS_DA1	(1 << 17)
#define RDES0_STATUS_DA0	(1 << 16)
#define RDES0_STATUS_RXDR	((1 << 15) | (1 << 14) | (1 << 13) | (1 << 12))
#define RDES0_STATUS_FL		(0x00000fff)
#define RDES1_CONTROL_RER	(1 << 25)
#define RDES1_CONTROL_RCH	(1 << 24)
#define RDES1_CONTROL_RBS2	(0x00fff000)
#define RDES1_CONTROL_RBS1	(0x00000fff)
#define RDES1_STATUS_RSSI	(0x0000007f)
#define TDES0_CONTROL_OWN	(1 << 31)
#define TDES0_CONTROL_DONE	(1 << 30)
#define TDES0_CONTROL_TXDR	(0x0ff00000)
#define TDES0_STATUS_OWN	(1 << 31)
#define TDES0_STATUS_DONE	(1 << 30)
#define TDES0_STATUS_ES		(1 << 29)
#define TDES0_STATUS_TLT	(1 << 28)
#define TDES0_STATUS_TRT	(1 << 27)
#define TDES0_STATUS_TUF	(1 << 26)
#define TDES0_STATUS_TRO	(1 << 25)
#define TDES0_STATUS_SOFBR	(1 << 24)
#define TDES0_STATUS_ACR	(0x00000fff)
#define TDES1_CONTROL_IC	(1 << 31)
#define TDES1_CONTROL_LS	(1 << 30)
#define TDES1_CONTROL_FS	(1 << 29)
#define TDES1_CONTROL_TER	(1 << 25)
#define TDES1_CONTROL_TCH	(1 << 24)
#define TDES1_CONTROL_RBS2	(0x00fff000)
#define TDES1_CONTROL_RBS1	(0x00000fff)
#define ADM8211_SRAM(x) (priv->pdev->revision < ADM8211_REV_BA ? \
ADM8211_SRAM_A_ ## x : ADM8211_SRAM_B_ ## x)
#define ADM8211_SRAM_INDIV_KEY   0x0000
#define ADM8211_SRAM_A_SHARE_KEY 0x0160
#define ADM8211_SRAM_B_SHARE_KEY 0x00c0
#define ADM8211_SRAM_A_SSID      0x0180
#define ADM8211_SRAM_B_SSID      0x00d4
#define ADM8211_SRAM_SSID ADM8211_SRAM(SSID)
#define ADM8211_SRAM_A_SUPP_RATE 0x0191
#define ADM8211_SRAM_B_SUPP_RATE 0x00dd
#define ADM8211_SRAM_SUPP_RATE ADM8211_SRAM(SUPP_RATE)
#define ADM8211_SRAM_A_SIZE      0x0200
#define ADM8211_SRAM_B_SIZE      0x01c0
#define ADM8211_SRAM_SIZE ADM8211_SRAM(SIZE)
struct adm8211_rx_ring_info ;
struct adm8211_tx_ring_info ;
#define PLCP_SIGNAL_1M		0x0a
#define PLCP_SIGNAL_2M		0x14
#define PLCP_SIGNAL_5M5		0x37
#define PLCP_SIGNAL_11M		0x6e
struct adm8211_tx_hdr  __packed;
#define RX_COPY_BREAK 128
#define RX_PKT_SIZE 2500
struct adm8211_eeprom  __packed;
struct adm8211_priv ;
struct ieee80211_chan_range ;
static const struct ieee80211_chan_range cranges[] = ;
