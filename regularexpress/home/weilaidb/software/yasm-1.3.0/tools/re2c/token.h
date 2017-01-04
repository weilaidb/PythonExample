#define	re2c_token_h
typedef struct Token  Token;
static void Token_init(Token *, SubStr, unsigned int);
static Token *Token_new(SubStr, unsigned int);
static void
Token_init(Token *r, SubStr t, unsigned int l)
static Token *
Token_new(SubStr t, unsigned int l)
