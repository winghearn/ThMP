#pragma once
#ifndef TH14_H
#define TH14_H

#define TH14_TRACK_NUMBER 18

const std::map<int, std::string> nameMap_TH14 = {
    {1, "th14_01.wav"},
    {2, "th14_02.wav"},
    {3, "th14_03.wav"},
    {4, "th14_04.wav"},
    {5, "th14_05.wav"},
    {6, "th14_06.wav"},
    {7, "th14_07.wav"},
    {8, "th14_09.wav"},
    {9, "th14_10.wav"},
    {10, "th14_11.wav"},
    {11, "th14_12.wav"},
    {12, "th14_14.wav"},
    {13, "th14_15.wav"},
    {14, "th14_18.wav"},
    {15, "th14_19.wav"},
    {16, "th14_16.wav"},
    {17, "th14_17.wav"},
    {18, "th128_08.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH14 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x28ADD0},
    {std::make_pair(1, "TOTAL_SIZE"), 0x13D2F60},

    {std::make_pair(2, "INTRO_OFFSET"), 0x13D2F70},
    {std::make_pair(2, "INTRO_SIZE"), 0x15D8C0},
    {std::make_pair(2, "TOTAL_SIZE"), 0xF92900},

    {std::make_pair(3, "INTRO_OFFSET"), 0x2365870},
    {std::make_pair(3, "INTRO_SIZE"), 0x65180},
    {std::make_pair(3, "TOTAL_SIZE"), 0xF13000},

    {std::make_pair(4, "INTRO_OFFSET"), 0x3278870},
    {std::make_pair(4, "INTRO_SIZE"), 0x292480},
    {std::make_pair(4, "TOTAL_SIZE"), 0x1128A70},

    {std::make_pair(5, "INTRO_OFFSET"), 0x43A12E0},
    {std::make_pair(5, "INTRO_SIZE"), 0x5A130},
    {std::make_pair(5, "TOTAL_SIZE"), 0x12311E0},

    {std::make_pair(6, "INTRO_OFFSET"), 0x55D24C0},
    {std::make_pair(6, "INTRO_SIZE"), 0xF02F0},
    {std::make_pair(6, "TOTAL_SIZE"), 0x185C590},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6E2EA50},
    {std::make_pair(7, "INTRO_SIZE"), 0x23CF40},
    {std::make_pair(7, "TOTAL_SIZE"), 0x11D2280},

    {std::make_pair(8, "INTRO_OFFSET"), 0x8000CD0},
    {std::make_pair(8, "INTRO_SIZE"), 0x6F17F0},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1F1DE50},

    {std::make_pair(9, "INTRO_OFFSET"), 0x9F1EB20},
    {std::make_pair(9, "INTRO_SIZE"), 0x5240E0},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1833240},

    {std::make_pair(10, "INTRO_OFFSET"), 0xB751D60},
    {std::make_pair(10, "INTRO_SIZE"), 0x37DEC8},
    {std::make_pair(10, "TOTAL_SIZE"), 0x18C6020},

    {std::make_pair(11, "INTRO_OFFSET"), 0xD017D80},
    {std::make_pair(11, "INTRO_SIZE"), 0xE2140},
    {std::make_pair(11, "TOTAL_SIZE"), 0x1614750},

    {std::make_pair(12, "INTRO_OFFSET"), 0xE62C4D0},
    {std::make_pair(12, "INTRO_SIZE"), 0x32A900},
    {std::make_pair(12, "TOTAL_SIZE"), 0x1135500},

    {std::make_pair(13, "INTRO_OFFSET"), 0xF7619D0},
    {std::make_pair(13, "INTRO_SIZE"), 0x11B800},
    {std::make_pair(13, "TOTAL_SIZE"), 0x2687380},

    {std::make_pair(14, "INTRO_OFFSET"), 0x13915CF0},
    {std::make_pair(14, "INTRO_SIZE"), 0x1C0D60},
    {std::make_pair(14, "TOTAL_SIZE"), 0x18C06C0},

    {std::make_pair(15, "INTRO_OFFSET"), 0x151D63B0},
    {std::make_pair(15, "INTRO_SIZE"), 0x26D4C0},
    {std::make_pair(15, "TOTAL_SIZE"), 0x2322D00},

    {std::make_pair(16, "INTRO_OFFSET"), 0x11DE8D50},
    {std::make_pair(16, "INTRO_SIZE"), 0x80500},
    {std::make_pair(16, "TOTAL_SIZE"), 0xE3EBA0},

    {std::make_pair(17, "INTRO_OFFSET"), 0x12C278F0},
    {std::make_pair(17, "INTRO_SIZE"), 0x2FA840},
    {std::make_pair(17, "TOTAL_SIZE"), 0xCEE400},

    {std::make_pair(18, "INTRO_OFFSET"), 0x174F90B0},
    {std::make_pair(18, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(18, "TOTAL_SIZE"), 0x66DCC0}
};

#endif