#define bright(COLOR) BRT##COLOR = (COLOR + 8)
enum { black, red, green, yellow, blue, magenta, cyan, white,
       bright(black), bright(red), bright(green), bright(yellow),
       bright(blue), bright(magenta), bright(cyan), bright(white),
       foreground = 256, background = 257};
#undef bright
#define bright(COLOR) (COLOR + 8)

#define dark_hard {                                                           \
  [black          ] = "#4b565c", [red            ] = "#e67e80",               \
  [green          ] = "#a7c080", [yellow         ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [magenta        ] = "#d699b6",               \
  [cyan           ] = "#83c092", [white          ] = "#d3c6aa",               \
  [bright(black)  ] = "#4b565c", [bright(red)    ] = "#e67e80",               \
  [bright(green)  ] = "#a7c080", [bright(yellow) ] = "#dbbc7f",               \
  [bright(blue)   ] = "#7fbbb3", [bright(magenta)] = "#d699b6",               \
  [bright(cyan)   ] = "#83c092", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#2b3339",                                              \
}

#define dark_medium {                                                         \
  [black          ] = "#4b565c", [red            ] = "#e67e80",               \
  [green          ] = "#a7c080", [yellow         ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [magenta        ] = "#d699b6",               \
  [cyan           ] = "#83c092", [white          ] = "#d3c6aa",               \
  [bright(black)  ] = "#4b565c", [bright(red)    ] = "#e67e80",               \
  [bright(green)  ] = "#a7c080", [bright(yellow) ] = "#dbbc7f",               \
  [bright(blue)   ] = "#7fbbb3", [bright(magenta)] = "#d699b6",               \
  [bright(cyan)   ] = "#83c092", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#2f383e",                                              \
}

#define dark_soft {                                                           \
  [black          ] = "#4b565c", [red            ] = "#e67e80",               \
  [green          ] = "#a7c080", [yellow         ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [magenta        ] = "#d699b6",               \
  [cyan           ] = "#83c092", [white          ] = "#d3c6aa",               \
  [bright(black)  ] = "#4b565c", [bright(red)    ] = "#e67e80",               \
  [bright(green)  ] = "#a7c080", [bright(yellow) ] = "#dbbc7f",               \
  [bright(blue)   ] = "#7fbbb3", [bright(magenta)] = "#d699b6",               \
  [bright(cyan)   ] = "#83c092", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#323d43",                                              \
}

#define light_hard {                                                          \
  [black          ] = "#5c6a72", [red            ] = "#f85552",               \
  [green          ] = "#8da101", [yellow         ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [magenta        ] = "#df69ba",               \
  [cyan           ] = "#35a77c", [white          ] = "#dfddc8",               \
  [bright(black)  ] = "#5c6a72", [bright(red)    ] = "#f85552",               \
  [bright(green)  ] = "#8da101", [bright(yellow) ] = "#dfa000",               \
  [bright(blue)   ] = "#3a94c5", [bright(magenta)] = "#df69ba",               \
  [bright(cyan)   ] = "#35a77c", [bright(white)  ] = "#dfddc8",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#fff9e8",                                              \
}

#define light_medium {                                                        \
  [black          ] = "#5c6a72", [red            ] = "#f85552",               \
  [green          ] = "#8da101", [yellow         ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [magenta        ] = "#df69ba",               \
  [cyan           ] = "#35a77c", [white          ] = "#dfddc8",               \
  [bright(black)  ] = "#5c6a72", [bright(red)    ] = "#f85552",               \
  [bright(green)  ] = "#8da101", [bright(yellow) ] = "#dfa000",               \
  [bright(blue)   ] = "#3a94c5", [bright(magenta)] = "#df69ba",               \
  [bright(cyan)   ] = "#35a77c", [bright(white)  ] = "#dfddc8",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#fdf6e3",                                              \
}

#define light_soft {                                                        \
  [black          ] = "#5c6a72", [red            ] = "#f85552",               \
  [green          ] = "#8da101", [yellow         ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [magenta        ] = "#df69ba",               \
  [cyan           ] = "#35a77c", [white          ] = "#dfddc8",               \
  [bright(black)  ] = "#5c6a72", [bright(red)    ] = "#f85552",               \
  [bright(green)  ] = "#8da101", [bright(yellow) ] = "#dfa000",               \
  [bright(blue)   ] = "#3a94c5", [bright(magenta)] = "#df69ba",               \
  [bright(cyan)   ] = "#35a77c", [bright(white)  ] = "#dfddc8",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#f8f0dc",                                              \
}

#define nord {                                                                \
  [black          ] = "#3b4252", [red            ] = "#bf616a",               \
  [green          ] = "#a3be8c", [yellow         ] = "#ebcb8b",               \
  [blue           ] = "#81a1c1", [magenta        ] = "#b48ead",               \
  [cyan           ] = "#88c0d0", [white          ] = "#e5e9f0",               \
  [bright(black)  ] = "#4c566a", [bright(red)    ] = "#bf616a",               \
  [bright(green)  ] = "#a3be8c", [bright(yellow) ] = "#ebcb8b",               \
  [bright(blue)   ] = "#81a1c1", [bright(magenta)] = "#b48ead",               \
  [bright(cyan)   ] = "#8fbcbb", [bright(white)  ] = "#eceff4",               \
  [255            ] =         0, [foreground     ] = "#d8dee9",               \
  [background     ] = "#2e3440",                                              \
}

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = dark_medium;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor, selection
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;
unsigned int selectionbg = 0;
unsigned int selectionfg = 256;
/* If 0 use selectionfg as foreground in order to have a uniform foreground-color */
/* Else if 1 keep original foreground-color of each cell => more colors :) */
static int ignoreselfg = 1;
