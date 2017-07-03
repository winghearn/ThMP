#pragma once
#ifndef TH10_H
#define TH10_H

#define TH10_TRACK_NUMBER 18

const std::map<int, std::string> nameMap_TH10 = {
    {1, "th10_02.wav"},
    {2, "th10_00.wav"},
    {3, "th10_01.wav"},
    {4, "th10_03.wav"},
    {5, "th10_04.wav"},
    {6, "th10_05.wav"},
    {7, "th10_06.wav"},
    {8, "th10_07.wav"},
    {9, "th10_08.wav"},
    {10, "th10_09.wav"},
    {11, "th10_10.wav"},
    {12, "th10_11.wav"},
    {13, "th10_12.wav"}, 
    {14, "th10_15.wav"},
    {15, "th10_16.wav"},
    {16, "th10_13.wav"},
    {17, "th10_14.wav"},
    {18, "th10_17.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH10 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x3C3000},
    {std::make_pair(1, "TOTAL_SIZE"), 0xE2FA00},

    {std::make_pair(2, "INTRO_OFFSET"), 0xE2FA10},
    {std::make_pair(2, "INTRO_SIZE"), 0x297C00},
    {std::make_pair(2, "TOTAL_SIZE"), 0x16E4800},

    {std::make_pair(3, "INTRO_OFFSET"), 0x2514210},
    {std::make_pair(3, "INTRO_SIZE"), 0x3B600},
    {std::make_pair(3, "TOTAL_SIZE"), 0x781000},

    {std::make_pair(4, "INTRO_OFFSET"), 0x2C95210},
    {std::make_pair(4, "INTRO_SIZE"), 0x9F200},
    {std::make_pair(4, "TOTAL_SIZE"), 0x146BC00},

    {std::make_pair(5, "INTRO_OFFSET"), 0x4100E10},
    {std::make_pair(5, "INTRO_SIZE"), 0x7CA00},
    {std::make_pair(5, "TOTAL_SIZE"), 0x11CA600},

    {std::make_pair(6, "INTRO_OFFSET"), 0x52CB410},
    {std::make_pair(6, "INTRO_SIZE"), 0x300000},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1EAB600},

    {std::make_pair(7, "INTRO_OFFSET"), 0x7176A10},
    {std::make_pair(7, "INTRO_SIZE"), 0x1AA800},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1898500},

    {std::make_pair(8, "INTRO_OFFSET"), 0x8A0EF10},
    {std::make_pair(8, "INTRO_SIZE"), 0x1A1000},
    {std::make_pair(8, "TOTAL_SIZE"), 0x2252800},

    {std::make_pair(9, "INTRO_OFFSET"), 0xAC61710},
    {std::make_pair(9, "INTRO_SIZE"), 0x193800},
    {std::make_pair(9, "TOTAL_SIZE"), 0xE12E00},

    {std::make_pair(10, "INTRO_OFFSET"), 0xBA74510},
    {std::make_pair(10, "INTRO_SIZE"), 0x82000},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1EC9A00},

    {std::make_pair(11, "INTRO_OFFSET"), 0xD93DF10},
    {std::make_pair(11, "INTRO_SIZE"), 0x272400},
    {std::make_pair(11, "TOTAL_SIZE"), 0x1DF9D00},

    {std::make_pair(12, "INTRO_OFFSET"), 0xF737C10},
    {std::make_pair(12, "INTRO_SIZE"), 0x218800},
    {std::make_pair(12, "TOTAL_SIZE"), 0xB61100},

    {std::make_pair(13, "INTRO_OFFSET"), 0x10298D10},
    {std::make_pair(13, "INTRO_SIZE"), 0x4D9B00},
    {std::make_pair(13, "TOTAL_SIZE"), 0x1B65000},

    {std::make_pair(14, "INTRO_OFFSET"), 0x11DFDD10},
    {std::make_pair(14, "INTRO_SIZE"), 0x65100},
    {std::make_pair(14, "TOTAL_SIZE"), 0x21BCB80},

    {std::make_pair(15, "INTRO_OFFSET"), 0x13FBA890},
    {std::make_pair(15, "INTRO_SIZE"), 0x0D7220},
    {std::make_pair(15, "TOTAL_SIZE"), 0x1D07640},

    {std::make_pair(16, "INTRO_OFFSET"), 0x15CC1ED0},
    {std::make_pair(16, "INTRO_SIZE"), 0x7A2C00},
    {std::make_pair(16, "TOTAL_SIZE"), 0xEB5200},

    {std::make_pair(17, "INTRO_OFFSET"), 0x16B770D0},
    {std::make_pair(17, "INTRO_SIZE"), 0xA9DA04},
    {std::make_pair(17, "TOTAL_SIZE"), 0xF309A4},

    {std::make_pair(18, "INTRO_OFFSET"), 0x17AA7A74},
    {std::make_pair(18, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(18, "TOTAL_SIZE"), 0x66DCC0}
};

#endif