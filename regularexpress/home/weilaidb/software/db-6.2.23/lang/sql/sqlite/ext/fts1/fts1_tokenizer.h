#define _FTS1_TOKENIZER_H_
typedef struct sqlite3_tokenizer sqlite3_tokenizer;
typedef struct sqlite3_tokenizer_cursor sqlite3_tokenizer_cursor;
typedef struct sqlite3_tokenizer_module sqlite3_tokenizer_module;
struct sqlite3_tokenizer_module ;
struct sqlite3_tokenizer ;
struct sqlite3_tokenizer_cursor ;
void sqlite3Fts1SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts1PorterTokenizerModule(sqlite3_tokenizer_module const**ppModule);