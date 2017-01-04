#define imx_imx_keypad_data_entry_single(soc, _size)			\
const struct imx_imx_keypad_data imx21_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX21, SZ_16);
const struct imx_imx_keypad_data imx25_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX25, SZ_16K);
const struct imx_imx_keypad_data imx27_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX27, SZ_16);
const struct imx_imx_keypad_data imx31_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX31, SZ_16);
const struct imx_imx_keypad_data imx35_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX35, SZ_16);
const struct imx_imx_keypad_data imx51_imx_keypad_data __initconst =
imx_imx_keypad_data_entry_single(MX51, SZ_16);
struct platform_device *__init imx_add_imx_keypad(
const struct imx_imx_keypad_data *data,
const struct matrix_keymap_data *pdata)
