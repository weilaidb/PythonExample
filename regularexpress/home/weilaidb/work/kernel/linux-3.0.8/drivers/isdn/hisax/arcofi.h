#define ARCOFI_USE	1
#define ARCOFI_NOP	0
#define ARCOFI_TRANSMIT	1
#define ARCOFI_RECEIVE	2
#define ARCOFI_START	1
#define ARCOFI_TX_END	2
#define ARCOFI_RX_END	3
#define ARCOFI_TIMEOUT	4
extern int arcofi_fsm(struct IsdnCardState *cs, int event, void *data);
extern void init_arcofi(struct IsdnCardState *cs);
extern void clear_arcofi(struct IsdnCardState *cs);
