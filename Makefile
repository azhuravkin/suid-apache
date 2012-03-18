all:	index.cgi

index.cgi:	index.c
	gcc -Wall -o index.cgi index.c
	strip index.cgi
	chown root index.cgi
	chmod u+s index.cgi

clean:
	rm -f index.cgi
