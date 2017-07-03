#pragma once
#ifndef TH125_H
#define TH125_H

#define TH125_TRACK_NUMBER 7

const std::map<int, std::string> nameMap_TH125 = {
    {1, "th125_00.wav"},
    {2, "th125_01.wav"},
    {3, "th125_03.wav"},
    {4, "th125_04.wav"},
    {5, "th125_05.wav"},
    {6, "th125_06.wav"},
    {7, "th125_07.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH125 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x3A8400},
    {std::make_pair(1, "TOTAL_SIZE"), 0xEC0C00},

    {std::make_pair(2, "INTRO_OFFSET"), 0xEC0C10},
    {std::make_pair(2, "INTRO_SIZE"), 0x2B38C0},
    {std::make_pair(2, "TOTAL_SIZE"), 0x12C8100},

    {std::make_pair(3, "INTRO_OFFSET"), 0x2188D10},
    {std::make_pair(3, "INTRO_SIZE"), 0x265D00},
    {std::make_pair(3, "TOTAL_SIZE"), 0x1199F00},

    {std::make_pair(4, "INTRO_OFFSET"), 0x3322C10},
    {std::make_pair(4, "INTRO_SIZE"), 0x1BDB00},
    {std::make_pair(4, "TOTAL_SIZE"), 0xF80980},

    {std::make_pair(5, "INTRO_OFFSET"), 0x42A3590},
    {std::make_pair(5, "INTRO_SIZE"), 0x566180},
    {std::make_pair(5, "TOTAL_SIZE"), 0x1DC6A80},

    {std::make_pair(6, "INTRO_OFFSET"), 0x606A010},
    {std::make_pair(6, "INTRO_SIZE"), 0x205AA0},
    {std::make_pair(6, "TOTAL_SIZE"), 0xE84E20},

    {std::make_pair(7, "INTRO_OFFSET"), 0x6EEEE30},
    {std::make_pair(7, "INTRO_SIZE"), 0x4F0300},
    {std::make_pair(7, "TOTAL_SIZE"), 0x8A2E80}
};

#endif