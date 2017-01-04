int dvb_usb_generic_rw(struct dvb_usb_device *d, u8 *wbuf, u16 wlen, u8 *rbuf,
u16 rlen, int delay_ms)
EXPORT_SYMBOL(dvb_usb_generic_rw);
int dvb_usb_generic_write(struct dvb_usb_device *d, u8 *buf, u16 len)
EXPORT_SYMBOL(dvb_usb_generic_write);
static void dvb_usb_data_complete(struct usb_data_stream *stream, u8 *buffer, size_t length)
static void dvb_usb_data_complete_204(struct usb_data_stream *stream, u8 *buffer, size_t length)
int dvb_usb_adapter_stream_init(struct dvb_usb_adapter *adap)
int dvb_usb_adapter_stream_exit(struct dvb_usb_adapter *adap)
