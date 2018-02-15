bin_PROGRAMS = guiluurve
guiluurve_SOURCES = info.c
## Hardcoded paths - urgh! I must find how to pass CFLAGS in snapcraft.yaml...
guiluurve_CFLAGS = $(SDL_CFLAGS) -I$(SNAPCRAFT_STAGE)/usr/include/GUI -Wall -Wextra
guiluurve_LDADD = $(SDL_LIBS) -L$(SNAPCRAFT_STAGE)/usr/lib -lGUI
