irqreturn_t t3e3_intr(int irq, void *dev_instance)
void dc_intr(struct channel *sc)
void dc_intr_rx(struct channel *sc)
void dc_intr_tx(struct channel *sc)
void dc_intr_tx_underflow(struct channel *sc)
void exar7250_intr(struct channel *sc)
void exar7250_T3_intr(struct channel *sc, u32 block_status)
void exar7250_E3_intr(struct channel *sc, u32 block_status)