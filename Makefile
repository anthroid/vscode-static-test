.DEFAULT_GOAL := all

builddir = bin
srcdir = src
src = main.c api.c
bin = $(builddir)/$(notdir $(realpath .))

CC := gcc
LDFLAGS = 
CFLAGS = -Wall -c
OBJECTS = $(src:%.c=$(builddir)/%.o)

all: $(bin)

$(builddir)/%.o: %.c
	-mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

$(bin): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -rf $(builddir)

.PHONY: all clean
