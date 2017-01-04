#define _ASM_POWERPC_QE_H
#define QE_NUM_OF_SNUM	256
#define QE_NUM_OF_BRGS	16
#define QE_NUM_OF_PORTS	1024
#define MEM_PART_SYSTEM		0
#define MEM_PART_SECONDARY	1
#define MEM_PART_MURAM		2
enum qe_clock ;
static inline bool qe_clock_is_brg(enum qe_clock clk)
extern spinlock_t cmxgcr_lock;
extern void qe_reset(void);
static inline void qe_reset(void)
#define QE_PIO_PINS 32
struct qe_pio_regs ;
#define QE_PIO_DIR_IN	2
#define QE_PIO_DIR_OUT	1
extern void __par_io_config_pin(struct qe_pio_regs __iomem *par_io, u8 pin,
int dir, int open_drain, int assignment,
int has_irq);
extern int par_io_init(struct device_node *np);
extern int par_io_of_config(struct device_node *np);
extern int par_io_config_pin(u8 port, u8 pin, int dir, int open_drain,
int assignment, int has_irq);
extern int par_io_data_set(u8 port, u8 pin, u8 val);
static inline int par_io_init(struct device_node *np)
static inline int par_io_of_config(struct device_node *np)
static inline int par_io_config_pin(u8 port, u8 pin, int dir, int open_drain,
int assignment, int has_irq)
static inline int par_io_data_set(u8 port, u8 pin, u8 val)
struct qe_pin;
extern struct qe_pin *qe_pin_request(struct device_node *np, int index);
extern void qe_pin_free(struct qe_pin *qe_pin);
extern void qe_pin_set_gpio(struct qe_pin *qe_pin);
extern void qe_pin_set_dedicated(struct qe_pin *pin);
static inline struct qe_pin *qe_pin_request(struct device_node *np, int index)
static inline void qe_pin_free(struct qe_pin *qe_pin)
static inline void qe_pin_set_gpio(struct qe_pin *qe_pin)
static inline void qe_pin_set_dedicated(struct qe_pin *pin)
int qe_issue_cmd(u32 cmd, u32 device, u8 mcn_protocol, u32 cmd_input);
static inline int qe_issue_cmd(u32 cmd, u32 device, u8 mcn_protocol,
u32 cmd_input)
enum qe_clock qe_clock_source(const char *source);
unsigned int qe_get_brg_clk(void);
int qe_setbrg(enum qe_clock brg, unsigned int rate, unsigned int multiplier);
int qe_get_snum(void);
void qe_put_snum(u8 snum);
unsigned int qe_get_num_of_risc(void);
unsigned int qe_get_num_of_snums(void);
static inline int qe_alive_during_sleep(void)
#define qe_muram_init cpm_muram_init
#define qe_muram_alloc cpm_muram_alloc
#define qe_muram_alloc_fixed cpm_muram_alloc_fixed
#define qe_muram_free cpm_muram_free
#define qe_muram_addr cpm_muram_addr
#define qe_muram_offset cpm_muram_offset
struct qe_firmware  __attribute__ ((packed));
struct qe_firmware_info ;
int qe_upload_firmware(const struct qe_firmware *firmware);
static inline int qe_upload_firmware(const struct qe_firmware *firmware)
struct qe_firmware_info *qe_get_firmware_info(void);
int qe_usb_clock_set(enum qe_clock clk, int rate);
struct qe_bd  __attribute__ ((packed));
#define BD_STATUS_MASK	0xffff0000
#define BD_LENGTH_MASK	0x0000ffff
#define QE_INTR_TABLE_ALIGN	16
#define QE_ALIGNMENT_OF_BD	8
#define QE_ALIGNMENT_OF_PRAM	64
#define QE_RISC_ALLOCATION_RISC1	0x1
#define QE_RISC_ALLOCATION_RISC2	0x2
#define QE_RISC_ALLOCATION_RISC3	0x4
#define QE_RISC_ALLOCATION_RISC4	0x8
#define QE_RISC_ALLOCATION_RISC1_AND_RISC2	(QE_RISC_ALLOCATION_RISC1 | \
QE_RISC_ALLOCATION_RISC2)
#define QE_RISC_ALLOCATION_FOUR_RISCS	(QE_RISC_ALLOCATION_RISC1 | \
QE_RISC_ALLOCATION_RISC2 | \
QE_RISC_ALLOCATION_RISC3 | \
QE_RISC_ALLOCATION_RISC4)
enum qe_fltr_tbl_lookup_key_size ;
enum qe_fltr_largest_external_tbl_lookup_key_size ;
struct qe_timer_tables  __attribute__ ((packed));
#define QE_FLTR_TAD_SIZE	8
struct qe_fltr_tad  __attribute__ ((packed));
enum comm_dir ;
#define QE_CMXUCR_MII_ENET_MNG		0x00007000
#define QE_CMXUCR_MII_ENET_MNG_SHIFT	12
#define QE_CMXUCR_GRANT			0x00008000
#define QE_CMXUCR_TSA			0x00004000
#define QE_CMXUCR_BKPT			0x00000100
#define QE_CMXUCR_TX_CLK_SRC_MASK	0x0000000F
#define QE_CMXGCR_MII_ENET_MNG		0x00007000
#define QE_CMXGCR_MII_ENET_MNG_SHIFT	12
#define QE_CMXGCR_USBCS			0x0000000f
#define QE_CMXGCR_USBCS_CLK3		0x1
#define QE_CMXGCR_USBCS_CLK5		0x2
#define QE_CMXGCR_USBCS_CLK7		0x3
#define QE_CMXGCR_USBCS_CLK9		0x4
#define QE_CMXGCR_USBCS_CLK13		0x5
#define QE_CMXGCR_USBCS_CLK17		0x6
#define QE_CMXGCR_USBCS_CLK19		0x7
#define QE_CMXGCR_USBCS_CLK21		0x8
#define QE_CMXGCR_USBCS_BRG9		0x9
#define QE_CMXGCR_USBCS_BRG10		0xa
#define QE_CR_FLG			0x00010000
#define QE_RESET			0x80000000
#define QE_INIT_TX_RX			0x00000000
#define QE_INIT_RX			0x00000001
#define QE_INIT_TX			0x00000002
#define QE_ENTER_HUNT_MODE		0x00000003
#define QE_STOP_TX			0x00000004
#define QE_GRACEFUL_STOP_TX		0x00000005
#define QE_RESTART_TX			0x00000006
#define QE_CLOSE_RX_BD			0x00000007
#define QE_SWITCH_COMMAND		0x00000007
#define QE_SET_GROUP_ADDRESS		0x00000008
#define QE_START_IDMA			0x00000009
#define QE_MCC_STOP_RX			0x00000009
#define QE_ATM_TRANSMIT			0x0000000a
#define QE_HPAC_CLEAR_ALL		0x0000000b
#define QE_GRACEFUL_STOP_RX		0x0000001a
#define QE_RESTART_RX			0x0000001b
#define QE_HPAC_SET_PRIORITY		0x0000010b
#define QE_HPAC_STOP_TX			0x0000020b
#define QE_HPAC_STOP_RX			0x0000030b
#define QE_HPAC_GRACEFUL_STOP_TX	0x0000040b
#define QE_HPAC_GRACEFUL_STOP_RX	0x0000050b
#define QE_HPAC_START_TX		0x0000060b
#define QE_HPAC_START_RX		0x0000070b
#define QE_USB_STOP_TX			0x0000000a
#define QE_USB_RESTART_TX		0x0000000c
#define QE_QMC_STOP_TX			0x0000000c
#define QE_QMC_STOP_RX			0x0000000d
#define QE_SS7_SU_FIL_RESET		0x0000000e
#define QE_RESET_BCS			0x0000000a
#define QE_MCC_INIT_TX_RX_16		0x00000003
#define QE_MCC_STOP_TX			0x00000004
#define QE_MCC_INIT_TX_1		0x00000005
#define QE_MCC_INIT_RX_1		0x00000006
#define QE_MCC_RESET			0x00000007
#define QE_SET_TIMER			0x00000008
#define QE_RANDOM_NUMBER		0x0000000c
#define QE_ATM_MULTI_THREAD_INIT	0x00000011
#define QE_ASSIGN_PAGE			0x00000012
#define QE_ADD_REMOVE_HASH_ENTRY	0x00000013
#define QE_START_FLOW_CONTROL		0x00000014
#define QE_STOP_FLOW_CONTROL		0x00000015
#define QE_ASSIGN_PAGE_TO_DEVICE	0x00000016
#define QE_ASSIGN_RISC			0x00000010
#define QE_CR_MCN_NORMAL_SHIFT		6
#define QE_CR_MCN_USB_SHIFT		4
#define QE_CR_MCN_RISC_ASSIGN_SHIFT	8
#define QE_CR_SNUM_SHIFT		17
#define QE_CR_SUBBLOCK_INVALID		0x00000000
#define QE_CR_SUBBLOCK_USB		0x03200000
#define QE_CR_SUBBLOCK_UCCFAST1		0x02000000
#define QE_CR_SUBBLOCK_UCCFAST2		0x02200000
#define QE_CR_SUBBLOCK_UCCFAST3		0x02400000
#define QE_CR_SUBBLOCK_UCCFAST4		0x02600000
#define QE_CR_SUBBLOCK_UCCFAST5		0x02800000
#define QE_CR_SUBBLOCK_UCCFAST6		0x02a00000
#define QE_CR_SUBBLOCK_UCCFAST7		0x02c00000
#define QE_CR_SUBBLOCK_UCCFAST8		0x02e00000
#define QE_CR_SUBBLOCK_UCCSLOW1		0x00000000
#define QE_CR_SUBBLOCK_UCCSLOW2		0x00200000
#define QE_CR_SUBBLOCK_UCCSLOW3		0x00400000
#define QE_CR_SUBBLOCK_UCCSLOW4		0x00600000
#define QE_CR_SUBBLOCK_UCCSLOW5		0x00800000
#define QE_CR_SUBBLOCK_UCCSLOW6		0x00a00000
#define QE_CR_SUBBLOCK_UCCSLOW7		0x00c00000
#define QE_CR_SUBBLOCK_UCCSLOW8		0x00e00000
#define QE_CR_SUBBLOCK_MCC1		0x03800000
#define QE_CR_SUBBLOCK_MCC2		0x03a00000
#define QE_CR_SUBBLOCK_MCC3		0x03000000
#define QE_CR_SUBBLOCK_IDMA1		0x02800000
#define QE_CR_SUBBLOCK_IDMA2		0x02a00000
#define QE_CR_SUBBLOCK_IDMA3		0x02c00000
#define QE_CR_SUBBLOCK_IDMA4		0x02e00000
#define QE_CR_SUBBLOCK_HPAC		0x01e00000
#define QE_CR_SUBBLOCK_SPI1		0x01400000
#define QE_CR_SUBBLOCK_SPI2		0x01600000
#define QE_CR_SUBBLOCK_RAND		0x01c00000
#define QE_CR_SUBBLOCK_TIMER		0x01e00000
#define QE_CR_SUBBLOCK_GENERAL		0x03c00000
#define QE_CR_PROTOCOL_UNSPECIFIED	0x00
#define QE_CR_PROTOCOL_HDLC_TRANSPARENT	0x00
#define QE_CR_PROTOCOL_QMC		0x02
#define QE_CR_PROTOCOL_UART		0x04
#define QE_CR_PROTOCOL_ATM_POS		0x0A
#define QE_CR_PROTOCOL_ETHERNET		0x0C
#define QE_CR_PROTOCOL_L2_SWITCH	0x0D
#define QE_BRGC_ENABLE		0x00010000
#define QE_BRGC_DIVISOR_SHIFT	1
#define QE_BRGC_DIVISOR_MAX	0xFFF
#define QE_BRGC_DIV16		1
#define QE_GTCFR1_PCAS	0x80
#define QE_GTCFR1_STP2	0x20
#define QE_GTCFR1_RST2	0x10
#define QE_GTCFR1_GM2	0x08
#define QE_GTCFR1_GM1	0x04
#define QE_GTCFR1_STP1	0x02
#define QE_GTCFR1_RST1	0x01
#define QE_SDSR_BER1	0x02000000
#define QE_SDSR_BER2	0x01000000
#define QE_SDMR_GLB_1_MSK	0x80000000
#define QE_SDMR_ADR_SEL		0x20000000
#define QE_SDMR_BER1_MSK	0x02000000
#define QE_SDMR_BER2_MSK	0x01000000
#define QE_SDMR_EB1_MSK		0x00800000
#define QE_SDMR_ER1_MSK		0x00080000
#define QE_SDMR_ER2_MSK		0x00040000
#define QE_SDMR_CEN_MASK	0x0000E000
#define QE_SDMR_SBER_1		0x00000200
#define QE_SDMR_SBER_2		0x00000200
#define QE_SDMR_EB1_PR_MASK	0x000000C0
#define QE_SDMR_ER1_PR		0x00000008
#define QE_SDMR_CEN_SHIFT	13
#define QE_SDMR_EB1_PR_SHIFT	6
#define QE_SDTM_MSNUM_SHIFT	24
#define QE_SDEBCR_BA_MASK	0x01FFFFFF
#define QE_CP_CERCR_MEE		0x8000
#define QE_CP_CERCR_IEE		0x4000
#define QE_CP_CERCR_CIR		0x0800
#define QE_IRAM_IADD_AIE	0x80000000
#define QE_IRAM_IADD_BADDR	0x00080000
#define UPGCR_PROTOCOL	0x80000000
#define UPGCR_TMS	0x40000000
#define UPGCR_RMS	0x20000000
#define UPGCR_ADDR	0x10000000
#define UPGCR_DIAG	0x01000000
#define UCC_GUEMR_MODE_MASK_RX	0x02
#define UCC_GUEMR_MODE_FAST_RX	0x02
#define UCC_GUEMR_MODE_SLOW_RX	0x00
#define UCC_GUEMR_MODE_MASK_TX	0x01
#define UCC_GUEMR_MODE_FAST_TX	0x01
#define UCC_GUEMR_MODE_SLOW_TX	0x00
#define UCC_GUEMR_MODE_MASK (UCC_GUEMR_MODE_MASK_RX | UCC_GUEMR_MODE_MASK_TX)
#define UCC_GUEMR_SET_RESERVED3	0x10
struct ucc_slow_pram  __attribute__ ((packed));
#define UCC_SLOW_GUMR_H_SAM_QMC		0x00000000
#define UCC_SLOW_GUMR_H_SAM_SATM	0x00008000
#define UCC_SLOW_GUMR_H_REVD		0x00002000
#define UCC_SLOW_GUMR_H_TRX		0x00001000
#define UCC_SLOW_GUMR_H_TTX		0x00000800
#define UCC_SLOW_GUMR_H_CDP		0x00000400
#define UCC_SLOW_GUMR_H_CTSP		0x00000200
#define UCC_SLOW_GUMR_H_CDS		0x00000100
#define UCC_SLOW_GUMR_H_CTSS		0x00000080
#define UCC_SLOW_GUMR_H_TFL		0x00000040
#define UCC_SLOW_GUMR_H_RFW		0x00000020
#define UCC_SLOW_GUMR_H_TXSY		0x00000010
#define UCC_SLOW_GUMR_H_4SYNC		0x00000004
#define UCC_SLOW_GUMR_H_8SYNC		0x00000008
#define UCC_SLOW_GUMR_H_16SYNC		0x0000000c
#define UCC_SLOW_GUMR_H_RTSM		0x00000002
#define UCC_SLOW_GUMR_H_RSYN		0x00000001
#define UCC_SLOW_GUMR_L_TCI		0x10000000
#define UCC_SLOW_GUMR_L_RINV		0x02000000
#define UCC_SLOW_GUMR_L_TINV		0x01000000
#define UCC_SLOW_GUMR_L_TEND		0x00040000
#define UCC_SLOW_GUMR_L_TDCR_MASK	0x00030000
#define UCC_SLOW_GUMR_L_TDCR_32	        0x00030000
#define UCC_SLOW_GUMR_L_TDCR_16	        0x00020000
#define UCC_SLOW_GUMR_L_TDCR_8	        0x00010000
#define UCC_SLOW_GUMR_L_TDCR_1	        0x00000000
#define UCC_SLOW_GUMR_L_RDCR_MASK	0x0000c000
#define UCC_SLOW_GUMR_L_RDCR_32		0x0000c000
#define UCC_SLOW_GUMR_L_RDCR_16	        0x00008000
#define UCC_SLOW_GUMR_L_RDCR_8	        0x00004000
#define UCC_SLOW_GUMR_L_RDCR_1		0x00000000
#define UCC_SLOW_GUMR_L_RENC_NRZI	0x00000800
#define UCC_SLOW_GUMR_L_RENC_NRZ	0x00000000
#define UCC_SLOW_GUMR_L_TENC_NRZI	0x00000100
#define UCC_SLOW_GUMR_L_TENC_NRZ	0x00000000
#define UCC_SLOW_GUMR_L_DIAG_MASK	0x000000c0
#define UCC_SLOW_GUMR_L_DIAG_LE	        0x000000c0
#define UCC_SLOW_GUMR_L_DIAG_ECHO	0x00000080
#define UCC_SLOW_GUMR_L_DIAG_LOOP	0x00000040
#define UCC_SLOW_GUMR_L_DIAG_NORM	0x00000000
#define UCC_SLOW_GUMR_L_ENR		0x00000020
#define UCC_SLOW_GUMR_L_ENT		0x00000010
#define UCC_SLOW_GUMR_L_MODE_MASK	0x0000000F
#define UCC_SLOW_GUMR_L_MODE_BISYNC	0x00000008
#define UCC_SLOW_GUMR_L_MODE_AHDLC	0x00000006
#define UCC_SLOW_GUMR_L_MODE_UART	0x00000004
#define UCC_SLOW_GUMR_L_MODE_QMC	0x00000002
#define UCC_FAST_GUMR_TCI	0x20000000
#define UCC_FAST_GUMR_TRX	0x10000000
#define UCC_FAST_GUMR_TTX	0x08000000
#define UCC_FAST_GUMR_CDP	0x04000000
#define UCC_FAST_GUMR_CTSP	0x02000000
#define UCC_FAST_GUMR_CDS	0x01000000
#define UCC_FAST_GUMR_CTSS	0x00800000
#define UCC_FAST_GUMR_TXSY	0x00020000
#define UCC_FAST_GUMR_RSYN	0x00010000
#define UCC_FAST_GUMR_RTSM	0x00002000
#define UCC_FAST_GUMR_REVD	0x00000400
#define UCC_FAST_GUMR_ENR	0x00000020
#define UCC_FAST_GUMR_ENT	0x00000010
#define UCC_UART_UCCE_AB	0x0200
#define UCC_UART_UCCE_IDLE	0x0100
#define UCC_UART_UCCE_GRA	0x0080
#define UCC_UART_UCCE_BRKE	0x0040
#define UCC_UART_UCCE_BRKS	0x0020
#define UCC_UART_UCCE_CCR	0x0008
#define UCC_UART_UCCE_BSY	0x0004
#define UCC_UART_UCCE_TX	0x0002
#define UCC_UART_UCCE_RX	0x0001
#define UCC_HDLC_UCCE_GLR	0x1000
#define UCC_HDLC_UCCE_GLT	0x0800
#define UCC_HDLC_UCCE_IDLE	0x0100
#define UCC_HDLC_UCCE_BRKE	0x0040
#define UCC_HDLC_UCCE_BRKS	0x0020
#define UCC_HDLC_UCCE_TXE	0x0010
#define UCC_HDLC_UCCE_RXF	0x0008
#define UCC_HDLC_UCCE_BSY	0x0004
#define UCC_HDLC_UCCE_TXB	0x0002
#define UCC_HDLC_UCCE_RXB	0x0001
#define UCC_BISYNC_UCCE_GRA	0x0080
#define UCC_BISYNC_UCCE_TXE	0x0010
#define UCC_BISYNC_UCCE_RCH	0x0008
#define UCC_BISYNC_UCCE_BSY	0x0004
#define UCC_BISYNC_UCCE_TXB	0x0002
#define UCC_BISYNC_UCCE_RXB	0x0001
#define UCC_GETH_UCCE_MPD       0x80000000
#define UCC_GETH_UCCE_SCAR      0x40000000
#define UCC_GETH_UCCE_GRA       0x20000000
#define UCC_GETH_UCCE_CBPR      0x10000000
#define UCC_GETH_UCCE_BSY       0x08000000
#define UCC_GETH_UCCE_RXC       0x04000000
#define UCC_GETH_UCCE_TXC       0x02000000
#define UCC_GETH_UCCE_TXE       0x01000000
#define UCC_GETH_UCCE_TXB7      0x00800000
#define UCC_GETH_UCCE_TXB6      0x00400000
#define UCC_GETH_UCCE_TXB5      0x00200000
#define UCC_GETH_UCCE_TXB4      0x00100000
#define UCC_GETH_UCCE_TXB3      0x00080000
#define UCC_GETH_UCCE_TXB2      0x00040000
#define UCC_GETH_UCCE_TXB1      0x00020000
#define UCC_GETH_UCCE_TXB0      0x00010000
#define UCC_GETH_UCCE_RXB7      0x00008000
#define UCC_GETH_UCCE_RXB6      0x00004000
#define UCC_GETH_UCCE_RXB5      0x00002000
#define UCC_GETH_UCCE_RXB4      0x00001000
#define UCC_GETH_UCCE_RXB3      0x00000800
#define UCC_GETH_UCCE_RXB2      0x00000400
#define UCC_GETH_UCCE_RXB1      0x00000200
#define UCC_GETH_UCCE_RXB0      0x00000100
#define UCC_GETH_UCCE_RXF7      0x00000080
#define UCC_GETH_UCCE_RXF6      0x00000040
#define UCC_GETH_UCCE_RXF5      0x00000020
#define UCC_GETH_UCCE_RXF4      0x00000010
#define UCC_GETH_UCCE_RXF3      0x00000008
#define UCC_GETH_UCCE_RXF2      0x00000004
#define UCC_GETH_UCCE_RXF1      0x00000002
#define UCC_GETH_UCCE_RXF0      0x00000001
#define UCC_UART_UPSMR_FLC		0x8000
#define UCC_UART_UPSMR_SL		0x4000
#define UCC_UART_UPSMR_CL_MASK		0x3000
#define UCC_UART_UPSMR_CL_8		0x3000
#define UCC_UART_UPSMR_CL_7		0x2000
#define UCC_UART_UPSMR_CL_6		0x1000
#define UCC_UART_UPSMR_CL_5		0x0000
#define UCC_UART_UPSMR_UM_MASK		0x0c00
#define UCC_UART_UPSMR_UM_NORMAL	0x0000
#define UCC_UART_UPSMR_UM_MAN_MULTI	0x0400
#define UCC_UART_UPSMR_UM_AUTO_MULTI	0x0c00
#define UCC_UART_UPSMR_FRZ		0x0200
#define UCC_UART_UPSMR_RZS		0x0100
#define UCC_UART_UPSMR_SYN		0x0080
#define UCC_UART_UPSMR_DRT		0x0040
#define UCC_UART_UPSMR_PEN		0x0010
#define UCC_UART_UPSMR_RPM_MASK		0x000c
#define UCC_UART_UPSMR_RPM_ODD		0x0000
#define UCC_UART_UPSMR_RPM_LOW		0x0004
#define UCC_UART_UPSMR_RPM_EVEN		0x0008
#define UCC_UART_UPSMR_RPM_HIGH		0x000C
#define UCC_UART_UPSMR_TPM_MASK		0x0003
#define UCC_UART_UPSMR_TPM_ODD		0x0000
#define UCC_UART_UPSMR_TPM_LOW		0x0001
#define UCC_UART_UPSMR_TPM_EVEN		0x0002
#define UCC_UART_UPSMR_TPM_HIGH		0x0003
#define UCC_GETH_UPSMR_FTFE     0x80000000
#define UCC_GETH_UPSMR_PTPE     0x40000000
#define UCC_GETH_UPSMR_ECM      0x04000000
#define UCC_GETH_UPSMR_HSE      0x02000000
#define UCC_GETH_UPSMR_PRO      0x00400000
#define UCC_GETH_UPSMR_CAP      0x00200000
#define UCC_GETH_UPSMR_RSH      0x00100000
#define UCC_GETH_UPSMR_RPM      0x00080000
#define UCC_GETH_UPSMR_R10M     0x00040000
#define UCC_GETH_UPSMR_RLPB     0x00020000
#define UCC_GETH_UPSMR_TBIM     0x00010000
#define UCC_GETH_UPSMR_RES1     0x00002000
#define UCC_GETH_UPSMR_RMM      0x00001000
#define UCC_GETH_UPSMR_CAM      0x00000400
#define UCC_GETH_UPSMR_BRO      0x00000200
#define UCC_GETH_UPSMR_SMM	0x00000080
#define UCC_GETH_UPSMR_SGMM	0x00000020
#define UCC_SLOW_TOD	0x8000
#define UCC_FAST_TOD	0x8000
#define UCC_BMR_GBL		0x20
#define UCC_BMR_BO_BE		0x10
#define UCC_BMR_CETM		0x04
#define UCC_BMR_DTB		0x02
#define UCC_BMR_BDB		0x01
#define FC_GBL				0x20
#define FC_DTB_LCL			0x02
#define UCC_FAST_FUNCTION_CODE_GBL	0x20
#define UCC_FAST_FUNCTION_CODE_DTB_LCL	0x02
#define UCC_FAST_FUNCTION_CODE_BDB_LCL	0x01
