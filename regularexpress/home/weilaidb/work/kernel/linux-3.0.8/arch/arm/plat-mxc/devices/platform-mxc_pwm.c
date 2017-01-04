#define imx_mxc_pwm_data_entry_single(soc, _id, _hwid, _size)		\
#define imx_mxc_pwm_data_entry(soc, _id, _hwid, _size)			\
[_id] = imx_mxc_pwm_data_entry_single(soc, _id, _hwid, _size)
const struct imx_mxc_pwm_data imx21_mxc_pwm_data __initconst =
imx_mxc_pwm_data_entry_single(MX21, 0, , SZ_4K);
const struct imx_mxc_pwm_data imx25_mxc_pwm_data[] __initconst = ;
const struct imx_mxc_pwm_data imx27_mxc_pwm_data __initconst =
imx_mxc_pwm_data_entry_single(MX27, 0, , SZ_4K);
const struct imx_mxc_pwm_data imx51_mxc_pwm_data[] __initconst = ;
struct platform_device *__init imx_add_mxc_pwm(
const struct imx_mxc_pwm_data *data)
