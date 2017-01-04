typedef struct sqlite3_bfile sqlite3_bfile;
SQLITE_API int sqlite3_column_bfile(
sqlite3_stmt *pStmt,
int iCol,
sqlite3_bfile **ppBfile
);
SQLITE_API int sqlite3_bfile_open(
sqlite3_bfile *pBfile
);
SQLITE_API int sqlite3_bfile_close(
sqlite3_bfile *pBfile
);
SQLITE_API int sqlite3_bfile_is_open(
sqlite3_bfile *pBfile,
int *open
);
SQLITE_API int sqlite3_bfile_read(
sqlite3_bfile *pBfile,
void *z,
int nSize,
off_t iOffset,
int *nRead
);
SQLITE_API int sqlite3_bfile_file_exists(
sqlite3_bfile *pBfile,
int *exist
);
SQLITE_API int sqlite3_bfile_size(
sqlite3_bfile *pBfile,
off_t *size
);
SQLITE_API int sqlite3_bfile_final(
sqlite3_bfile *pBfile
);
