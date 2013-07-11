CC?=		clang
PREFIX?=	/usr/local

all: examples

examples:
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -o bson-to-json bson-to-json.c $(PREFIX)/lib/libbson.a
	$(CC) -DBSON_BYTE_ORDER=1234 -Wall -Werror -I$(PREFIX)/include -o bson-validate bson-validate.c $(PREFIX)/lib/libbson.a

clean:
	rm -f bson-validate
	rm -f bson-to-json

