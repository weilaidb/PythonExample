static inline void
waitforCEC(struct IsdnCardState *cs, int hscx)
static inline void
waitforXFW(struct IsdnCardState *cs, int hscx)
static inline void
WriteHSCXCMDR(struct IsdnCardState *cs, int hscx, u_char data)
static void
hscx_empty_fifo(struct BCState *bcs, int count)
static void
hscx_fill_fifo(struct BCState *bcs)
static void
hscx_interrupt(struct IsdnCardState *cs, u_char val, u_char hscx)
static void
hscx_int_main(struct IsdnCardState *cs, u_char val)
