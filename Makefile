
include $(GOROOT)/src/Make.$(GOARCH)

TARG=dystopia
CGOFILES=\
	 dystopia.go
CGO_LDFLAGS=tdwrapper.o -ltokyodystopia


CLEANFILES+=example

include $(GOROOT)/src/Make.pkg

%: tdwrapper.o install %.go
	$(GC) $*.go
	$(LD) -o $@ $*.$O

tdwrapper.o: tdwrapper.c
	gcc -fPIC -O2 -o tdwrapper.o -c tdwrapper.c





