#pragma once
#ifndef TH08_H
#define TH08_H

#define TH08_TRACK_NUMBER 21

const std::map<int, std::string> nameMap_TH08 = {
    {1, "th08_01.wav"},
    {2, "th08_00.wav"},
    {3, "th08_03.wav"},
    {4, "th08_04.wav"},
    {5, "th08_05.wav"},
    {6, "th08_06.wav"},
    {7, "th08_07.wav"},
    {8, "th08_08.wav"},
    {9, "th08_09.wav"},
    {10, "th08_10.wav"},
    {11, "th08_11.wav"},
    {12, "th08_12.wav"},
    {13, "th08_13.wav"},
    {14, "th08_14.wav"},
    {15, "th08_15.wav"},
    {16, "th08_13b.wav"},
    {17, "th08_18.wav"},
    {18, "th08_19.wav"},
    {19, "th08_16.wav"},
    {20, "th08_17.wav"},
    {21, "th08_20.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH08 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0xF1AC0},
    {std::make_pair(1, "TOTAL_SIZE"), 0xC20500},

    {std::make_pair(2, "INTRO_OFFSET"), 0xC20510},
    {std::make_pair(2, "INTRO_SIZE"), 0xAAE00},
    {std::make_pair(2, "TOTAL_SIZE"), 0x160EB00},

    {std::make_pair(3, "INTRO_OFFSET"), 0x222F010},
    {std::make_pair(3, "INTRO_SIZE"), 0x2A8000},
    {std::make_pair(3, "TOTAL_SIZE"), 0xD20000},

    {std::make_pair(4, "INTRO_OFFSET"), 0x2F4F010},
    {std::make_pair(4, "INTRO_SIZE"), 0x76F00},
    {std::make_pair(4, "TOTAL_SIZE"), 0x192D000},

    {std::make_pair(5, "INTRO_OFFSET"), 0x487C010},
    {std::make_pair(5, "INTRO_SIZE"), 0x44D680},
    {std::make_pair(5, "TOTAL_SIZE"), 0x1031100},

    {std::make_pair(6, "INTRO_OFFSET"), 0x58AD110},
    {std::make_pair(6, "INTRO_SIZE"), 0x29D200},
    {std::make_pair(6, "TOTAL_SIZE"), 0xF88000},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6835110},
    {std::make_pair(7, "INTRO_SIZE"), 0x48A600},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1342A00},

    {std::make_pair(8, "INTRO_OFFSET"), 0x7B77B10},
    {std::make_pair(8, "INTRO_SIZE"), 0x164B00},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1008000},

    {std::make_pair(9, "INTRO_OFFSET"), 0x8B7FB10},
    {std::make_pair(9, "INTRO_SIZE"), 0x23AB00},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1B98000},

    {std::make_pair(10, "INTRO_OFFSET"), 0xA717B10},
    {std::make_pair(10, "INTRO_SIZE"), 0x1BAC00},
    {std::make_pair(10, "TOTAL_SIZE"), 0x1552000},

    {std::make_pair(11, "INTRO_OFFSET"), 0xBC69B10},
    {std::make_pair(11, "INTRO_SIZE"), 0x11FB00},
    {std::make_pair(11, "TOTAL_SIZE"), 0x1D5A900},

    {std::make_pair(12, "INTRO_OFFSET"), 0xD9C4410},
    {std::make_pair(12, "INTRO_SIZE"), 0x82680},
    {std::make_pair(12, "TOTAL_SIZE"), 0x1437E00},

    {std::make_pair(13, "INTRO_OFFSET"), 0xEDFC210},
    {std::make_pair(13, "INTRO_SIZE"), 0x196AC0},
    {std::make_pair(13, "TOTAL_SIZE"), 0xE8B4A0},

    {std::make_pair(14, "INTRO_OFFSET"), 0xFC876B0},
    {std::make_pair(14, "INTRO_SIZE"), 0x12DB00},
    {std::make_pair(14, "TOTAL_SIZE"), 0x1DF8400},

    {std::make_pair(15, "INTRO_OFFSET"), 0x128476B0},
    {std::make_pair(15, "INTRO_SIZE"), 0x65E700},
    {std::make_pair(15, "TOTAL_SIZE"), 0x1E47000},

    {std::make_pair(16, "INTRO_OFFSET"), 0x11A7FAB0},
    {std::make_pair(16, "INTRO_SIZE"), 0xBCA380},
    {std::make_pair(16, "TOTAL_SIZE"), 0xDC7C00},

    {std::make_pair(17, "INTRO_OFFSET"), 0x16763DB0},
    {std::make_pair(17, "INTRO_SIZE"), 0xD7280},
    {std::make_pair(17, "TOTAL_SIZE"), 0x1AB7C80},

    {std::make_pair(18, "INTRO_OFFSET"), 0x1821BA30},
    {std::make_pair(18, "INTRO_SIZE"), 0x145E20},
    {std::make_pair(18, "TOTAL_SIZE"), 0x1DBD790},

    {std::make_pair(19, "INTRO_OFFSET"), 0x1468E6B0},
    {std::make_pair(19, "INTRO_SIZE"), 0x2F1A00},
    {std::make_pair(19, "TOTAL_SIZE"), 0xF18200},

    {std::make_pair(20, "INTRO_OFFSET"), 0x155A68B0},
    {std::make_pair(20, "INTRO_SIZE"), 0x346980},
    {std::make_pair(20, "TOTAL_SIZE"), 0x11BD500},

    {std::make_pair(21, "INTRO_OFFSET"), 0x19FD91C0},
    {std::make_pair(21, "INTRO_SIZE"), 0x10DC00},
    {std::make_pair(21, "TOTAL_SIZE"), 0xD44A80},
};

/*
const std::map<int, std::string> nameMap_TH08 = {
    {1, "
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH08 = {
    {std::make_pair(1, "INTRO_OFFSET"), },
    {std::make_pair(1, "INTRO_SIZE"), },
    {std::make_pair(1, "TOTAL_SIZE"), },

    {std::make_pair(2, "INTRO_OFFSET"), },
    {std::make_pair(2, "INTRO_SIZE"), },
    {std::make_pair(2, "TOTAL_SIZE"), },

    {std::make_pair(3, "INTRO_OFFSET"), },
    {std::make_pair(3, "INTRO_SIZE"), },
    {std::make_pair(3, "TOTAL_SIZE"), },

    {std::make_pair(4, "INTRO_OFFSET"), },
    {std::make_pair(4, "INTRO_SIZE"), },
    {std::make_pair(4, "TOTAL_SIZE"), },

    {std::make_pair(5, "INTRO_OFFSET"), },
    {std::make_pair(5, "INTRO_SIZE"), },
    {std::make_pair(5, "TOTAL_SIZE"), },

    {std::make_pair(6, "INTRO_OFFSET"), },
    {std::make_pair(6, "INTRO_SIZE"), },
    {std::make_pair(6, "TOTAL_SIZE"), },

    {std::make_pair(7, "INTRO_OFFSET"), },
    {std::make_pair(7, "INTRO_SIZE"), },
    {std::make_pair(7, "TOTAL_SIZE"), },

    {std::make_pair(8, "INTRO_OFFSET"), },
    {std::make_pair(8, "INTRO_SIZE"), },
    {std::make_pair(8, "TOTAL_SIZE"), },

    {std::make_pair(9, "INTRO_OFFSET"), },
    {std::make_pair(9, "INTRO_SIZE"), },
    {std::make_pair(9, "TOTAL_SIZE"), },

    {std::make_pair(10, "INTRO_OFFSET"), },
    {std::make_pair(10, "INTRO_SIZE"), },
    {std::make_pair(10, "TOTAL_SIZE"), },

    {std::make_pair(11, "INTRO_OFFSET"), },
    {std::make_pair(11, "INTRO_SIZE"), },
    {std::make_pair(11, "TOTAL_SIZE"), },

    {std::make_pair(12, "INTRO_OFFSET"), },
    {std::make_pair(12, "INTRO_SIZE"), },
    {std::make_pair(12, "TOTAL_SIZE"), },

    {std::make_pair(13, "INTRO_OFFSET"), },
    {std::make_pair(13, "INTRO_SIZE"), },
    {std::make_pair(13, "TOTAL_SIZE"), },

    {std::make_pair(14, "INTRO_OFFSET"), },
    {std::make_pair(14, "INTRO_SIZE"), },
    {std::make_pair(14, "TOTAL_SIZE"), },

    {std::make_pair(15, "INTRO_OFFSET"), },
    {std::make_pair(15, "INTRO_SIZE"), },
    {std::make_pair(15, "TOTAL_SIZE"), },

    {std::make_pair(16, "INTRO_OFFSET"), },
    {std::make_pair(16, "INTRO_SIZE"), },
    {std::make_pair(16, "TOTAL_SIZE"), },

    {std::make_pair(17, "INTRO_OFFSET"), },
    {std::make_pair(17, "INTRO_SIZE"), },
    {std::make_pair(17, "TOTAL_SIZE"), },

    {std::make_pair(18, "INTRO_OFFSET"), },
    {std::make_pair(18, "INTRO_SIZE"), },
    {std::make_pair(18, "TOTAL_SIZE"), },

    {std::make_pair(19, "INTRO_OFFSET"), },
    {std::make_pair(19, "INTRO_SIZE"), },
    {std::make_pair(19, "TOTAL_SIZE"), },

    {std::make_pair(20, "INTRO_OFFSET"), },
    {std::make_pair(20, "INTRO_SIZE"), },
    {std::make_pair(20, "TOTAL_SIZE"), },

    {std::make_pair(21, "INTRO_OFFSET"), },
    {std::make_pair(21, "INTRO_SIZE"), },
    {std::make_pair(21, "TOTAL_SIZE"), },
};
*/

#endif