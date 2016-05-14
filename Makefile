libexecdir=/usr/local/libexec/htmlutils
programs=html li a

html: html.c
	$(CC) -o $@ $^

li: li.c util.c
	$(CC) -o $@ $^

a: a.c util.c
	$(CC) -o $@ $^

install:
	mkdir -p $(libexecdir)
	install $(programs) $(libexecdir)

