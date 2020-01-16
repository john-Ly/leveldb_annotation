#include <cassert>
#include <iostream>
#include "leveldb/db.h"
using std::cout;
using std::endl;

int main(void) {
    leveldb::DB *db = nullptr;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "./testdb", &db);
    assert(status.ok());

    std::string key = "name";
    std::string value = "alibaba";
    std::string get_value;

    // 写入 key1 -> value1
    leveldb::Status s = db->Put(leveldb::WriteOptions(), key, value);
    // 写入成功，就读取 key:people 对应的 value

    if (s.ok())
        s = db->Get(leveldb::ReadOptions(), "name", &get_value);

    // 读取成功就输出
    if (s.ok())
        cout << get_value << endl;
    else
        cout << s.ToString() << endl;

    delete db;
    return 0;
}
