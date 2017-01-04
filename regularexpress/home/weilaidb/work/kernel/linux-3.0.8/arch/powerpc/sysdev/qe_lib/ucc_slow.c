u32 ucc_slow_get_qe_cr_subblock(int uccs_num)
EXPORT_SYMBOL(ucc_slow_get_qe_cr_subblock);
void ucc_slow_poll_transmitter_now(struct ucc_slow_private * uccs)
void ucc_slow_graceful_stop_tx(struct ucc_slow_private * uccs)
EXPORT_SYMBOL(ucc_slow_graceful_stop_tx);
void ucc_slow_stop_tx(struct ucc_slow_private * uccs)
EXPORT_SYMBOL(ucc_slow_stop_tx);
void ucc_slow_restart_tx(struct ucc_slow_private * uccs)
EXPORT_SYMBOL(ucc_slow_restart_tx);
void ucc_slow_enable(struct ucc_slow_private * uccs, enum comm_dir mode)
EXPORT_SYMBOL(ucc_slow_enable);
void ucc_slow_disable(struct ucc_slow_private * uccs, enum comm_dir mode)
EXPORT_SYMBOL(ucc_slow_disable);
int ucc_slow_init(struct ucc_slow_info * us_info, struct ucc_slow_private ** uccs_ret)
EXPORT_SYMBOL(ucc_slow_init);
void ucc_slow_free(struct ucc_slow_private * uccs)
EXPORT_SYMBOL(ucc_slow_free);
