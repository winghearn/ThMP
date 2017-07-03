#pragma once
#ifndef TH143_H
#define TH143_H

#define TH143_TRACK_NUMBER 10

const std::map<int, std::string> nameMap_TH143 = {
    {1, "th143_01.wav"},
    {2, "th143_02.wav"},
    {3, "th143_05.wav"},
    {4, "th143_06.wav"},
    {5, "th143_07.wav"},
    {6, "th14_03.wav"},
    {7, "th14_12.wav"},
    {8, "th14_10.wav"},
    {9, "th125_6.wav"},
    {10, "th128_08.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH143 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x2C1F40},
    {std::make_pair(1, "TOTAL_SIZE"), 0x13FBEC0},

    {std::make_pair(2, "INTRO_OFFSET"), 0x13FBED0},
    {std::make_pair(2, "INTRO_SIZE"), 0x271200},
    {std::make_pair(2, "TOTAL_SIZE"), 0x1553180},

    {std::make_pair(3, "INTRO_OFFSET"), 0x294F050},
    {std::make_pair(3, "INTRO_SIZE"), 0x14B034},
    {std::make_pair(3, "TOTAL_SIZE"), 0xF6C980},

    {std::make_pair(4, "INTRO_OFFSET"), 0x38BB9D0},
    {std::make_pair(4, "INTRO_SIZE"), 0x254D10},
    {std::make_pair(4, "TOTAL_SIZE"), 0x1573C60},

    {std::make_pair(5, "INTRO_OFFSET"), 0x4E2F630},
    {std::make_pair(5, "INTRO_SIZE"), 0xC2B40},
    {std::make_pair(5, "TOTAL_SIZE"), 0x2177968},

    {std::make_pair(6, "INTRO_OFFSET"), 0x6FA6F98},
    {std::make_pair(6, "INTRO_SIZE"), 0x65180},
    {std::make_pair(6, "TOTAL_SIZE"), 0xF13000},

    {std::make_pair(7, "INTRO_OFFSET"), 0x7EB9F98},
    {std::make_pair(7, "INTRO_SIZE"), 0xE2140},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1614750},

    {std::make_pair(8, "INTRO_OFFSET"), 0x94CE6E8},
    {std::make_pair(8, "INTRO_SIZE"), 0x5240E0},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1833240},

    {std::make_pair(9, "INTRO_OFFSET"), 0xAD01928},
    {std::make_pair(9, "INTRO_SIZE"), 0x205AA0},
    {std::make_pair(9, "TOTAL_SIZE"), 0xE84E20},

    {std::make_pair(10, "INTRO_OFFSET"), 0xBB86748},
    {std::make_pair(10, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(10, "TOTAL_SIZE"), 0x66DC00}
};

#endif