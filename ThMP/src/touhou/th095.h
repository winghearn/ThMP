#pragma once
#ifndef TH095_H
#define TH095_H

#define TH095_TRACK_NUMBER 6

#define TH095_FILENAME_01 "th095_00.wav"
#define TH095_FILENAME_02 "th095_01.wav"
#define TH095_FILENAME_03 "th095_02.wav"
#define TH095_FILENAME_04 "th095_03.wav"
#define TH095_FILENAME_05 "th095_04.wav"
#define TH095_FILENAME_06 "th09_08_2.wav"

#define TH095_INTRO_OFFSET_01 0x10
#define TH095_INTRO_SIZE_01 0x148000
#define TH095_TOTAL_SIZE_01 0x1038000

#define TH095_INTRO_OFFSET_02 0x1038010
#define TH095_INTRO_SIZE_02 0x4CAE0
#define TH095_TOTAL_SIZE_02 0xD4A420

#define TH095_INTRO_OFFSET_03 0x1D82430
#define TH095_INTRO_SIZE_03 0x6BA00
#define TH095_TOTAL_SIZE_03 0x14FE400

#define TH095_INTRO_OFFSET_04 0x3280830
#define TH095_INTRO_SIZE_04 0x100000
#define TH095_TOTAL_SIZE_04 0x1641800

#define TH095_INTRO_OFFSET_05 0x48C2030
#define TH095_INTRO_SIZE_05 0xFA800
#define TH095_TOTAL_SIZE_05 0x10A3900

#define TH095_INTRO_OFFSET_06 0x5965930
#define TH095_INTRO_SIZE_06 0x2AFD00
#define TH095_TOTAL_SIZE_06 0x1E11A00

const std::map<int, std::string> nameMap_TH095 = {
    {1, "th095_00.wav"},
    {2, "th095_01.wav"},
    {3, "th095_02.wav"},
    {4, "th095_03.wav"},
    {5, "th095_04.wav"},
    {6, "th09_08_2.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH095 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x148000},
    {std::make_pair(1, "TOTAL_SIZE"), 0x1038000},

    {std::make_pair(2, "INTRO_OFFSET"), 0x1038010},
    {std::make_pair(2, "INTRO_SIZE"), 0x4CAE0},
    {std::make_pair(2, "TOTAL_SIZE"), 0xD4A420},

    {std::make_pair(3, "INTRO_OFFSET"), 0x1D82430},
    {std::make_pair(3, "INTRO_SIZE"), 0x6BA00},
    {std::make_pair(3, "TOTAL_SIZE"), 0x14FE400},

    {std::make_pair(4, "INTRO_OFFSET"), 0x3280830},
    {std::make_pair(4, "INTRO_SIZE"), 0x100000},
    {std::make_pair(4, "TOTAL_SIZE"), 0x1641800},

    {std::make_pair(5, "INTRO_OFFSET"), 0x48C2030},
    {std::make_pair(5, "INTRO_SIZE"), 0xFA800},
    {std::make_pair(5, "TOTAL_SIZE"), 0x10A3900},

    {std::make_pair(6, "INTRO_OFFSET"), 0x5965930},
    {std::make_pair(6, "INTRO_SIZE"), 0x2AFD00},
    {std::make_pair(6, "TOTAL_SIZE"), 0x1E11A00}
};

#endif