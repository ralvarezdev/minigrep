#ifndef ANSI_CODES_H
#define ANSI_CODES_H

// 'x1b' is called ESC at the ASCII table, to customize the text color, we always start with a ESC
#define ANSI_START "\x1b"
// Control Sequence Introducer (CSI)
#define CSI "\x1b["

/*
Select Graphic Rendition Control Sequences
*/

// ANSI Code to reset the Text Format
#define ANSI_RESET "\x1b[0m"
// ANSI Code to set the text Bold
#define ANSI_BOLD "\x1b[1m"
// ANSI Code to Set a Slow Blink to the Text
#define ANSI_SLOW_BLINK "\x1b[5m"

#endif