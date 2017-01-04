asm("\n"
"	.global nf_get_id,nf_call\n"
"nf_get_id:\n"
"	.short	0x7300\n"
"	rts\n"
"nf_call:\n"
"	.short	0x7301\n"
"	rts\n"
"1:	moveq.l	#0,%d0\n"
"	rts\n"
"	.section __ex_table,\"a\"\n"
"	.long	nf_get_id,1b\n"
"	.long	nf_call,1b\n"
"	.previous");
EXPORT_SYMBOL_GPL(nf_get_id);
EXPORT_SYMBOL_GPL(nf_call);
void nfprint(const char *fmt, ...)
static void nf_poweroff(void)
void nf_init(void)
