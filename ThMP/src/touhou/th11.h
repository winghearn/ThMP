#pragma once
#ifndef TH11_H
#define TH11_H

#define TH11_TRACK_NUMBER 18

const std::map<int, std::string> nameMap_TH11 = {
    {1, "th11_00.wav"},
    {2, "th11_01.wav"},
    {3, "th11_02.wav"},
    {4, "th11_03.wav"},
    {5, "th11_05.wav"},
    {6, "th11_06.wav"},
    {7, "th11_07.wav"},
    {8, "th11_08.wav"},
    {9, "th11_10.wav"},
    {10, "th11_12.wav"},
    {11, "th11_13.wav"},
    {12, "th11_14.wav"},
    {13, "th11_16.wav"},
    {14, "th11_15.wav"},
    {15, "th11_17.wav"},
    {16, "th11_18.wav"},
    {17, "th11_19.wav"},
    {18, "th10_17.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH11 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x53E00},
    {std::make_pair(1, "TOTAL_SIZE"), 0xD1BD80},

    {std::make_pair(2, "INTRO_OFFSET"), 0xD1BD90},
    {std::make_pair(2, "INTRO_SIZE"), 0x64D80},
    {std::make_pair(2, "TOTAL_SIZE"), 0x10AB980},

    {std::make_pair(3, "INTRO_OFFSET"), 0x1DC7710},
    {std::make_pair(3, "INTRO_SIZE"), 0xC7000},
    {std::make_pair(3, "TOTAL_SIZE"), 0x957880},

    {std::make_pair(4, "INTRO_OFFSET"), 0x271EF90},
    {std::make_pair(4, "INTRO_SIZE"), 0xA3A00},
    {std::make_pair(4, "TOTAL_SIZE"), 0x12C4200},

    {std::make_pair(5, "INTRO_OFFSET"), 0x39E3190},
    {std::make_pair(5, "INTRO_SIZE"), 0x90800},
    {std::make_pair(5, "TOTAL_SIZE"), 0x129EE00},

    {std::make_pair(6, "INTRO_OFFSET"), 0x4C81F90},
    {std::make_pair(6, "INTRO_SIZE"), 0x8F280},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1394A80},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6016A10},
    {std::make_pair(7, "INTRO_SIZE"), 0x101700},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1232C00},

    {std::make_pair(8, "INTRO_OFFSET"), 0x7249610},
    {std::make_pair(8, "INTRO_SIZE"), 0x15D600},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1792700},

    {std::make_pair(9, "INTRO_OFFSET"), 0x89DBD10},
    {std::make_pair(9, "INTRO_SIZE"), 0x9BE00},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1504880},

    {std::make_pair(10, "INTRO_OFFSET"), 0x9EE0590},
    {std::make_pair(10, "INTRO_SIZE"), 0xACDA8},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1E63078},

    {std::make_pair(11, "INTRO_OFFSET"), 0xBD43608},
    {std::make_pair(11, "INTRO_SIZE"), 0x84600},
    {std::make_pair(11, "TOTAL_SIZE"), 0x1111500},

    {std::make_pair(12, "INTRO_OFFSET"), 0xCE54B08},
    {std::make_pair(12, "INTRO_SIZE"), 0x96800},
    {std::make_pair(12, "TOTAL_SIZE"), 0x13AA000},

    {std::make_pair(13, "INTRO_OFFSET"), 0xE1FEB08},
    {std::make_pair(13, "INTRO_SIZE"), 0x9A900},
    {std::make_pair(13, "TOTAL_SIZE"), 0x1C8CE00},

    {std::make_pair(14, "INTRO_OFFSET"), 0xFE8B908},
    {std::make_pair(14, "INTRO_SIZE"), 0x10D780},
    {std::make_pair(14, "TOTAL_SIZE"), 0x2020C80},

    {std::make_pair(15, "INTRO_OFFSET"), 0x11EAC588},
    {std::make_pair(15, "INTRO_SIZE"), 0x3EBD00},
    {std::make_pair(15, "TOTAL_SIZE"), 0x19F3200},

    {std::make_pair(16, "INTRO_OFFSET"), 0x1389F788},
    {std::make_pair(16, "INTRO_SIZE"), 0xBEE00},
    {std::make_pair(16, "TOTAL_SIZE"), 0xC2DC00},

    {std::make_pair(17, "INTRO_OFFSET"), 0x144CD388},
    {std::make_pair(17, "INTRO_SIZE"), 0x521BE0},
    {std::make_pair(17, "TOTAL_SIZE"), 0xE3AFC0},

    {std::make_pair(18, "INTRO_OFFSET"), 0x15308348},
    {std::make_pair(18, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(18, "TOTAL_SIZE"), 0x66DCC0}
};

#endif