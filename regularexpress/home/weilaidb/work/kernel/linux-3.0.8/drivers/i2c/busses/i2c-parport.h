#define PORT_DATA	0
#define PORT_STAT	1
#define PORT_CTRL	2
struct lineop ;
struct adapter_parm ;
static const struct adapter_parm adapter_parm[] = ;
static int type = -1;
module_param(type, int, 0);
MODULE_PARM_DESC(type,
"Type of adapter:\n"
" 0 = Philips adapter\n"
" 1 = home brew teletext adapter\n"
" 2 = Velleman K8000 adapter\n"
" 3 = ELV adapter\n"
" 4 = ADM1032 evaluation board\n"
" 5 = ADM1025, ADM1030 and ADM1031 evaluation boards\n"
" 6 = Barco LPT->DVI (K5800236) adapter\n"
" 7 = One For All JP1 parallel port adapter\n"
);
