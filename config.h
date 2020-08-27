//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
//	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",    "cat /tmp/recordingicon 2>/dev/null",	0,	9},
    {"",    "echo '¯ \\ _ (ツ) _ / ¯'"},

    {"",    "space.sh"},

    {"",    "echo "},
    {"",    "echo "},
    {"",    "echo 🎵"},
	{"",	"music",	1,	11},
    {"",    "space.sh"},

//	{"",	"pacpackages",	0,	8},
//    {"",    "space.sh"},

//	{"",	"news",		0,	6},
//   {"",    "space.sh"},

//	{"",	"crypto",	0,	13},
//  {"",    "space.sh"},

	{"",	"torrent",	20,	7},
    {"",    "space.sh"},

	{"",	"memory",	10,	14},
	{"",	"cpu",		10,	13},
    {"",    "space.sh"},

//    {"",	"moonphase",	18000,	5},
//    {"",    "space.sh"},

//    {"",	"weather",	18000,	5},
//    {"",    "space.sh"},

	{"",	"mailbox",	180,	12},
    {"",    "space.sh"},

//    {"",	"nettraf",	1,	16},
//    {"",    "space.sh"},

	{"",	"volume",	0,	10},
    {"",    "space.sh"},

	{"",	"battery | tr \'\n\' \' \'",	5,	3},
    {"",    "space.sh"},

	{"",	"internet",	5,	4},
    {"",    "space.sh"},

	{"",	"clock",	60,	1},
	{"",    "echo '🐧' "},
	{"",    "echo '🇧🇷' "},
	{"",    "echo '🐧' "},





//	{"",	"help-icon",	0,	15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '~';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
