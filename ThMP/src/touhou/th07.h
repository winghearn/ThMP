#pragma once
#ifndef TH07_H
#define TH07_H

#define TH07_TRACK_NUMBER 20

const std::map<int, std::string> nameMap_TH07 = {
    {1, "th07_01.wav"},
    {2, "th07_02.wav"},
    {3, "th07_03.wav"},
    {4, "th07_04.wav"},
    {5, "th07_05.wav"},
    {6, "th07_06.wav"},
    {7, "th07_07.wav"},
    {8, "th07_08.wav"},
    {9, "th07_09.wav"},
    {10, "th07_10.wav"},
    {11, "th07_11.wav"},
    {12, "th07_12.wav"},
    {13, "th07_13.wav"},
    {14, "th07_13b.wav"},
    {15, "th07_14.wav"},
    {16, "th07_15.wav"},
    {17, "th07_16.wav"},
    {18, "th07_17.wav"},
    {19, "th07_18.wav"},
    {20, "th07_19.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH07 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x129300},
    {std::make_pair(1, "TOTAL_SIZE"), 0xFC7720},

    {std::make_pair(2, "INTRO_OFFSET"), 0xFC7730},
    {std::make_pair(2, "INTRO_SIZE"), 0x2B9F80},
    {std::make_pair(2, "TOTAL_SIZE"), 0xEC8000},

    {std::make_pair(3, "INTRO_OFFSET"), 0x1E8F730},
    {std::make_pair(3, "INTRO_SIZE"), 0x1D2EA0},
    {std::make_pair(3, "TOTAL_SIZE"), 0xBB7FFC},

    {std::make_pair(4, "INTRO_OFFSET"), 0x2A4772C},
    {std::make_pair(4, "INTRO_SIZE"), 0x406C58},
    {std::make_pair(4, "TOTAL_SIZE"), 0x177FA8C},

    {std::make_pair(5, "INTRO_OFFSET"), 0x41C71B8},
    {std::make_pair(5, "INTRO_SIZE"), 0x9DE28},
    {std::make_pair(5, "TOTAL_SIZE"), 0x9775F8},

    {std::make_pair(6, "INTRO_OFFSET"), 0x4B3E7B0},
    {std::make_pair(6, "INTRO_SIZE"), 0x156E00},
    {std::make_pair(6, "TOTAL_SIZE"), 0x14FFA00},

    {std::make_pair(7, "INTRO_OFFSET"), 0x603E1B0},
    {std::make_pair(7, "INTRO_SIZE"), 0x4C9800},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1E38000},

    {std::make_pair(8, "INTRO_OFFSET"), 0x7E761B0},
    {std::make_pair(8, "INTRO_SIZE"), 0x15E180},
    {std::make_pair(8, "TOTAL_SIZE"), 0x2931400},

    {std::make_pair(9, "INTRO_OFFSET"), 0xA7A75B0},
    {std::make_pair(9, "INTRO_SIZE"), 0xB6300},
    {std::make_pair(9, "TOTAL_SIZE"), 0x17BEF00},

    {std::make_pair(10, "INTRO_OFFSET"), 0xBF664B0},
    {std::make_pair(10, "INTRO_SIZE"), 0x1A5400},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1909C00},

    {std::make_pair(11, "INTRO_OFFSET"), 0xD8700B0},
    {std::make_pair(11, "INTRO_SIZE"), 0x121C00},
    {std::make_pair(11, "TOTAL_SIZE"), 0x12D7C00},

    {std::make_pair(12, "INTRO_OFFSET"), 0xEB47CB0},
    {std::make_pair(12, "INTRO_SIZE"), 0x78800},
    {std::make_pair(12, "TOTAL_SIZE"), 0x9AB400},

    {std::make_pair(13, "INTRO_OFFSET"), 0xF4F30B0},
    {std::make_pair(13, "INTRO_SIZE"), 0x2E9E00},
    {std::make_pair(13, "TOTAL_SIZE"), 0x183C400},

    {std::make_pair(14, "INTRO_OFFSET"), 0x10D2F4B0},
    {std::make_pair(14, "INTRO_SIZE"), 0xB1C400},
    {std::make_pair(14, "TOTAL_SIZE"), 0xF5CD00},

    {std::make_pair(15, "INTRO_OFFSET"), 0x137CE2B0},
    {std::make_pair(15, "INTRO_SIZE"), 0xF8C00},
    {std::make_pair(15, "TOTAL_SIZE"), 0x1801F00},

    {std::make_pair(16, "INTRO_OFFSET"), 0x14FD01B0},
    {std::make_pair(16, "INTRO_SIZE"), 0x500B00},
    {std::make_pair(16, "TOTAL_SIZE"), 0x1060000},

    {std::make_pair(17, "INTRO_OFFSET"), 0x173C2A30},
    {std::make_pair(17, "INTRO_SIZE"), 0xF8C00},
    {std::make_pair(17, "TOTAL_SIZE"), 0x1801F00},

    {std::make_pair(18, "INTRO_OFFSET"), 0x18BC4930},
    {std::make_pair(18, "INTRO_SIZE"), 0x55500},
    {std::make_pair(18, "TOTAL_SIZE"), 0x1C28000},

    {std::make_pair(19, "INTRO_OFFSET"), 0x11C8C1B0},
    {std::make_pair(19, "INTRO_SIZE"), 0xCA100},
    {std::make_pair(19, "TOTAL_SIZE"), 0xAE2100},

    {std::make_pair(20, "INTRO_OFFSET"), 0x1276E2B0},
    {std::make_pair(20, "INTRO_SIZE"), 0x500B00},
    {std::make_pair(20, "TOTAL_SIZE"), 0x1060000},
};

#endif