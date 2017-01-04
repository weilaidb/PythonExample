static void qib_format_hwmsg(char *msg, size_t msgl, const char *hwmsg)
void qib_format_hwerrors(u64 hwerrs, const struct qib_hwerror_msgs *hwerrmsgs,
size_t nhwerrmsgs, char *msg, size_t msgl)
static void signal_ib_event(struct qib_pportdata *ppd, enum ib_event_type ev)
void qib_handle_e_ibstatuschanged(struct qib_pportdata *ppd, u64 ibcs)
void qib_clear_symerror_on_linkup(unsigned long opaque)
void qib_handle_urcv(struct qib_devdata *dd, u64 ctxtr)
void qib_bad_intrstatus(struct qib_devdata *dd)
