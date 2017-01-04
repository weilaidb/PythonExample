static int uwb_radio_select_channel(struct uwb_rc *rc)
static void uwb_radio_channel_changed(struct uwb_rc *rc, int channel)
static int uwb_radio_change_channel(struct uwb_rc *rc, int channel)
int uwb_radio_start(struct uwb_pal *pal)
EXPORT_SYMBOL_GPL(uwb_radio_start);
void uwb_radio_stop(struct uwb_pal *pal)
EXPORT_SYMBOL_GPL(uwb_radio_stop);
int uwb_radio_force_channel(struct uwb_rc *rc, int channel)
int uwb_radio_setup(struct uwb_rc *rc)
void uwb_radio_reset_state(struct uwb_rc *rc)
void uwb_radio_shutdown(struct uwb_rc *rc)
