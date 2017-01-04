#if (__GNUC__ == 4 && __GNUC_MINOR__ >= 3) || __GNUC__ > 4
EXPORT_SYMBOL(memcpy);
EXPORT_SYMBOL(__memcpy);
EXPORT_SYMBOL(csum_partial);
