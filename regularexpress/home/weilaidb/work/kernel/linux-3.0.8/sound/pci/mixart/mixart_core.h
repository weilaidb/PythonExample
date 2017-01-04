#define __SOUND_MIXART_CORE_H
enum mixart_message_id ;
struct mixart_msg
;
struct mixart_enum_connector_resp
__attribute__((packed));
#define MIXART_FLOAT_P_22_0_TO_HEX      0x41b00000
#define MIXART_FLOAT_M_20_0_TO_HEX      0xc1a00000
#define MIXART_FLOAT____0_0_TO_HEX      0x00000000
struct mixart_audio_info_req
__attribute__((packed));
struct mixart_analog_hw_info
__attribute__((packed));
struct mixart_digital_hw_info
__attribute__((packed));
struct mixart_analog_info
__attribute__((packed));
struct mixart_digital_info
__attribute__((packed));
struct mixart_audio_info
__attribute__((packed));
struct mixart_audio_info_resp
__attribute__((packed));
#define MIXART_FLOAT_P__4_0_TO_HEX      0x40800000
#define MIXART_FLOAT_P__8_0_TO_HEX      0x41000000
struct mixart_stream_info
__attribute__((packed));
struct mixart_streaming_group_req
__attribute__((packed));
struct mixart_stream_desc
__attribute__((packed));
struct mixart_streaming_group
__attribute__((packed));
struct mixart_delete_group_resp
__attribute__((packed));
struct mixart_fx_couple_uid
__attribute__((packed));
struct mixart_txx_stream_desc
__attribute__((packed));
struct mixart_flow_info
__attribute__((packed));
struct mixart_stream_state_req
__attribute__((packed));
struct mixart_group_state_req
__attribute__((packed));
struct mixart_group_state_resp
__attribute__((packed));
struct mixart_sample_pos
__attribute__((packed));
struct mixart_timer_notify
__attribute__((packed));
struct mixart_return_uid
__attribute__((packed));
enum mixart_clock_generic_type ;
enum mixart_clock_mode ;
struct mixart_clock_properties
__attribute__((packed));
struct mixart_clock_properties_resp
__attribute__((packed));
enum mixart_coding_type ;
enum mixart_sample_type ;
struct mixart_stream_param_desc
__attribute__((packed));
struct mixart_get_out_audio_level
__attribute__((packed));
#define MIXART_AUDIO_LEVEL_ANALOG_MASK	0x01
#define MIXART_AUDIO_LEVEL_DIGITAL_MASK	0x02
#define MIXART_AUDIO_LEVEL_MONITOR_MASK	0x04
#define MIXART_AUDIO_LEVEL_MUTE_MASK	0x08
#define MIXART_AUDIO_LEVEL_MUTE_M1_MASK	0x10
#define MIXART_AUDIO_LEVEL_MUTE_M2_MASK	0x20
struct mixart_set_out_audio_level
__attribute__((packed));
#define MIXART_MAX_PHYS_IO  (MIXART_MAX_CARDS * 2 * 2)
struct mixart_uid_enumeration
__attribute__((packed));
struct mixart_io_channel_level
__attribute__((packed));
struct mixart_io_level
__attribute__((packed));
struct mixart_in_audio_level_info
__attribute__((packed));
struct mixart_set_in_audio_level_req
__attribute__((packed));
#define MIXART_OUT_STREAM_SET_LEVEL_LEFT_AUDIO1		0x01
#define MIXART_OUT_STREAM_SET_LEVEL_LEFT_AUDIO2		0x02
#define MIXART_OUT_STREAM_SET_LEVEL_RIGHT_AUDIO1	0x04
#define MIXART_OUT_STREAM_SET_LEVEL_RIGHT_AUDIO2	0x08
#define MIXART_OUT_STREAM_SET_LEVEL_STREAM_1		0x10
#define MIXART_OUT_STREAM_SET_LEVEL_STREAM_2		0x20
#define MIXART_OUT_STREAM_SET_LEVEL_MUTE_1		0x40
#define MIXART_OUT_STREAM_SET_LEVEL_MUTE_2		0x80
struct mixart_out_stream_level_info
__attribute__((packed));
struct mixart_set_out_stream_level
__attribute__((packed));
struct mixart_set_out_stream_level_req
__attribute__((packed));
void snd_mixart_init_mailbox(struct mixart_mgr *mgr);
void snd_mixart_exit_mailbox(struct mixart_mgr *mgr);
int  snd_mixart_send_msg(struct mixart_mgr *mgr, struct mixart_msg *request, int max_resp_size, void *resp_data);
int  snd_mixart_send_msg_wait_notif(struct mixart_mgr *mgr, struct mixart_msg *request, u32 notif_event);
int  snd_mixart_send_msg_nonblock(struct mixart_mgr *mgr, struct mixart_msg *request);
irqreturn_t snd_mixart_interrupt(int irq, void *dev_id);
void snd_mixart_msg_tasklet(unsigned long arg);
void snd_mixart_reset_board(struct mixart_mgr *mgr);
