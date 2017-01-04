#define imx_mx1_camera_data_entry_single(soc, _size)			\
const struct imx_mx1_camera_data imx1_mx1_camera_data __initconst =
imx_mx1_camera_data_entry_single(MX1, 10);
struct platform_device *__init imx_add_mx1_camera(
const struct imx_mx1_camera_data *data,
const struct mx1_camera_pdata *pdata)
