static inline void
waitforCEC(struct IsdnCardState *cs, int jade, int reg)
static inline void
waitforXFW(struct IsdnCardState *cs, int jade)
static inline void
WriteJADECMDR(struct IsdnCardState *cs, int jade, int reg, u_char data)
static void
jade_empty_fifo(struct BCState *bcs, int count)
static void
jade_fill_fifo(struct BCState *bcs)
static void
jade_interrupt(struct IsdnCardState *cs, u_char val, u_char jade)
static inline void
jade_int_main(struct IsdnCardState *cs, u_char val, int jade)
