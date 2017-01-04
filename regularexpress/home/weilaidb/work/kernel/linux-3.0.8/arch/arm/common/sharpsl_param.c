#define PARAM_BASE	0xe8ffc000
#define PARAM_BASE	0xa0000a00
#define MAGIC_CHG(a,b,c,d) ( ( d << 24 ) | ( c << 16 )  | ( b << 8 ) | a )
#define COMADJ_MAGIC	MAGIC_CHG('C','M','A','D')
#define UUID_MAGIC	MAGIC_CHG('U','U','I','D')
#define TOUCH_MAGIC	MAGIC_CHG('T','U','C','H')
#define AD_MAGIC	MAGIC_CHG('B','V','A','D')
#define PHAD_MAGIC	MAGIC_CHG('P','H','A','D')
struct sharpsl_param_info sharpsl_param;
EXPORT_SYMBOL(sharpsl_param);
void sharpsl_save_param(void)
