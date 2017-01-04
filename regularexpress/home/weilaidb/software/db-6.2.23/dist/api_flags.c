typedef struct  API;
API	**api_list, **api_end;
typedef struct  FLAG;
FLAG	**flag_list, **flag_end;
int	verbose;
char	*progname;
int	add_entry(char *, char *);
void	define_print(char *, u_int);
void	dump_api(void);
void	dump_flags(void);
int	flag_cmp_alpha(const void *, const void *);
int	flag_cmp_api_cnt(const void *, const void *);
int	generate_flags(void);
int	parse(void);
void	print_api_mask(void);
void	print_api_remainder(void);
void	print_flag_value(void);
int	syserr(void);
int	usage(void);
int
main(int argc, char *argv[])
int
parse()
int
add_entry(char *api_name, char *flag_name)
void
dump_api()
void
dump_flags()
int
flag_cmp_api_cnt(const void *a, const void *b)
int
generate_flags()
int
flag_cmp_alpha(const void *a, const void *b)
void
print_api_mask()
void
print_api_remainder()
void
print_flag_value()
void
define_print(char *name, u_int value)
int
syserr(void)
int
usage()
