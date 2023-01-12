#define bright(COLOR) BRT##COLOR = (COLOR + 8)
enum { black, red, green, yellow, blue, magenta, cyan, white,
       bright(black), bright(red), bright(green), bright(yellow),
       bright(blue), bright(magenta), bright(cyan), bright(white),
       foreground = 256, background = 257};
#undef bright
#define bright(COLOR) (COLOR + 8)

// {{{ everforest
// {{{ dark hard
#define dark_hard {                                                           \
  [black          ] = "#272e33", [bright(black)  ] = "#2e383c",               \
  [red            ] = "#e67e80", [bright(red)    ] = "#e67e80",               \
  [green          ] = "#a7c080", [bright(green)  ] = "#a7c080",               \
  [yellow         ] = "#dbbc7f", [bright(yellow) ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [bright(blue)   ] = "#7fbbb3",               \
  [magenta        ] = "#d699b6", [bright(magenta)] = "#d699b6",               \
  [cyan           ] = "#83c092", [bright(cyan)   ] = "#83c092",               \
  [white          ] = "#d3c6aa", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#272e33",                                              \
}
// }}}
// {{{ dark medium
#define dark_medium {                                                         \
  [black          ] = "#232a2e", [bright(black)  ] = "#343f44",               \
  [red            ] = "#e67e80", [bright(red)    ] = "#e67e80",               \
  [green          ] = "#a7c080", [bright(green)  ] = "#a7c080",               \
  [yellow         ] = "#dbbc7f", [bright(yellow) ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [bright(blue)   ] = "#7fbbb3",               \
  [magenta        ] = "#d699b6", [bright(magenta)] = "#d699b6",               \
  [cyan           ] = "#83c092", [bright(cyan)   ] = "#83c092",               \
  [white          ] = "#d3c6aa", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#2d353b",                                              \
}
// }}}
// {{{ dark soft
#define dark_soft {                                                           \
  [black          ] = "#333c43", [bright(black)  ] = "#3a464c",               \
  [red            ] = "#e67e80", [bright(red)    ] = "#e67e80",               \
  [green          ] = "#a7c080", [bright(green)  ] = "#a7c080",               \
  [yellow         ] = "#dbbc7f", [bright(yellow) ] = "#dbbc7f",               \
  [blue           ] = "#7fbbb3", [bright(blue)   ] = "#7fbbb3",               \
  [magenta        ] = "#d699b6", [bright(magenta)] = "#d699b6",               \
  [cyan           ] = "#83c092", [bright(cyan)   ] = "#83c092",               \
  [white          ] = "#d3c6aa", [bright(white)  ] = "#d3c6aa",               \
  [255            ] =         0, [foreground     ] = "#d3c6aa",               \
  [background     ] = "#323d43",                                              \
}
// }}}
// {{{ light hard
#define light_hard {                                                          \
  [black          ] = "#1e2326", [bright(black)  ] = "#1e2326",               \
  [red            ] = "#f85552", [bright(red)    ] = "#f85552",               \
  [green          ] = "#8da101", [bright(green)  ] = "#8da101",               \
  [yellow         ] = "#dfa000", [bright(yellow) ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [bright(blue)   ] = "#3a94c5",               \
  [magenta        ] = "#df69ba", [bright(magenta)] = "#df69ba",               \
  [cyan           ] = "#35a77c", [bright(cyan)   ] = "#35a77c",               \
  [white          ] = "#fffbef", [bright(white)  ] = "#f8f5e4",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#fffbef",                                              \
}
// }}}
// {{{ light medium
#define light_medium {                                                        \
  [black          ] = "#1e2326", [bright(black)  ] = "#1e2326",               \
  [red            ] = "#f85552", [bright(red)    ] = "#f85552",               \
  [green          ] = "#8da101", [bright(green)  ] = "#8da101",               \
  [yellow         ] = "#dfa000", [bright(yellow) ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [bright(blue)   ] = "#3a94c5",               \
  [magenta        ] = "#df69ba", [bright(magenta)] = "#df69ba",               \
  [cyan           ] = "#35a77c", [bright(cyan)   ] = "#35a77c",               \
  [white          ] = "#fdf6e3", [bright(white)  ] = "#f4f0d9",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#fdf6e3",                                              \
}
// }}}
// {{{ light soft
#define light_soft {                                                        \
  [black          ] = "#1e2326", [bright(black)  ] = "#1e2326",               \
  [red            ] = "#f85552", [bright(red)    ] = "#f85552",               \
  [green          ] = "#8da101", [bright(green)  ] = "#8da101",               \
  [yellow         ] = "#dfa000", [bright(yellow) ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [bright(blue)   ] = "#3a94c5",               \
  [magenta        ] = "#df69ba", [bright(magenta)] = "#df69ba",               \
  [cyan           ] = "#35a77c", [bright(cyan)   ] = "#35a77c",               \
  [white          ] = "#f8f0dc", [bright(white)  ] = "#eae4ca",               \
  [255            ] =         0, [foreground     ] = "#5c6a72",               \
  [background     ] = "#f3ead3",                                              \
}
// }}}
// }}}

// {{{ nord
#define nord {                                                                \
  [black          ] = "#5c6a72", [red            ] = "#f85552",               \
  [green          ] = "#8da101", [yellow         ] = "#dfa000",               \
  [blue           ] = "#3a94c5", [magenta        ] = "#df69ba",               \
  [cyan           ] = "#35a77c", [white          ] = "#dfddc8",               \
  [bright(black)  ] = "#5c6a72", [bright(red)    ] = "#f85552",               \
  [bright(green)  ] = "#8da101", [bright(yellow) ] = "#dfa000",               \
  [bright(blue)   ] = "#3a94c5", [bright(magenta)] = "#df69ba",               \
  [bright(cyan)   ] = "#35a77c", [bright(white)  ] = "#dfddc8",               \
  [255            ] =         0, [foreground     ] = "#d8dee9",               \
  [background     ] = "#2e3440",                                              \
}
// }}}

// {{{ kanagawa
#define kanagawa {                                                            \
  [black          ] = "#2a2a37", [bright(black)  ] = "#363646",               \
  [red            ] = "#e46876", [bright(red)    ] = "#ff5d62",               \
  [green          ] = "#98bb6c", [bright(green)  ] = "#98bb6c",               \
  [yellow         ] = "#dca561", [bright(yellow) ] = "#dca561",               \
  [blue           ] = "#7e9cd8", [bright(blue)   ] = "#7e9cd8",               \
  [magenta        ] = "#d27e99", [bright(magenta)] = "#d27e99",               \
  [cyan           ] = "#7aa89f", [bright(cyan)   ] = "#7aa89f",               \
  [white          ] = "#dcd7ba", [bright(white)  ] = "#dcd7ba",               \
  [255            ] =         0, [foreground     ] = "#dcd7ba",               \
  [background     ] = "#1f1f28",                                              \
}
// }}}

/* be sure this corresponds with theme set below */
#define DARK

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = kanagawa;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor, selection
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;
#ifdef DARK
  unsigned int selectionbg = bright(black);
#else
  unsigned int selectionbg = bright(white);
#endif
unsigned int selectionfg = 256;
/* If 0 use selectionfg as foreground in order to have a uniform foreground-color */
/* Else if 1 keep original foreground-color of each cell => more colors :) */
static int ignoreselfg = 1;
