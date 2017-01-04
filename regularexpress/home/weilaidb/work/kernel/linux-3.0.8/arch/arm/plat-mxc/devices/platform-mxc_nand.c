#define imx_mxc_nand_data_entry_single(soc, _size)			\
#define imx_mxc_nandv3_data_entry_single(soc, _size)			\
const struct imx_mxc_nand_data imx21_mxc_nand_data __initconst =
imx_mxc_nand_data_entry_single(MX21, SZ_4K);
const struct imx_mxc_nand_data imx25_mxc_nand_data __initconst =
imx_mxc_nand_data_entry_single(MX25, SZ_8K);
const struct imx_mxc_nand_data imx27_mxc_nand_data __initconst =
imx_mxc_nand_data_entry_single(MX27, SZ_4K);
const struct imx_mxc_nand_data imx31_mxc_nand_data __initconst =
imx_mxc_nand_data_entry_single(MX31, SZ_4K);
const struct imx_mxc_nand_data imx35_mxc_nand_data __initconst =
imx_mxc_nand_data_entry_single(MX35, SZ_8K);
const struct imx_mxc_nand_data imx51_mxc_nand_data __initconst =
imx_mxc_nandv3_data_entry_single(MX51, SZ_16K);
struct platform_device *__init imx_add_mxc_nand(
const struct imx_mxc_nand_data *data,
const struct mxc_nand_platform_data *pdata)
