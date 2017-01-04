static struct snd_soc_card bf5xx_board;
static struct snd_soc_dai_link bf5xx_board_dai[] = ;
static struct snd_soc_card bf5xx_board = ;
static struct platform_device *bf5xx_board_snd_device;
static int __init bf5xx_board_init(void)
static void __exit bf5xx_board_exit(void)
module_init(bf5xx_board_init);
module_exit(bf5xx_board_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("ALSA SoC AD1980/1 BF5xx board (Obsolete)");
MODULE_LICENSE("GPL");
