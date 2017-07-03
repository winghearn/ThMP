#pragma once
#ifndef TH12_H
#define TH12_H

#define TH12_TRACK_NUMBER 18

const std::map<int, std::string> nameMap_TH12 = {
    {1, "th12_01.wav"},
    {2, "th12_00.wav"},
    {3, "th12_02.wav"},
    {4, "th12_04.wav"},
    {5, "th12_05.wav"},
    {6, "th12_07.wav"},
    {7, "th12_08.wav"},
    {8, "th12_09.wav"},
    {9, "th12_10.wav"},
    {10, "th12_13.wav"},
    {11, "th12_14.wav"},
    {12, "th12_16.wav"},
    {13, "th12_17.wav"},
    {14, "th12_18.wav"},
    {15, "th12_19.wav"},
    {16, "th12_20.wav"},
    {17, "th12_21.wav"},
    {18, "th10_17.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH12 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0xF8040},
    {std::make_pair(1, "TOTAL_SIZE"), 0xA02000},

    {std::make_pair(2, "INTRO_OFFSET"), 0xA02010},
    {std::make_pair(2, "INTRO_SIZE"), 0x24F900},
    {std::make_pair(2, "TOTAL_SIZE"), 0x10E5F80},

    {std::make_pair(3, "INTRO_OFFSET"), 0x1AE7F90},
    {std::make_pair(3, "INTRO_SIZE"), 0x2B7E00},
    {std::make_pair(3, "TOTAL_SIZE"), 0x1014100},

    {std::make_pair(4, "INTRO_OFFSET"), 0x2AFC090},
    {std::make_pair(4, "INTRO_SIZE"), 0x89000},
    {std::make_pair(4, "TOTAL_SIZE"), 0x1301A00},

    {std::make_pair(5, "INTRO_OFFSET"), 0x3DFDA90},
    {std::make_pair(5, "INTRO_SIZE"), 0x24F500},
    {std::make_pair(5, "TOTAL_SIZE"), 0x1741300},

    {std::make_pair(6, "INTRO_OFFSET"), 0x553ED90},
    {std::make_pair(6, "INTRO_SIZE"), 0x12E300},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1676B00},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6BB5890},
    {std::make_pair(7, "INTRO_SIZE"), 0x14C400},
    {std::make_pair(7, "TOTAL_SIZE"), 0x125C200},

    {std::make_pair(8, "INTRO_OFFSET"), 0x7E11A90},
    {std::make_pair(8, "INTRO_SIZE"), 0x9B000},
    {std::make_pair(8, "TOTAL_SIZE"), 0x182B600},

    {std::make_pair(9, "INTRO_OFFSET"), 0x963D090},
    {std::make_pair(9, "INTRO_SIZE"), 0x173380},
    {std::make_pair(9, "TOTAL_SIZE"), 0x15A3480},

    {std::make_pair(10, "INTRO_OFFSET"), 0xABE0510},
    {std::make_pair(10, "INTRO_SIZE"), 0x31CA00},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1DB6C00},

    {std::make_pair(11, "INTRO_OFFSET"), 0xC997110},
    {std::make_pair(11, "INTRO_SIZE"), 0x4F0300},
    {std::make_pair(11, "TOTAL_SIZE"), 0x2349980},

    {std::make_pair(12, "INTRO_OFFSET"), 0xECE0A90},
    {std::make_pair(12, "INTRO_SIZE"), 0x8D180},
    {std::make_pair(12, "TOTAL_SIZE"), 0x1129880},

    {std::make_pair(13, "INTRO_OFFSET"), 0xFE0A310},
    {std::make_pair(13, "INTRO_SIZE"), 0x2C96F4},
    {std::make_pair(13, "TOTAL_SIZE"), 0x26A9BF8},

    {std::make_pair(14, "INTRO_OFFSET"), 0x124B3F08},
    {std::make_pair(14, "INTRO_SIZE"), 0x13B000},
    {std::make_pair(14, "TOTAL_SIZE"), 0x1F23800},

    {std::make_pair(15, "INTRO_OFFSET"), 0x143D7708},
    {std::make_pair(15, "INTRO_SIZE"), 0x10D400},
    {std::make_pair(15, "TOTAL_SIZE"), 0x1F46000},

    {std::make_pair(16, "INTRO_OFFSET"), 0x1631D708},
    {std::make_pair(16, "INTRO_SIZE"), 0x10C430},
    {std::make_pair(16, "TOTAL_SIZE"), 0x91FF80},

    {std::make_pair(17, "INTRO_OFFSET"), 0x16C3D688},
    {std::make_pair(17, "INTRO_SIZE"), 0xE4EC0},
    {std::make_pair(17, "TOTAL_SIZE"), 0x1338B20},

    {std::make_pair(18, "INTRO_OFFSET"), 0x17F761A8},
    {std::make_pair(18, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(18, "TOTAL_SIZE"), 0x66DCC0}
};

#endif