#define ERROR_DELAY_JIFFIES (HZ / 10)
#define OUTPUT_URBS 7
#define INPUT_URBS 7
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("USB Audio/MIDI helper module");
MODULE_LICENSE("Dual BSD/GPL");
struct usb_ms_header_descriptor  __attribute__ ((packed));
struct usb_ms_endpoint_descriptor  __attribute__ ((packed));
struct snd_usb_midi_in_endpoint;
struct snd_usb_midi_out_endpoint;
struct snd_usb_midi_endpoint;
struct usb_protocol_ops ;
struct snd_usb_midi ;
struct snd_usb_midi_out_endpoint ;
struct snd_usb_midi_in_endpoint ;
static void snd_usbmidi_do_output(struct snd_usb_midi_out_endpoint* ep);
static const uint8_t snd_usbmidi_cin_length[] = ;
static int snd_usbmidi_submit_urb(struct urb* urb, gfp_t flags)
static int snd_usbmidi_urb_error(int status)
static void snd_usbmidi_input_data(struct snd_usb_midi_in_endpoint* ep, int portidx,
uint8_t* data, int length)
static void dump_urb(const char *type, const u8 *data, int length)
#define dump_urb(type, data, length)
static void snd_usbmidi_in_urb_complete(struct urb* urb)
static void snd_usbmidi_out_urb_complete(struct urb* urb)
static void snd_usbmidi_do_output(struct snd_usb_midi_out_endpoint* ep)
static void snd_usbmidi_out_tasklet(unsigned long data)
static void snd_usbmidi_error_timer(unsigned long data)
static int send_bulk_static_data(struct snd_usb_midi_out_endpoint* ep,
const void *data, int len)
static void snd_usbmidi_standard_input(struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_midiman_input(struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_maudio_broken_running_status_input(
struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_cme_input(struct snd_usb_midi_in_endpoint *ep,
uint8_t *buffer, int buffer_length)
static void snd_usbmidi_output_standard_packet(struct urb* urb, uint8_t p0,
uint8_t p1, uint8_t p2, uint8_t p3)
static void snd_usbmidi_output_midiman_packet(struct urb* urb, uint8_t p0,
uint8_t p1, uint8_t p2, uint8_t p3)
static void snd_usbmidi_transmit_byte(struct usbmidi_out_port* port,
uint8_t b, struct urb* urb)
static void snd_usbmidi_standard_output(struct snd_usb_midi_out_endpoint* ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_standard_ops = ;
static struct usb_protocol_ops snd_usbmidi_midiman_ops = ;
static struct usb_protocol_ops snd_usbmidi_maudio_broken_running_status_ops = ;
static struct usb_protocol_ops snd_usbmidi_cme_ops = ;
static void snd_usbmidi_akai_input(struct snd_usb_midi_in_endpoint *ep,
uint8_t *buffer, int buffer_length)
#define MAX_AKAI_SYSEX_LEN 9
static void snd_usbmidi_akai_output(struct snd_usb_midi_out_endpoint *ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_akai_ops = ;
static void snd_usbmidi_novation_input(struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_novation_output(struct snd_usb_midi_out_endpoint* ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_novation_ops = ;
static void snd_usbmidi_raw_input(struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_raw_output(struct snd_usb_midi_out_endpoint* ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_raw_ops = ;
static void snd_usbmidi_us122l_input(struct snd_usb_midi_in_endpoint *ep,
uint8_t *buffer, int buffer_length)
static void snd_usbmidi_us122l_output(struct snd_usb_midi_out_endpoint *ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_122l_ops = ;
static void snd_usbmidi_emagic_init_out(struct snd_usb_midi_out_endpoint* ep)
static void snd_usbmidi_emagic_finish_out(struct snd_usb_midi_out_endpoint* ep)
static void snd_usbmidi_emagic_input(struct snd_usb_midi_in_endpoint* ep,
uint8_t* buffer, int buffer_length)
static void snd_usbmidi_emagic_output(struct snd_usb_midi_out_endpoint* ep,
struct urb *urb)
static struct usb_protocol_ops snd_usbmidi_emagic_ops = ;
static void update_roland_altsetting(struct snd_usb_midi* umidi)
static void substream_open(struct snd_rawmidi_substream *substream, int open)
static int snd_usbmidi_output_open(struct snd_rawmidi_substream *substream)
static int snd_usbmidi_output_close(struct snd_rawmidi_substream *substream)
static void snd_usbmidi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_usbmidi_output_drain(struct snd_rawmidi_substream *substream)
static int snd_usbmidi_input_open(struct snd_rawmidi_substream *substream)
static int snd_usbmidi_input_close(struct snd_rawmidi_substream *substream)
static void snd_usbmidi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_usbmidi_output_ops = ;
static struct snd_rawmidi_ops snd_usbmidi_input_ops = ;
static void free_urb_and_buffer(struct snd_usb_midi *umidi, struct urb *urb,
unsigned int buffer_length)
static void snd_usbmidi_in_endpoint_delete(struct snd_usb_midi_in_endpoint* ep)
static int snd_usbmidi_in_endpoint_create(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* ep_info,
struct snd_usb_midi_endpoint* rep)
static void snd_usbmidi_out_endpoint_clear(struct snd_usb_midi_out_endpoint *ep)
static void snd_usbmidi_out_endpoint_delete(struct snd_usb_midi_out_endpoint *ep)
static int snd_usbmidi_out_endpoint_create(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* ep_info,
struct snd_usb_midi_endpoint* rep)
static void snd_usbmidi_free(struct snd_usb_midi* umidi)
void snd_usbmidi_disconnect(struct list_head* p)
static void snd_usbmidi_rawmidi_free(struct snd_rawmidi *rmidi)
static struct snd_rawmidi_substream *snd_usbmidi_find_substream(struct snd_usb_midi* umidi,
int stream, int number)
static struct port_info  snd_usbmidi_port_info[] = ;
static struct port_info *find_port_info(struct snd_usb_midi* umidi, int number)
static void snd_usbmidi_get_port_info(struct snd_rawmidi *rmidi, int number,
struct snd_seq_port_info *seq_port_info)
static void snd_usbmidi_init_substream(struct snd_usb_midi* umidi,
int stream, int number,
struct snd_rawmidi_substream ** rsubstream)
static int snd_usbmidi_create_endpoints(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoints)
static int snd_usbmidi_get_ms_info(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoints)
static int roland_load_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *info)
static int roland_load_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int roland_load_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new roland_load_ctl = ;
static void snd_usbmidi_switch_roland_altsetting(struct snd_usb_midi* umidi)
static int snd_usbmidi_detect_endpoints(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoint,
int max_endpoints)
static int snd_usbmidi_detect_per_port_endpoints(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoints)
static int snd_usbmidi_detect_yamaha(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoint)
static int snd_usbmidi_create_endpoints_midiman(struct snd_usb_midi* umidi,
struct snd_usb_midi_endpoint_info* endpoint)
static struct snd_rawmidi_global_ops snd_usbmidi_ops = ;
static int snd_usbmidi_create_rawmidi(struct snd_usb_midi* umidi,
int out_ports, int in_ports)
void snd_usbmidi_input_stop(struct list_head* p)
static void snd_usbmidi_input_start_ep(struct snd_usb_midi_in_endpoint* ep)
void snd_usbmidi_input_start(struct list_head* p)
int snd_usbmidi_create(struct snd_card *card,
struct usb_interface* iface,
struct list_head *midi_list,
const struct snd_usb_audio_quirk* quirk)
EXPORT_SYMBOL(snd_usbmidi_create);
EXPORT_SYMBOL(snd_usbmidi_input_stop);
EXPORT_SYMBOL(snd_usbmidi_input_start);
EXPORT_SYMBOL(snd_usbmidi_disconnect);
