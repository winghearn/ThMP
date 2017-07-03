#pragma once
#ifndef TH16TR_H
#define TH16TR_H

#define TH16TR_TRACK_NUMBER 8

const std::map<int, std::string> nameMap_TH16TR = {
    {1, "th16_01.wav"},
    {2, "th16_02.wav"},
    {3, "th16_03.wav"},
    {4, "th16_04.wav"},
    {5, "th16_05.wav"},
    {6, "th16_06.wav"},
    {7, "th16_07.wav"},
    {8, "th128_08.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH16TR = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},       
    {std::make_pair(1, "INTRO_SIZE"), 0x11EC00},
    {std::make_pair(1, "TOTAL_SIZE"), 0xED7800},

    {std::make_pair(2, "INTRO_OFFSET"), 0xED7810},
    {std::make_pair(2, "INTRO_SIZE"), 0x9AB70},
    {std::make_pair(2, "TOTAL_SIZE"), 0x1202CC8},

    {std::make_pair(3, "INTRO_OFFSET"), 0x20DA4D8},
    {std::make_pair(3, "INTRO_SIZE"), 0x105700},
    {std::make_pair(3, "TOTAL_SIZE"), 0x1253180},

    {std::make_pair(4, "INTRO_OFFSET"), 0x332D658},
    {std::make_pair(4, "INTRO_SIZE"), 0x112900},
    {std::make_pair(4, "TOTAL_SIZE"), 0x13BED80},

    {std::make_pair(5, "INTRO_OFFSET"), 0x46EC3D8},
    {std::make_pair(5, "INTRO_SIZE"), 0x22E200},
    {std::make_pair(5, "TOTAL_SIZE"), 0x114AD00},

    {std::make_pair(6, "INTRO_OFFSET"), 0x58370D8},
    {std::make_pair(6, "INTRO_SIZE"), 0x8B9F0},
    {std::make_pair(6, "TOTAL_SIZE"), 0x15C2E78},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6DF9F50},
    {std::make_pair(7, "INTRO_SIZE"), 0x7243D4},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1640ABC},

    {std::make_pair(8, "INTRO_OFFSET"), 0x843AA0C},
    {std::make_pair(8, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(8, "TOTAL_SIZE"), 0x66DCC0},
};

#endif