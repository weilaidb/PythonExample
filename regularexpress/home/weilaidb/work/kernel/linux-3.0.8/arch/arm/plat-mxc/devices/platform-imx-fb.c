#define imx_imx_fb_data_entry_single(soc, _size)			\
const struct imx_imx_fb_data imx1_imx_fb_data __initconst =
imx_imx_fb_data_entry_single(MX1, SZ_4K);
const struct imx_imx_fb_data imx21_imx_fb_data __initconst =
imx_imx_fb_data_entry_single(MX21, SZ_4K);
const struct imx_imx_fb_data imx25_imx_fb_data __initconst =
imx_imx_fb_data_entry_single(MX25, SZ_16K);
const struct imx_imx_fb_data imx27_imx_fb_data __initconst =
imx_imx_fb_data_entry_single(MX27, SZ_4K);
struct platform_device *__init imx_add_imx_fb(
const struct imx_imx_fb_data *data,
const struct imx_fb_platform_data *pdata)
