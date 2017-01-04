static int line6_index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *line6_id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
int line6_init_audio(struct usb_line6 *line6)
int line6_register_audio(struct usb_line6 *line6)
void line6_cleanup_audio(struct usb_line6 *line6)
