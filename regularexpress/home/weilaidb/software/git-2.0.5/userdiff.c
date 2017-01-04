static struct userdiff_driver *drivers;
static int ndrivers;
static int drivers_alloc;
#define PATTERNS(name, pattern, word_regex)			\
#define IPATTERN(name, pattern, word_regex)			\
static struct userdiff_driver builtin_drivers[] = {
IPATTERN("ada",
"!^(.*[ \t])?(is[ \t]+new|renames|is[ \t]+separate)([ \t].*)?$\n"
"!^[ \t]*with[ \t].*$\n"
"^[ \t]*((procedure|function)[ \t]+.*)$\n"
"^[ \t]*((package|protected|task)[ \t]+.*)$",
"[a-zA-Z][a-zA-Z0-9_]*"
"|[-+]?[0-9][0-9#_.aAbBcCdDeEfF]*([eE][+-]?[0-9_]+)?"
"|=>|\\.\\.|\\*\\*|:=|/=|>=|<=|<<|>>|<>"),
IPATTERN("fortran",
"!^([C*]|[ \t]*!)\n"
"!^[ \t]*MODULE[ \t]+PROCEDURE[ \t]\n"
"^[ \t]*((END[ \t]+)?(PROGRAM|MODULE|BLOCK[ \t]+DATA"
"|([^'\" \t]+[ \t]+)*(SUBROUTINE|FUNCTION))[ \t]+[A-Z].*)$",
"[a-zA-Z][a-zA-Z0-9_]*"
"|\\.([Ee][Qq]|[Nn][Ee]|[Gg][TtEe]|[Ll][TtEe]|[Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee]|[Aa][Nn][Dd]|[Oo][Rr]|[Nn]?[Ee][Qq][Vv]|[Nn][Oo][Tt])\\."
"|[-+]?[0-9.]+([AaIiDdEeFfLlTtXx][Ss]?[-+]?[0-9.]*)?(_[a-zA-Z0-9][a-zA-Z0-9_]*)?"
"|
PATTERNS("html", "^[ \t]*(<[Hh][1-6][ \t].*>.*)$",
"[^<>= \t]+"),
PATTERNS("java",
"!^[ \t]*(catch|do|for|if|instanceof|new|return|switch|throw|while)\n"
"^[ \t]*(([A-Za-z_][A-Za-z_0-9]*[ \t]+)+[A-Za-z_][A-Za-z_0-9]*[ \t]*\\([^;]*)$",
"[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+[fFlL]?|0[xXbB]?[0-9a-fA-F]+[lL]?"
"|[-+*/<>%&^|=!]="
"|--|\\+\\+|<<=?|>>>?=?|&&|\\|\\|"),
PATTERNS("matlab",
"^[[:space:]]*((classdef|function)[[:space:]].*)$|^%%[[:space:]].*$",
"[a-zA-Z_][a-zA-Z0-9_]*|[-+0-9.e]+|[=~<>]=|\\.[*/\\^']|\\|\\||&&"),
PATTERNS("objc",
"!^[ \t]*(do|for|if|else|return|switch|while)\n"
"^[ \t]*([-+][ \t]*\\([ \t]*[A-Za-z_][A-Za-z_0-9* \t]*\\)[ \t]*[A-Za-z_].*)$\n"
"^[ \t]*(([A-Za-z_][A-Za-z_0-9]*[ \t]+)+[A-Za-z_][A-Za-z_0-9]*[ \t]*\\([^;]*)$\n"
"^(@(implementation|interface|protocol)[ \t].*)$",
"[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+[fFlL]?|0[xXbB]?[0-9a-fA-F]+[lL]?"
"|[-+*/<>%&^|=!]=|--|\\+\\+|<<=?|>>=?|&&|\\|\\||::|->"),
PATTERNS("pascal",
"^(((class[ \t]+)?(procedure|function)|constructor|destructor|interface|"
"implementation|initialization|finalization)[ \t]*.*)$"
"\n"
"^(.*=[ \t]*(class|record).*)$",
"[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+|0[xXbB]?[0-9a-fA-F]+"
"|<>|<=|>=|:=|\\.\\."),
PATTERNS("perl",
"^package .*\n"
"^sub [[:alnum:]_':]+[ \t]*"
"(\\([^)]*\\)[ \t]*)?"
"(:[^;#]*)?"
"(\\{[ \t]*)?"
"(#.*)?$\n"
"^(BEGIN|END|INIT|CHECK|UNITCHECK|AUTOLOAD|DESTROY)[ \t]*"
"(\\{[ \t]*)?"
"(#.*)?$\n"
"^=head[0-9] .*",
"[[:alpha:]_'][[:alnum:]_']*"
"|0[xb]?[0-9a-fA-F_]*"
"|[0-9a-fA-F_]+(\\.[0-9a-fA-F_]+)?([eE][-+]?[0-9_]+)?"
"|=>|-[rwxoRWXOezsfdlpSugkbctTBMAC>]|~~|::"
"|&&=|\\|\\|=|
"|&&|\\|\\||
"|[-+*/%.^&<>=!|]="
"|=~|!~"
"|<<|<>|<=>|>>"),
PATTERNS("php",
"^[\t ]*(((public|protected|private|static)[\t ]+)*function.*)$\n"
"^[\t ]*(class.*)$",
"[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+|0[xXbB]?[0-9a-fA-F]+"
"|[-+*/<>%&^|=!.]=|--|\\+\\+|<<=?|>>=?|===|&&|\\|\\||::|->"),
PATTERNS("python", "^[ \t]*((class|def)[ \t].*)$",
"[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+[jJlL]?|0[xX]?[0-9a-fA-F]+[lL]?"
"|[-+*/<>%&^|=!]=|
PATTERNS("ruby", "^[ \t]*((class|module|def)[ \t].*)$",
"(@|@@|\\$)?[a-zA-Z_][a-zA-Z0-9_]*"
"|[-+0-9.e]+|0[xXbB]?[0-9a-fA-F]+|\\?(\\\\C-)?(\\\\M-)?."
"|
PATTERNS("bibtex", "(@[a-zA-Z][ \t]*\\{~%]*).*$",
"[=\"]|[^=\" \t]+"),
PATTERNS("tex", "^(\\\\((sub)*section|chapter|part)\\*\\;
#undef PATTERNS
#undef IPATTERN
static struct userdiff_driver driver_true = ;
static struct userdiff_driver driver_false = ;
static struct userdiff_driver *userdiff_find_by_namelen(const char *k, int len)
static int parse_funcname(struct userdiff_funcname *f, const char *k,
const char *v, int cflags)
static int parse_tristate(int *b, const char *k, const char *v)
static int parse_bool(int *b, const char *k, const char *v)
int userdiff_config(const char *k, const char *v)
struct userdiff_driver *userdiff_find_by_name(const char *name)
struct userdiff_driver *userdiff_find_by_path(const char *path)
struct userdiff_driver *userdiff_get_textconv(struct userdiff_driver *driver)
