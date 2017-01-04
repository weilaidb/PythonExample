#define act2000_isa_h
#define ISA_POLL_LOOP 40
typedef enum  ISA_INT_T;
#define        ISA_COR             0
#define        ISA_COR_PERR     0x01
#define        ISA_COR_WS       0x02
#define        ISA_COR_IRQOFF   0x38
#define        ISA_COR_IRQ07    0x30
#define        ISA_COR_IRQ05    0x28
#define        ISA_COR_IRQ03    0x20
#define        ISA_COR_IRQ10    0x18
#define        ISA_COR_IRQ11    0x10
#define        ISA_COR_IRQ12    0x08
#define        ISA_COR_IRQ15    0x00
#define        ISA_COR_IRQPULSE 0x40
#define        ISA_COR_RESET    0x80
#define        ISA_ISR             1
#define        ISA_ISR_ERR      0x01
#define        ISA_ISR_OUT      0x02
#define        ISA_ISR_INP      0x04
#define        ISA_ISR_SERIAL   0x08
#define        ISA_ISR_ERRSIG   0x10
#define        ISA_ISR_ERR_MASK 0xfe
#define        ISA_ISR_OUT_MASK 0xfd
#define        ISA_ISR_INP_MASK 0xfb
#define        ISA_SER_ID     0x0201
#define        ISA_EPR             2
#define        ISA_EPR_OUT      0x01
#define        ISA_EPR_IN       0x02
#define        ISA_EPR_CLK      0x04
#define        ISA_EPR_CS       0x08
#define        ISA_EPR_HOLD     0x10
#define        ISA_EER             3
#define        ISA_SDI             4
#define        ISA_SDO             5
#define        ISA_SIS             6
#define        ISA_SIS_READY    0x01
#define        ISA_SIS_INT      0x02
#define        ISA_SOS             7
#define        ISA_SOS_READY    0x01
#define        ISA_SOS_INT      0x02
#define        ISA_REGION          8
#define ISA_PORT_COR (card->port+ISA_COR)
#define ISA_PORT_ISR (card->port+ISA_ISR)
#define ISA_PORT_EPR (card->port+ISA_EPR)
#define ISA_PORT_EER (card->port+ISA_EER)
#define ISA_PORT_SDI (card->port+ISA_SDI)
#define ISA_PORT_SDO (card->port+ISA_SDO)
#define ISA_PORT_SIS (card->port+ISA_SIS)
#define ISA_PORT_SOS (card->port+ISA_SOS)
extern int act2000_isa_detect(unsigned short portbase);
extern int act2000_isa_config_irq(act2000_card * card, short irq);
extern int act2000_isa_config_port(act2000_card * card, unsigned short portbase);
extern int act2000_isa_download(act2000_card * card, act2000_ddef __user * cb);
extern void act2000_isa_release(act2000_card * card);
extern void act2000_isa_receive(act2000_card *card);
extern void act2000_isa_send(act2000_card *card);
