#define SH_MOBILE_HDMI_H
struct sh_mobile_lcdc_chan_cfg;
struct device;
struct clk;
#define HDMI_SND_SRC_MASK	(0xF << 0)
#define HDMI_SND_SRC_I2S	(0 << 0)
#define HDMI_SND_SRC_SPDIF	(1 << 0)
#define HDMI_SND_SRC_DSD	(2 << 0)
#define HDMI_SND_SRC_HBR	(3 << 0)
struct sh_mobile_hdmi_info ;
