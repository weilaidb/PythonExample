typedef struct  FIELD;
int	 code_source(void);
int	 code_header(void);
int	 desc_dump(void);
int	 desc_load(void);
char	*type_to_string(datatype);
int	 usage(void);
FILE	*cfp;
FILE	*ffp;
FILE	*hfp;
char	*progname;
int	 verbose;
u_int	 field_cnt;
FIELD	*fields;
int
main(int argc, char *argv[])
int
desc_load()
if (ferror(stdin))
return (0);
}
int
desc_dump()
int
code_header()
int
code_source()
char *
type_to_string(type)
datatype type;
int
usage()
