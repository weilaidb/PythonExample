DbMultipleIterator::DbMultipleIterator(const Dbt &dbt)
: data_((u_int8_t*)dbt.get_data()),
p_((u_int32_t*)(data_ + dbt.get_ulen() - sizeof(u_int32_t)))
bool DbMultipleDataIterator::next(Dbt &data)
bool DbMultipleKeyDataIterator::next(Dbt &key, Dbt &data)
bool DbMultipleRecnoDataIterator::next(db_recno_t &recno, Dbt &data)
DbMultipleBuilder::DbMultipleBuilder(Dbt &dbt) : dbt_(dbt)
bool DbMultipleDataBuilder::append(void *dbuf, size_t dlen)
bool DbMultipleDataBuilder::reserve(void *&ddest, size_t dlen)
bool DbMultipleKeyDataBuilder::append(
void *kbuf, size_t klen, void *dbuf, size_t dlen)
bool DbMultipleKeyDataBuilder::reserve(
void *&kdest, size_t klen, void *&ddest, size_t dlen)
DbMultipleRecnoDataBuilder::DbMultipleRecnoDataBuilder(Dbt &dbt) : dbt_(dbt)
bool DbMultipleRecnoDataBuilder::append(
db_recno_t recno, void *dbuf, size_t dlen)
bool DbMultipleRecnoDataBuilder::reserve(
db_recno_t recno, void *&ddest, size_t dlen)
