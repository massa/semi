
install: all
	cp semi ~/.usr/bin

all: semi

uninstall: clean
	-rm ~/.usr/bin/semi

clean:
	-rm semi


