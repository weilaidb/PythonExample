#define __BFIN_ASM_SERIAL_H__
#if defined(CONFIG_BFIN_UART0_CTSRTS) || \
defined(CONFIG_BFIN_UART1_CTSRTS) || \
defined(CONFIG_BFIN_UART2_CTSRTS) || \
defined(CONFIG_BFIN_UART3_CTSRTS)
# ifdef BFIN_UART_BF54X_STYLE
#  define CONFIG_SERIAL_BFIN_HARD_CTSRTS
# else
#  define CONFIG_SERIAL_BFIN_CTSRTS
# endif
struct circ_buf;
struct timer_list;
struct work_struct;
struct bfin_serial_port ;
#define WLS(x)                   (((x)-5) & 0x03)
#define STB                      0x04
#define PEN                      0x08
#define EPS                      0x10
#define STP                      0x20
#define SB                       0x40
#define DLAB                     0x80
#define DR                       0x01
#define OE                       0x02
#define PE                       0x04
#define FE                       0x08
#define BI                       0x10
#define THRE                     0x20
#define TEMT                     0x40
#define TFI                      0x80
#define ERBFI                    0x01
#define ETBEI                    0x02
#define ELSI                     0x04
#define EDSSI                    0x08
#define EDTPTI                   0x10
#define ETFI                     0x20
#define ERFCI                    0x40
#define XOFF                     0x01
#define MRTS                     0x02
#define RFIT                     0x04
#define RFRT                     0x08
#define LOOP_ENA                 0x10
#define FCPOL                    0x20
#define ARTS                     0x40
#define ACTS                     0x80
#define SCTS                     0x01
#define CTS                      0x10
#define RFCS                     0x20
#define UCEN                     0x01
#define IREN                     0x02
#define TPOLC                    0x04
#define RPOLC                    0x08
#define FPE                      0x10
#define FFE                      0x20
# define OFFSET_DLL              0x00
# define OFFSET_DLH              0x04
# define OFFSET_GCTL             0x08
# define OFFSET_LCR              0x0C
# define OFFSET_MCR              0x10
# define OFFSET_LSR              0x14
# define OFFSET_MSR              0x18
# define OFFSET_SCR              0x1C
# define OFFSET_IER_SET          0x20
# define OFFSET_IER_CLEAR        0x24
# define OFFSET_THR              0x28
# define OFFSET_RBR              0x2C
# define OFFSET_THR              0x00
# define OFFSET_RBR              0x00
# define OFFSET_DLL              0x00
# define OFFSET_DLH              0x04
# define OFFSET_IER              0x04
# define OFFSET_IIR              0x08
# define OFFSET_LCR              0x0C
# define OFFSET_MCR              0x10
# define OFFSET_LSR              0x14
# define OFFSET_MSR              0x18
# define OFFSET_SCR              0x1C
# define OFFSET_GCTL             0x24
# undef OFFSET_IIR
#define __BFP(m) u16 m; u16 __pad_##m
struct bfin_uart_regs ;
#undef __BFP
# define port_membase(p) 0
#define UART_GET_CHAR(p)      bfin_read16(port_membase(p) + OFFSET_RBR)
#define UART_GET_DLL(p)       bfin_read16(port_membase(p) + OFFSET_DLL)
#define UART_GET_DLH(p)       bfin_read16(port_membase(p) + OFFSET_DLH)
#define UART_GET_GCTL(p)      bfin_read16(port_membase(p) + OFFSET_GCTL)
#define UART_GET_LCR(p)       bfin_read16(port_membase(p) + OFFSET_LCR)
#define UART_GET_MCR(p)       bfin_read16(port_membase(p) + OFFSET_MCR)
#define UART_GET_MSR(p)       bfin_read16(port_membase(p) + OFFSET_MSR)
#define UART_PUT_CHAR(p, v)   bfin_write16(port_membase(p) + OFFSET_THR, v)
#define UART_PUT_DLL(p, v)    bfin_write16(port_membase(p) + OFFSET_DLL, v)
#define UART_PUT_DLH(p, v)    bfin_write16(port_membase(p) + OFFSET_DLH, v)
#define UART_PUT_GCTL(p, v)   bfin_write16(port_membase(p) + OFFSET_GCTL, v)
#define UART_PUT_LCR(p, v)    bfin_write16(port_membase(p) + OFFSET_LCR, v)
#define UART_PUT_MCR(p, v)    bfin_write16(port_membase(p) + OFFSET_MCR, v)
#define UART_CLEAR_IER(p, v)  bfin_write16(port_membase(p) + OFFSET_IER_CLEAR, v)
#define UART_GET_IER(p)       bfin_read16(port_membase(p) + OFFSET_IER_SET)
#define UART_SET_IER(p, v)    bfin_write16(port_membase(p) + OFFSET_IER_SET, v)
#define UART_CLEAR_DLAB(p)
#define UART_SET_DLAB(p)
#define UART_CLEAR_LSR(p)     bfin_write16(port_membase(p) + OFFSET_LSR, -1)
#define UART_GET_LSR(p)       bfin_read16(port_membase(p) + OFFSET_LSR)
#define UART_PUT_LSR(p, v)    bfin_write16(port_membase(p) + OFFSET_LSR, v)
#define BFIN_UART_CTSRTS_HARD
#define UART_CLEAR_SCTS(p)      bfin_write16((port_membase(p) + OFFSET_MSR), SCTS)
#define UART_GET_CTS(x)         (UART_GET_MSR(x) & CTS)
#define UART_DISABLE_RTS(x)     UART_PUT_MCR(x, UART_GET_MCR(x) & ~(ARTS | MRTS))
#define UART_ENABLE_RTS(x)      UART_PUT_MCR(x, UART_GET_MCR(x) | MRTS | ARTS)
#define UART_ENABLE_INTS(x, v)  UART_SET_IER(x, v)
#define UART_DISABLE_INTS(x)    UART_CLEAR_IER(x, 0xF)
#define UART_CLEAR_IER(p, v)  UART_PUT_IER(p, UART_GET_IER(p) & ~(v))
#define UART_GET_IER(p)       bfin_read16(port_membase(p) + OFFSET_IER)
#define UART_PUT_IER(p, v)    bfin_write16(port_membase(p) + OFFSET_IER, v)
#define UART_SET_IER(p, v)    UART_PUT_IER(p, UART_GET_IER(p) | (v))
#define UART_CLEAR_DLAB(p)    do  while (0)
#define UART_SET_DLAB(p)      do  while (0)
# define put_lsr_cache(p, v)
# define get_lsr_cache(p) 0
static inline void UART_CLEAR_LSR(void *p)
static inline unsigned int UART_GET_LSR(void *p)
static inline void UART_PUT_LSR(void *p, uint16_t val)
#define UART_GET_CTS(x)        gpio_get_value((x)->cts_pin)
#define UART_DISABLE_RTS(x)    gpio_set_value((x)->rts_pin, 1)
#define UART_ENABLE_RTS(x)     gpio_set_value((x)->rts_pin, 0)
#define UART_ENABLE_INTS(x, v) UART_PUT_IER(x, v)
#define UART_DISABLE_INTS(x)   UART_PUT_IER(x, 0)
# define BFIN_UART_TX_FIFO_SIZE 2
