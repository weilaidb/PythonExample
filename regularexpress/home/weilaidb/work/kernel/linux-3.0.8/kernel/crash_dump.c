unsigned long saved_max_pfn;
unsigned long long elfcorehdr_addr = ELFCORE_ADDR_MAX;
static int __init setup_elfcorehdr(char *arg)
early_param("elfcorehdr", setup_elfcorehdr);
