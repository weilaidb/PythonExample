static DEFINE_MUTEX(octeon2_usb_clocks_mutex);
static int octeon2_usb_clock_start_cnt;
void octeon2_usb_clocks_start(void)
EXPORT_SYMBOL(octeon2_usb_clocks_start);
void octeon2_usb_clocks_stop(void)
EXPORT_SYMBOL(octeon2_usb_clocks_stop);
