get_char_func kdb_poll_funcs[] = ;
EXPORT_SYMBOL_GPL(kdb_poll_funcs);
int kdb_poll_idx = 1;
EXPORT_SYMBOL_GPL(kdb_poll_idx);
int kdb_stub(struct kgdb_state *ks)
