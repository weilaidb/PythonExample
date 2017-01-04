#define CAIAQ_DEVICE_H
#define USB_VID_NATIVEINSTRUMENTS 0x17cc
#define USB_PID_RIGKONTROL2		0x1969
#define USB_PID_RIGKONTROL3		0x1940
#define USB_PID_KORECONTROLLER		0x4711
#define USB_PID_KORECONTROLLER2		0x4712
#define USB_PID_AK1			0x0815
#define USB_PID_AUDIO2DJ		0x041c
#define USB_PID_AUDIO4DJ		0x0839
#define USB_PID_AUDIO8DJ		0x1978
#define USB_PID_SESSIONIO		0x1915
#define USB_PID_GUITARRIGMOBILE		0x0d8d
#define USB_PID_TRAKTORKONTROLX1	0x2305
#define USB_PID_TRAKTORKONTROLS4	0xbaff
#define USB_PID_TRAKTORAUDIO2		0x041d
#define EP1_BUFSIZE 64
#define EP4_BUFSIZE 512
#define CAIAQ_USB_STR_LEN 0xff
#define MAX_STREAMS 32
#define MODNAME "snd-usb-caiaq"
#define log(x...) snd_printk(KERN_WARNING MODNAME" log: " x)
#define debug(x...) snd_printk(KERN_WARNING MODNAME " debug: " x)
#define debug(x...) do  while(0)
#define EP1_CMD_GET_DEVICE_INFO	0x1
#define EP1_CMD_READ_ERP	0x2
#define EP1_CMD_READ_ANALOG	0x3
#define EP1_CMD_READ_IO		0x4
#define EP1_CMD_WRITE_IO	0x5
#define EP1_CMD_MIDI_READ	0x6
#define EP1_CMD_MIDI_WRITE	0x7
#define EP1_CMD_AUDIO_PARAMS	0x9
#define EP1_CMD_AUTO_MSG	0xb
#define EP1_CMD_DIMM_LEDS       0xc
struct caiaq_device_spec  __attribute__ ((packed));
struct snd_usb_caiaq_cb_info;
struct snd_usb_caiaqdev ;
struct snd_usb_caiaq_cb_info ;
#define caiaqdev(c) ((struct snd_usb_caiaqdev*)(c)->private_data)
int snd_usb_caiaq_set_audio_params (struct snd_usb_caiaqdev *dev, int rate, int depth, int bbp);
int snd_usb_caiaq_set_auto_msg (struct snd_usb_caiaqdev *dev, int digital, int analog, int erp);
int snd_usb_caiaq_send_command(struct snd_usb_caiaqdev *dev,
unsigned char command,
const unsigned char *buffer,
int len);
