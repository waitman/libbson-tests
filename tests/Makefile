CC?=		clang
PREFIX?=	/usr/local
CFLAGS?=	-O2

all: tests

tests:
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-clock test-bson-clock.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-error test-bson-error.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-iter test-bson-iter.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -DBSON_COMPILATION -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-json test-bson-json.c $(PREFIX)/lib/libbson.a
	$(CC) -pthread -DBSON_BYTE_ORDER=1234 -DBSON_COMPILATION -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-oid test-bson-oid.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-reader test-bson-reader.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -DBSON_COMPILATION -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-string test-bson-string.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-utf8 test-bson-utf8.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson-writer test-bson-writer.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -DBSON_COMPILATION -Wall -Werror -I$(PREFIX)/include -I./ -o test-bson test-bson.c $(PREFIX)/lib/libbson.a

clean:
	rm -f test-bson-clock
	rm -f test-bson-error
	rm -f test-bson-iter
	rm -f test-bson-json
	rm -f test-bson-oid
	rm -f test-bson-reader
	rm -f test-bson-string
	rm -f test-bson-utf8
	rm -f test-bson-writer
	rm -f test-bson
	rm -f *.core

run:

	./test-bson-clock
	:
	./test-bson-error
	:
	./test-bson-iter
	:
	./test-bson-json
	:
	./test-bson-oid
	:
	./test-bson-reader
	:
	./test-bson-string
	:
	./test-bson-utf8
	:
	./test-bson-writer
	:
	./test-bson

