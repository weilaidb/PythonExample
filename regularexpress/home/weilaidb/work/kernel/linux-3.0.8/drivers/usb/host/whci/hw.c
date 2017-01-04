void whc_write_wusbcmd(struct whc *whc, u32 mask, u32 val)
int whc_do_gencmd(struct whc *whc, u32 cmd, u32 params, void *addr, size_t len)
void whc_hw_error(struct whc *whc, const char *reason)
