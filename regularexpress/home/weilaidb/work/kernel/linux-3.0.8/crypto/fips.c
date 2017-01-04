int fips_enabled;
EXPORT_SYMBOL_GPL(fips_enabled);
static int fips_enable(char *str)
__setup("fips=", fips_enable);
