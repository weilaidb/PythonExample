#define __LINUX_USB_AUDIO_H
#define UAC_VERSION_1			0x00
#define UAC_VERSION_2			0x20
#define USB_SUBCLASS_AUDIOCONTROL	0x01
#define USB_SUBCLASS_AUDIOSTREAMING	0x02
#define USB_SUBCLASS_MIDISTREAMING	0x03
#define UAC_HEADER			0x01
#define UAC_INPUT_TERMINAL		0x02
#define UAC_OUTPUT_TERMINAL		0x03
#define UAC_MIXER_UNIT			0x04
#define UAC_SELECTOR_UNIT		0x05
#define UAC_FEATURE_UNIT		0x06
#define UAC1_PROCESSING_UNIT		0x07
#define UAC1_EXTENSION_UNIT		0x08
#define UAC_AS_GENERAL			0x01
#define UAC_FORMAT_TYPE			0x02
#define UAC_FORMAT_SPECIFIC		0x03
#define UAC_PROCESS_UNDEFINED		0x00
#define UAC_PROCESS_UP_DOWNMIX		0x01
#define UAC_PROCESS_DOLBY_PROLOGIC	0x02
#define UAC_PROCESS_STEREO_EXTENDER	0x03
#define UAC_PROCESS_REVERB		0x04
#define UAC_PROCESS_CHORUS		0x05
#define UAC_PROCESS_DYN_RANGE_COMP	0x06
#define UAC_EP_GENERAL			0x01
#define UAC_SET_			0x00
#define UAC_GET_			0x80
#define UAC__CUR			0x1
#define UAC__MIN			0x2
#define UAC__MAX			0x3
#define UAC__RES			0x4
#define UAC__MEM			0x5
#define UAC_SET_CUR			(UAC_SET_ | UAC__CUR)
#define UAC_GET_CUR			(UAC_GET_ | UAC__CUR)
#define UAC_SET_MIN			(UAC_SET_ | UAC__MIN)
#define UAC_GET_MIN			(UAC_GET_ | UAC__MIN)
#define UAC_SET_MAX			(UAC_SET_ | UAC__MAX)
#define UAC_GET_MAX			(UAC_GET_ | UAC__MAX)
#define UAC_SET_RES			(UAC_SET_ | UAC__RES)
#define UAC_GET_RES			(UAC_GET_ | UAC__RES)
#define UAC_SET_MEM			(UAC_SET_ | UAC__MEM)
#define UAC_GET_MEM			(UAC_GET_ | UAC__MEM)
#define UAC_GET_STAT			0xff
#define UAC_TERM_COPY_PROTECT		0x01
#define UAC_FU_MUTE			0x01
#define UAC_FU_VOLUME			0x02
#define UAC_FU_BASS			0x03
#define UAC_FU_MID			0x04
#define UAC_FU_TREBLE			0x05
#define UAC_FU_GRAPHIC_EQUALIZER	0x06
#define UAC_FU_AUTOMATIC_GAIN		0x07
#define UAC_FU_DELAY			0x08
#define UAC_FU_BASS_BOOST		0x09
#define UAC_FU_LOUDNESS			0x0a
#define UAC_CONTROL_BIT(CS)	(1 << ((CS) - 1))
#define UAC_UD_ENABLE			0x01
#define UAC_UD_MODE_SELECT		0x02
#define UAC_DP_ENABLE			0x01
#define UAC_DP_MODE_SELECT		0x02
#define UAC_3D_ENABLE			0x01
#define UAC_3D_SPACE			0x02
#define UAC_REVERB_ENABLE		0x01
#define UAC_REVERB_LEVEL		0x02
#define UAC_REVERB_TIME			0x03
#define UAC_REVERB_FEEDBACK		0x04
#define UAC_CHORUS_ENABLE		0x01
#define UAC_CHORUS_LEVEL		0x02
#define UAC_CHORUS_RATE			0x03
#define UAC_CHORUS_DEPTH		0x04
#define UAC_DCR_ENABLE			0x01
#define UAC_DCR_RATE			0x02
#define UAC_DCR_MAXAMPL			0x03
#define UAC_DCR_THRESHOLD		0x04
#define UAC_DCR_ATTACK_TIME		0x05
#define UAC_DCR_RELEASE_TIME		0x06
#define UAC_XU_ENABLE			0x01
#define UAC_MS_HEADER			0x01
#define UAC_MIDI_IN_JACK		0x02
#define UAC_MIDI_OUT_JACK		0x03
#define UAC_MS_GENERAL			0x01
#define UAC_TERMINAL_UNDEFINED		0x100
#define UAC_TERMINAL_STREAMING		0x101
#define UAC_TERMINAL_VENDOR_SPEC	0x1FF
struct uac1_ac_header_descriptor  __attribute__ ((packed));
#define UAC_DT_AC_HEADER_SIZE(n)	(8 + (n))
#define DECLARE_UAC_AC_HEADER_DESCRIPTOR(n)			\
struct uac1_ac_header_descriptor_##n  __attribute__ ((packed))
struct uac_input_terminal_descriptor  __attribute__ ((packed));
#define UAC_DT_INPUT_TERMINAL_SIZE			12
#define UAC_INPUT_TERMINAL_UNDEFINED			0x200
#define UAC_INPUT_TERMINAL_MICROPHONE			0x201
#define UAC_INPUT_TERMINAL_DESKTOP_MICROPHONE		0x202
#define UAC_INPUT_TERMINAL_PERSONAL_MICROPHONE		0x203
#define UAC_INPUT_TERMINAL_OMNI_DIR_MICROPHONE		0x204
#define UAC_INPUT_TERMINAL_MICROPHONE_ARRAY		0x205
#define UAC_INPUT_TERMINAL_PROC_MICROPHONE_ARRAY	0x206
#define UAC_TERMINAL_CS_COPY_PROTECT_CONTROL		0x01
struct uac1_output_terminal_descriptor  __attribute__ ((packed));
#define UAC_DT_OUTPUT_TERMINAL_SIZE			9
#define UAC_OUTPUT_TERMINAL_UNDEFINED			0x300
#define UAC_OUTPUT_TERMINAL_SPEAKER			0x301
#define UAC_OUTPUT_TERMINAL_HEADPHONES			0x302
#define UAC_OUTPUT_TERMINAL_HEAD_MOUNTED_DISPLAY_AUDIO	0x303
#define UAC_OUTPUT_TERMINAL_DESKTOP_SPEAKER		0x304
#define UAC_OUTPUT_TERMINAL_ROOM_SPEAKER		0x305
#define UAC_OUTPUT_TERMINAL_COMMUNICATION_SPEAKER	0x306
#define UAC_OUTPUT_TERMINAL_LOW_FREQ_EFFECTS_SPEAKER	0x307
#define UAC_DT_FEATURE_UNIT_SIZE(ch)		(7 + ((ch) + 1) * 2)
#define DECLARE_UAC_FEATURE_UNIT_DESCRIPTOR(ch)			\
struct uac_feature_unit_descriptor_##ch  __attribute__ ((packed))
struct uac_mixer_unit_descriptor  __attribute__ ((packed));
static inline __u8 uac_mixer_unit_bNrChannels(struct uac_mixer_unit_descriptor *desc)
static inline __u32 uac_mixer_unit_wChannelConfig(struct uac_mixer_unit_descriptor *desc,
int protocol)
static inline __u8 uac_mixer_unit_iChannelNames(struct uac_mixer_unit_descriptor *desc,
int protocol)
static inline __u8 *uac_mixer_unit_bmControls(struct uac_mixer_unit_descriptor *desc,
int protocol)
static inline __u8 uac_mixer_unit_iMixer(struct uac_mixer_unit_descriptor *desc)
struct uac_selector_unit_descriptor  __attribute__ ((packed));
static inline __u8 uac_selector_unit_iSelector(struct uac_selector_unit_descriptor *desc)
struct uac_feature_unit_descriptor  __attribute__((packed));
static inline __u8 uac_feature_unit_iFeature(struct uac_feature_unit_descriptor *desc)
struct uac_processing_unit_descriptor  __attribute__ ((packed));
static inline __u8 uac_processing_unit_bNrChannels(struct uac_processing_unit_descriptor *desc)
static inline __u32 uac_processing_unit_wChannelConfig(struct uac_processing_unit_descriptor *desc,
int protocol)
static inline __u8 uac_processing_unit_iChannelNames(struct uac_processing_unit_descriptor *desc,
int protocol)
static inline __u8 uac_processing_unit_bControlSize(struct uac_processing_unit_descriptor *desc,
int protocol)
static inline __u8 *uac_processing_unit_bmControls(struct uac_processing_unit_descriptor *desc,
int protocol)
static inline __u8 uac_processing_unit_iProcessing(struct uac_processing_unit_descriptor *desc,
int protocol)
static inline __u8 *uac_processing_unit_specific(struct uac_processing_unit_descriptor *desc,
int protocol)
struct uac1_as_header_descriptor  __attribute__ ((packed));
#define UAC_DT_AS_HEADER_SIZE		7
#define UAC_FORMAT_TYPE_I_UNDEFINED	0x0
#define UAC_FORMAT_TYPE_I_PCM		0x1
#define UAC_FORMAT_TYPE_I_PCM8		0x2
#define UAC_FORMAT_TYPE_I_IEEE_FLOAT	0x3
#define UAC_FORMAT_TYPE_I_ALAW		0x4
#define UAC_FORMAT_TYPE_I_MULAW		0x5
struct uac_format_type_i_continuous_descriptor  __attribute__ ((packed));
#define UAC_FORMAT_TYPE_I_CONTINUOUS_DESC_SIZE	14
struct uac_format_type_i_discrete_descriptor  __attribute__ ((packed));
#define DECLARE_UAC_FORMAT_TYPE_I_DISCRETE_DESC(n)		\
struct uac_format_type_i_discrete_descriptor_##n  __attribute__ ((packed))
#define UAC_FORMAT_TYPE_I_DISCRETE_DESC_SIZE(n)	(8 + (n * 3))
struct uac_format_type_i_ext_descriptor  __attribute__((packed));
#define UAC_FORMAT_TYPE_II_MPEG	0x1001
#define UAC_FORMAT_TYPE_II_AC3	0x1002
struct uac_format_type_ii_discrete_descriptor  __attribute__((packed));
struct uac_format_type_ii_ext_descriptor  __attribute__((packed));
#define UAC_FORMAT_TYPE_III_IEC1937_AC3	0x2001
#define UAC_FORMAT_TYPE_III_IEC1937_MPEG1_LAYER1	0x2002
#define UAC_FORMAT_TYPE_III_IEC1937_MPEG2_NOEXT	0x2003
#define UAC_FORMAT_TYPE_III_IEC1937_MPEG2_EXT	0x2004
#define UAC_FORMAT_TYPE_III_IEC1937_MPEG2_LAYER1_LS	0x2005
#define UAC_FORMAT_TYPE_III_IEC1937_MPEG2_LAYER23_LS	0x2006
#define UAC_FORMAT_TYPE_UNDEFINED	0x0
#define UAC_FORMAT_TYPE_I		0x1
#define UAC_FORMAT_TYPE_II		0x2
#define UAC_FORMAT_TYPE_III		0x3
#define UAC_EXT_FORMAT_TYPE_I		0x81
#define UAC_EXT_FORMAT_TYPE_II		0x82
#define UAC_EXT_FORMAT_TYPE_III		0x83
struct uac_iso_endpoint_descriptor  __attribute__((packed));
#define UAC_ISO_ENDPOINT_DESC_SIZE	7
#define UAC_EP_CS_ATTR_SAMPLE_RATE	0x01
#define UAC_EP_CS_ATTR_PITCH_CONTROL	0x02
#define UAC_EP_CS_ATTR_FILL_MAX		0x80
#define UAC1_STATUS_TYPE_ORIG_MASK		0x0f
#define UAC1_STATUS_TYPE_ORIG_AUDIO_CONTROL_IF	0x0
#define UAC1_STATUS_TYPE_ORIG_AUDIO_STREAM_IF	0x1
#define UAC1_STATUS_TYPE_ORIG_AUDIO_STREAM_EP	0x2
#define UAC1_STATUS_TYPE_IRQ_PENDING		(1 << 7)
#define UAC1_STATUS_TYPE_MEM_CHANGED		(1 << 6)
struct uac1_status_word  __attribute__((packed));
struct usb_audio_control ;
struct usb_audio_control_selector ;
