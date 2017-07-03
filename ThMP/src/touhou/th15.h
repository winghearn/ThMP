#pragma once
#ifndef TH15_H
#define TH15_H

#define TH15_TRACK_NUMBER 18

const std::map<int, std::string> nameMap_TH15 = {
    {1, "th15_01.wav"},
    {2, "th15_02.wav"},
    {3, "th15_04.wav"}, 
    {4, "th15_03.wav"},
    {5, "th15_05.wav"},
    {6, "th15_06.wav"},
    {7, "th15_07.wav"},
    {8, "th15_08.wav"},
    {9, "th15_09.wav"},
    {10, "th15_10.wav"},
    {11, "th15_11.wav"},
    {12, "th15_12.wav"},
    {13, "th15_13.wav"},
    {14, "th15_16.wav"},
    {15, "th15_17.wav"},
    {16, "th15_14.wav"},
    {17, "th15_15.wav"},
    {18, "th128_08.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH15 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x124B00},
    {std::make_pair(1, "TOTAL_SIZE"), 0x18D3B50},

    {std::make_pair(2, "INTRO_OFFSET"), 0x18D3B60},
    {std::make_pair(2, "INTRO_SIZE"), 0xC7280},
    {std::make_pair(2, "TOTAL_SIZE"), 0x12B8E80},

    {std::make_pair(3, "INTRO_OFFSET"), 0x2B8C9E0},
    {std::make_pair(3, "INTRO_SIZE"), 0x263790},
    {std::make_pair(3, "TOTAL_SIZE"), 0x1180390},

    {std::make_pair(4, "INTRO_OFFSET"), 0x3D0CD70},
    {std::make_pair(4, "INTRO_SIZE"), 0x76100},
    {std::make_pair(4, "TOTAL_SIZE"), 0x1397940},

    {std::make_pair(5, "INTRO_OFFSET"), 0x50A46B0},
    {std::make_pair(5, "INTRO_SIZE"), 0x30A480},
    {std::make_pair(5, "TOTAL_SIZE"), 0x148D180},

    {std::make_pair(6, "INTRO_OFFSET"), 0x6531830},
    {std::make_pair(6, "INTRO_SIZE"), 0x95100},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1A411C0},

    {std::make_pair(7, "INTRO_OFFSET"), 0x7F729F0},
    {std::make_pair(7, "INTRO_SIZE"), 0x40103C},
    {std::make_pair(7, "TOTAL_SIZE"), 0x1D44200},

    {std::make_pair(8, "INTRO_OFFSET"), 0x9CB6BF0},
    {std::make_pair(8, "INTRO_SIZE"), 0x42B080},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1D4EE80},

    {std::make_pair(9, "INTRO_OFFSET"), 0xBA05A70},
    {std::make_pair(9, "INTRO_SIZE"), 0x102B80},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1D280C0},

    {std::make_pair(10, "INTRO_OFFSET"), 0xD72DB30},
    {std::make_pair(10, "INTRO_SIZE"), 0x131D80},
    {std::make_pair(10, "TOTAL_SIZE"), 0x2331D80},

    {std::make_pair(11, "INTRO_OFFSET"), 0xFA5F8B0},
    {std::make_pair(11, "INTRO_SIZE"), 0x47C400},
    {std::make_pair(11, "TOTAL_SIZE"), 0x285FC00},

    {std::make_pair(12, "INTRO_OFFSET"), 0x122BF4B0},
    {std::make_pair(12, "INTRO_SIZE"), 0x8FA300},
    {std::make_pair(12, "TOTAL_SIZE"), 0x19E0C00},

    {std::make_pair(13, "INTRO_OFFSET"), 0x13CA00B0},
    {std::make_pair(13, "INTRO_SIZE"), 0x107800},
    {std::make_pair(13, "TOTAL_SIZE"), 0x2FD3F00},

    {std::make_pair(14, "INTRO_OFFSET"), 0x16C73FB0},
    {std::make_pair(14, "INTRO_SIZE"), 0x1F2600},
    {std::make_pair(14, "TOTAL_SIZE"), 0x23F2200},

    {std::make_pair(15, "INTRO_OFFSET"), 0x190661B0},
    {std::make_pair(15, "INTRO_SIZE"), 0x1F0280},
    {std::make_pair(15, "TOTAL_SIZE"), 0x25BF600},

    {std::make_pair(16, "INTRO_OFFSET"), 0x1B6257B0},
    {std::make_pair(16, "INTRO_SIZE"), 0x76B90},
    {std::make_pair(16, "TOTAL_SIZE"), 0x889C90},

    {std::make_pair(17, "INTRO_OFFSET"), 0x1BEAF440},
    {std::make_pair(17, "INTRO_SIZE"), 0x1B0600},
    {std::make_pair(17, "TOTAL_SIZE"), 0xE9BB00},

    {std::make_pair(18, "INTRO_OFFSET"), 0x1CD4AF40},
    {std::make_pair(18, "INTRO_SIZE"), 0x1CACC8},
    {std::make_pair(18, "TOTAL_SIZE"), 0x66DCC0}
};

#endif