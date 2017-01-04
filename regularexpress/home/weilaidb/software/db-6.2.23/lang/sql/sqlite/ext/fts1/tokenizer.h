#define _TOKENIZER_H_
typedef struct sqlite3_tokenizer sqlite3_tokenizer;
typedef struct sqlite3_tokenizer_cursor sqlite3_tokenizer_cursor;
typedef struct sqlite3_tokenizer_module sqlite3_tokenizer_module;
struct sqlite3_tokenizer_module ;
struct sqlite3_tokenizer ;
struct sqlite3_tokenizer_cursor ;
void get_simple_tokenizer_module(sqlite3_tokenizer_module **ppModule);
