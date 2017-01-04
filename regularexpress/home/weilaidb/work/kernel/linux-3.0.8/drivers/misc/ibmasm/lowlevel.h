#define __IBMASM_CONDOR_H__
#define VENDORID_IBM	0x1014
#define DEVICEID_RSA	0x010F
#define GET_MFA_ADDR(x)  (x & 0xFFFFFF00)
#define MAILBOX_FULL(x)  (x & 0x00000001)
#define NO_MFAS_AVAILABLE     0xFFFFFFFF
#define INBOUND_QUEUE_PORT   0x40
#define OUTBOUND_QUEUE_PORT  0x44
#define SP_INTR_MASK	0x00000008
#define UART_INTR_MASK	0x00000010
#define INTR_STATUS_REGISTER   0x13A0
#define INTR_CONTROL_REGISTER  0x13A4
#define SCOUT_COM_A_BASE         0x0000
#define SCOUT_COM_B_BASE         0x0100
#define SCOUT_COM_C_BASE         0x0200
#define SCOUT_COM_D_BASE         0x0300
static inline int sp_interrupt_pending(void __iomem *base_address)
static inline int uart_interrupt_pending(void __iomem *base_address)
static inline void ibmasm_enable_interrupts(void __iomem *base_address, int mask)
static inline void ibmasm_disable_interrupts(void __iomem *base_address, int mask)
static inline void enable_sp_interrupts(void __iomem *base_address)
static inline void disable_sp_interrupts(void __iomem *base_address)
static inline void enable_uart_interrupts(void __iomem *base_address)
static inline void disable_uart_interrupts(void __iomem *base_address)
#define valid_mfa(mfa)	( (mfa) != NO_MFAS_AVAILABLE )
static inline u32 get_mfa_outbound(void __iomem *base_address)
static inline void set_mfa_outbound(void __iomem *base_address, u32 mfa)
static inline u32 get_mfa_inbound(void __iomem *base_address)
static inline void set_mfa_inbound(void __iomem *base_address, u32 mfa)
static inline struct i2o_message *get_i2o_message(void __iomem *base_address, u32 mfa)
