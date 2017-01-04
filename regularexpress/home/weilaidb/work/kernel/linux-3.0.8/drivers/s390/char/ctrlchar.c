static int ctrlchar_sysrq_key;
static void
ctrlchar_handle_sysrq(struct work_struct *work)
static DECLARE_WORK(ctrlchar_work, ctrlchar_handle_sysrq);
unsigned int
ctrlchar_handle(const unsigned char *buf, int len, struct tty_struct *tty)
