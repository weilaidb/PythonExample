struct zorro_prod_info ;
struct zorro_manuf_info ;
#define MANUF( manuf, name )		static char __manufstr_##manuf[] __initdata = name;
#define ENDMANUF()
#define PRODUCT( manuf, prod, name ) 	static char __prodstr_##manuf##prod[] __initdata = name;
#define MANUF( manuf, name )		static struct zorro_prod_info __prods_##manuf[] __initdata = ;
#define PRODUCT( manuf, prod, name )	,
static struct zorro_manuf_info __initdata zorro_manuf_list[] = ;
#define MANUFS (sizeof(zorro_manuf_list)/sizeof(struct zorro_manuf_info))
void __init zorro_name_device(struct zorro_dev *dev)
void __init zorro_name_device(struct zorro_dev *dev)
