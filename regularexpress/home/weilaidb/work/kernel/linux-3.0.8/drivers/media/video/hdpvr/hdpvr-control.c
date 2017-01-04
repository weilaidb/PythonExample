int hdpvr_config_call(struct hdpvr_device *dev, uint value, u8 valbuf)
struct hdpvr_video_info *get_video_info(struct hdpvr_device *dev)
int get_input_lines_info(struct hdpvr_device *dev)
int hdpvr_set_bitrate(struct hdpvr_device *dev)
int hdpvr_set_audio(struct hdpvr_device *dev, u8 input,
enum v4l2_mpeg_audio_encoding codec)
int hdpvr_set_options(struct hdpvr_device *dev)
