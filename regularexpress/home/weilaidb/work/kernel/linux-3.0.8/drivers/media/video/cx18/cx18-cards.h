#define CX18_HW_TUNER			(1 << 0)
#define CX18_HW_TVEEPROM		(1 << 1)
#define CX18_HW_CS5345			(1 << 2)
#define CX18_HW_DVB			(1 << 3)
#define CX18_HW_418_AV			(1 << 4)
#define CX18_HW_GPIO_MUX		(1 << 5)
#define CX18_HW_GPIO_RESET_CTRL		(1 << 6)
#define CX18_HW_Z8F0811_IR_TX_HAUP	(1 << 7)
#define CX18_HW_Z8F0811_IR_RX_HAUP	(1 << 8)
#define CX18_HW_Z8F0811_IR_HAUP	(CX18_HW_Z8F0811_IR_RX_HAUP | \
CX18_HW_Z8F0811_IR_TX_HAUP)
#define CX18_HW_IR_ANY (CX18_HW_Z8F0811_IR_RX_HAUP | \
CX18_HW_Z8F0811_IR_TX_HAUP)
#define	CX18_CARD_INPUT_VID_TUNER	1
#define	CX18_CARD_INPUT_SVIDEO1 	2
#define	CX18_CARD_INPUT_SVIDEO2 	3
#define	CX18_CARD_INPUT_COMPOSITE1 	4
#define	CX18_CARD_INPUT_COMPOSITE2 	5
#define	CX18_CARD_INPUT_COMPONENT1 	6
#define	CX18_CARD_INPUT_AUD_TUNER	1
#define	CX18_CARD_INPUT_LINE_IN1 	2
#define	CX18_CARD_INPUT_LINE_IN2 	3
#define CX18_CARD_MAX_VIDEO_INPUTS 6
#define CX18_CARD_MAX_AUDIO_INPUTS 3
#define CX18_CARD_MAX_TUNERS  	   2
#define CX18_CAP_ENCODER (V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_TUNER | \
V4L2_CAP_AUDIO | V4L2_CAP_READWRITE | \
V4L2_CAP_VBI_CAPTURE | V4L2_CAP_SLICED_VBI_CAPTURE)
struct cx18_card_video_input ;
struct cx18_card_audio_input ;
struct cx18_card_pci_info ;
struct cx18_gpio_init ;
struct cx18_gpio_i2c_slave_reset ;
struct cx18_gpio_audio_input ;
struct cx18_card_tuner ;
struct cx18_card_tuner_i2c ;
struct cx18_ddr ;
struct cx18_card ;
int cx18_get_input(struct cx18 *cx, u16 index, struct v4l2_input *input);
int cx18_get_audio_input(struct cx18 *cx, u16 index, struct v4l2_audio *input);
const struct cx18_card *cx18_get_card(u16 index);
