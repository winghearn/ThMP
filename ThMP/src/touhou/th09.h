#pragma once
#ifndef TH09_H
#define TH09_H

#define TH09_TRACK_NUMBER 19

const std::map<int, std::string> nameMap_TH09 = {
    {1, "th09_00.wav"},
    {2, "th09_01.wav"},
    {3, "th09_00b.wav"},
    {4, "th09_02.wav"},
    {5, "th07_10_b.wav"},
    {6, "th08_12.wav"},
    {7, "th09_05.wav"},
    {8, "th07_09.wav"},
    {9, "th09_07.wav"},
    {10, "th09_10.wav"},
    {11, "th09_08_2.wav"},
    {12, "th09_12.wav"},
    {13, "th09_13.wav"},
    {14, "th09_09.wav"},
    {15, "th09_11.wav"},
    {16, "th09_00c.wav"},
    {17, "th09_15.wav"},
    {18, "th09_14.wav"},
    {19, "th09_17.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH09 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0xD5380},
    {std::make_pair(1, "TOTAL_SIZE"), 0xBF6300},

    {std::make_pair(2, "INTRO_OFFSET"), 0x2E77990},
    {std::make_pair(2, "INTRO_SIZE"), 0x170A00},
    {std::make_pair(2, "TOTAL_SIZE"), 0x16A9C00},

    {std::make_pair(3, "INTRO_OFFSET"), 0xBF6310},
    {std::make_pair(3, "INTRO_SIZE"), 0x1D5C00},
    {std::make_pair(3, "TOTAL_SIZE"), 0x16A9C00},

    {std::make_pair(4, "INTRO_OFFSET"), 0x4956990},
    {std::make_pair(4, "INTRO_SIZE"), 0xCB640},
    {std::make_pair(4, "TOTAL_SIZE"), 0x15E7540},

    {std::make_pair(5, "INTRO_OFFSET"), 0xABF69D0},
    {std::make_pair(5, "INTRO_SIZE"), 0x290800},
    {std::make_pair(5, "TOTAL_SIZE"), 0x1AC2C00},

    {std::make_pair(6, "INTRO_OFFSET"), 0x101722D0},
    {std::make_pair(6, "INTRO_SIZE"), 0xA4000},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1459800},

    {std::make_pair(7, "INTRO_OFFSET"), 0x5F3DED0},
    {std::make_pair(7, "INTRO_SIZE"), 0x1D3400},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1901C00},

    {std::make_pair(8, "INTRO_OFFSET"), 0x9437AD0},
    {std::make_pair(8, "INTRO_SIZE"), 0xB6300},
    {std::make_pair(8, "TOTAL_SIZE"), 0x17BEF00},

    {std::make_pair(9, "INTRO_OFFSET"), 0x783FAD0},
    {std::make_pair(9, "INTRO_SIZE"), 0x1B7000},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1BF8000},

    {std::make_pair(10, "INTRO_OFFSET"), 0x115CBAD0},
    {std::make_pair(10, "INTRO_SIZE"), 0xF3000},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1272220},

    {std::make_pair(11, "INTRO_OFFSET"), 0xC6B95D0},
    {std::make_pair(11, "INTRO_SIZE"), 0x2AFD00},
    {std::make_pair(11, "TOTAL_SIZE"), 0x1E11A00},

    {std::make_pair(12, "INTRO_OFFSET"), 0x1530F0F0},
    {std::make_pair(12, "INTRO_SIZE"), 0x10A500},
    {std::make_pair(12, "TOTAL_SIZE"), 0x13CBA00},

    {std::make_pair(13, "INTRO_OFFSET"), 0x166DAAF0},
    {std::make_pair(13, "INTRO_SIZE"), 0x1CF700},
    {std::make_pair(13, "TOTAL_SIZE"), 0x1AEA800},

    {std::make_pair(14, "INTRO_OFFSET"), 0xE4CAFD0},
    {std::make_pair(14, "INTRO_SIZE"), 0x268900},
    {std::make_pair(14, "TOTAL_SIZE"), 0x1CA7300},

    {std::make_pair(15, "INTRO_OFFSET"), 0x1283DCF0},
    {std::make_pair(15, "INTRO_SIZE"), 0x106C00},
    {std::make_pair(15, "TOTAL_SIZE"), 0x2AD1400},

    {std::make_pair(16, "INTRO_OFFSET"), 0x229FF10},
    {std::make_pair(16, "INTRO_SIZE"), 0xB7900},
    {std::make_pair(16, "TOTAL_SIZE"), 0xBD7A80},

    {std::make_pair(17, "INTRO_OFFSET"), 0x18A181F0},
    {std::make_pair(17, "INTRO_SIZE"), 0x34D680},
    {std::make_pair(17, "TOTAL_SIZE"), 0x672F00},

    {std::make_pair(18, "INTRO_OFFSET"), 0x181C52F0},
    {std::make_pair(18, "INTRO_SIZE"), 0x61680},
    {std::make_pair(18, "TOTAL_SIZE"), 0x852F00},

    {std::make_pair(19, "INTRO_OFFSET"), 0x1908B0F0},
    {std::make_pair(19, "INTRO_SIZE"), 0xD8E00},
    {std::make_pair(19, "TOTAL_SIZE"), 0x12EAB80}
};

#endif