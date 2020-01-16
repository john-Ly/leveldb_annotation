CC=clang++
LIBS=../build/libleveldb.a
CPPFLAGS=-I ../build/include -I ../include -I .. -std=c++11 -g -DLEVELDB_PLATFORM_POSIX -DLEVELDB_HAS_PORT_CONFIG_H
LDFLAGS=-lpthread -lsnappy

simple_test:simple_test.cc
	$(CXX) -o $@ $< $(LIBS) $(CPPFLAGS) $(LDFLAGS)

log_writer_test:log_writer_test.cc
	$(CXX) -o $@ $< $(LIBS) $(CPPFLAGS) $(LDFLAGS)

log_writer_blob_test:log_writer_blob_test.cc
	$(CXX) -o $@ $< $(LIBS) $(CPPFLAGS) $(LDFLAGS)
