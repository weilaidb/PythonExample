struct imx_imx_sdma_data ;
#define imx_imx_sdma_data_entry_single(soc, _sdma_version, _cpu_name, _to_version)\
struct imx_imx_sdma_data imx25_imx_sdma_data __initconst =
imx_imx_sdma_data_entry_single(MX25, 1, "imx25", 0);
struct imx_imx_sdma_data imx31_imx_sdma_data __initdata =
imx_imx_sdma_data_entry_single(MX31, 1, "imx31", 0);
struct imx_imx_sdma_data imx35_imx_sdma_data __initdata =
imx_imx_sdma_data_entry_single(MX35, 2, "imx35", 0);
struct imx_imx_sdma_data imx51_imx_sdma_data __initconst =
imx_imx_sdma_data_entry_single(MX51, 2, "imx51", 0);
static struct platform_device __init __maybe_unused *imx_add_imx_sdma(
const struct imx_imx_sdma_data *data)
static struct platform_device __init __maybe_unused *imx_add_imx_dma(void)
static struct sdma_script_start_addrs addr_imx25_to1 = ;
static struct sdma_script_start_addrs addr_imx31_to1 = ;
static struct sdma_script_start_addrs addr_imx31_to2 = ;
static struct sdma_script_start_addrs addr_imx35_to1 = ;
static struct sdma_script_start_addrs addr_imx35_to2 = ;
static struct sdma_script_start_addrs addr_imx51 = ;
static int __init imxXX_add_imx_dma(void)
arch_initcall(imxXX_add_imx_dma);
