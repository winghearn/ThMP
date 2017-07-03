#pragma once
#ifndef TH128_H
#define TH128_H

#define TH128_TRACK_NUMBER 10

const std::map<int, std::string> nameMap_TH128 = {
    {1, "th128_07.wav"},
    {2, "th128_00.wav"},
    {3, "th128_02.wav"},
    {4, "th128_01.wav"},
    {5, "th128_05.wav"},
    {6, "th128_06.wav"},
    {7, "th128_10.wav"},
    {8, "th128_11.wav"},
    {9, "th128_09.wav"},
    {10, "th128_08.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH128 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x20A520},
    {std::make_pair(1, "TOTAL_SIZE"), 0xEDF6A0},

    {std::make_pair(2, "INTRO_OFFSET"), 0xEDF6B0},
    {std::make_pair(2, "INTRO_SIZE"), 0x28EA80},
    {std::make_pair(2, "TOTAL_SIZE"), 0x11FBC00},

    {std::make_pair(3, "INTRO_OFFSET"), 0x20DB2B0},
    {std::make_pair(3, "INTRO_SIZE"), 0x2A0E0},
    {std::make_pair(3, "TOTAL_SIZE"), 0xC6E2A0},

    {std::make_pair(4, "INTRO_OFFSET"), 0x2D49550},
    {std::make_pair(4, "INTRO_SIZE"), 0x232E40},
    {std::make_pair(4, "TOTAL_SIZE"), 0xE3C6C0},

    {std::make_pair(5, "INTRO_OFFSET"), 0x3B85C10},
    {std::make_pair(5, "INTRO_SIZE"), 0x1D0280},
    {std::make_pair(5, "TOTAL_SIZE"), 0x1482600},

    {std::make_pair(6, "INTRO_OFFSET"), 0x5008210},
    {std::make_pair(6, "INTRO_SIZE"), 0x8A180},
    {std::make_pair(6, "TOTAL_SIZE"), 0x114CA80},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6D1AB90},
    {std::make_pair(7, "INTRO_SIZE"), 0x119F00},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1ABD700},

    {std::make_pair(8, "INTRO_OFFSET"), 0x87D8290},
    {std::make_pair(8, "INTRO_SIZE"), 0xC8300},
    {std::make_pair(8, "TOTAL_SIZE"), 0x160EA00},

    {std::make_pair(9, "INTRO_OFFSET"), 0x6154C90},
    {std::make_pair(9, "INTRO_SIZE"), 0x1C1B00},
    {std::make_pair(9, "TOTAL_SIZE"), 0xBC5F00},

    {std::make_pair(10, "INTRO_OFFSET"), 0x9DE6C90},
    {std::make_pair(10, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(10, "TOTAL_SIZE"), 0x66DCC0}
};

#endif 