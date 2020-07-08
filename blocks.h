//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/Scripts/statusblocks/packages",				18000,		0	},
	{"", "~/Scripts/statusblocks/brigthness_new",		0,			11	},
	{"", "~/Scripts/statusblocks/volume_new",			0,			12	},
	{"", "~/Scripts/statusblocks/battery_new",			60,			0	},
	{"", "~/Scripts/statusblocks/temperature_new",		60,			0	},
	{"", "date '+%d/%m/%Y %H:%M'",						30,			0	},
	{"", "echo 'BB'",									0,			0	},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
