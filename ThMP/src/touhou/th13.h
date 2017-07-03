#pragma once
#ifndef TH13_H
#define TH13_H

#define TH13_TRACK_NUMBER 31

/*
#define TH13_FILENAME_01 "th13_00.wav"
#define TH13_FILENAME_02 "th13_01.wav"
#define TH13_FILENAME_03 "th13_01b.wav"
#define TH13_FILENAME_04 "th13_03.wav"
#define TH13_FILENAME_05 "th13_03b.wav"
#define TH13_FILENAME_06 "th13_04.wav"
#define TH13_FILENAME_07 "th13_04b.wav"
#define TH13_FILENAME_08 "th13_06.wav"
#define TH13_FILENAME_09 "th13_06b.wav"
#define TH13_FILENAME_10 "th13_07.wav"
#define TH13_FILENAME_11 "th13_07b.wav"
#define TH13_FILENAME_12 "th13_08.wav"
#define TH13_FILENAME_13 "th13_08b.wav"
#define TH13_FILENAME_14 "th13_10.wav"
#define TH13_FILENAME_15 "th13_10b.wav"
#define TH13_FILENAME_16 "th13_11.wav"
#define TH13_FILENAME_17 "th13_11b.wav"
#define TH13_FILENAME_18 "th13_12.wav"
#define TH13_FILENAME_19 "th13_12b.wav"
#define TH13_FILENAME_20 "th13_15.wav"
#define TH13_FILENAME_21 "th13_15b.wav"
#define TH13_FILENAME_22 "th13_16.wav"
#define TH13_FILENAME_23 "th13_16b.wav"
#define TH13_FILENAME_24 "th13_17.wav"
#define TH13_FILENAME_25 "th13_18.wav"
#define TH13_FILENAME_26 "th13_19.wav"
#define TH13_FILENAME_27 "th13_20.wav"
#define TH13_FILENAME_28 "th13_20b.wav"
#define TH13_FILENAME_29 "th13_22.wav"
#define TH13_FILENAME_30 "th13_22b.wav"
#define TH13_FILENAME_31 "th128_08.wav"

#define TH13_INTRO_OFFSET_01 0x10
#define TH13_INTRO_SIZE_01 0x3ACD80
#define TH13_TOTAL_SIZE_01 0xA4FE00

#define TH13_INTRO_OFFSET_02 0xA4FE10
#define TH13_INTRO_SIZE_02 0x2E72A8
#define TH13_TOTAL_SIZE_02 0x1248B70

#define TH13_INTRO_OFFSET_03 0x1C98980
#define TH13_INTRO_SIZE_03 0x173954
#define TH13_TOTAL_SIZE_03 0x9245B8

#define TH13_INTRO_OFFSET_04 0x25BCF38
#define TH13_INTRO_SIZE_04 0xAED00
#define TH13_TOTAL_SIZE_04 0xE38900

#define TH13_INTRO_OFFSET_05 0x33F5838
#define TH13_INTRO_SIZE_05 0x57680
#define TH13_TOTAL_SIZE_05 0x71C480

#define TH13_INTRO_OFFSET_06 0x3B11CB8
#define TH13_INTRO_SIZE_06 0x61580
#define TH13_TOTAL_SIZE_06 0x11FE640

#define TH13_INTRO_OFFSET_07 0x4D102F8
#define TH13_INTRO_SIZE_07 0x30AC0
#define TH13_TOTAL_SIZE_07 0x8FF320

#define TH13_INTRO_OFFSET_08 0x560F618
#define TH13_INTRO_SIZE_08 0x53D00
#define TH13_TOTAL_SIZE_08 0xC202C0

#define TH13_INTRO_OFFSET_09 0x622F8D8
#define TH13_INTRO_SIZE_09 0x29E80
#define TH13_TOTAL_SIZE_09 0x610160

#define TH13_INTRO_OFFSET_10 0x683FA38
#define TH13_INTRO_SIZE_10 0x297B20
#define TH13_TOTAL_SIZE_10 0x1771E00

#define TH13_INTRO_OFFSET_11 0x7FB1828
#define TH13_INTRO_SIZE_11 0x14BD90
#define TH13_TOTAL_SIZE_11 0xBB8F00

#define TH13_INTRO_OFFSET_12 0x8B6A738
#define TH13_INTRO_SIZE_12 0xACD40
#define TH13_TOTAL_SIZE_12 0xD04A80

#define TH13_INTRO_OFFSET_13 0x986F1B8
#define TH13_INTRO_SIZE_13 0x566A0
#define TH13_TOTAL_SIZE_13 0x682540

#define TH13_INTRO_OFFSET_14 0x9EF16F8
#define TH13_INTRO_SIZE_14 0x188200
#define TH13_TOTAL_SIZE_14 0x1A46500

#define TH13_INTRO_OFFSET_15 0xB937BF8
#define TH13_INTRO_SIZE_15 0xC4100
#define TH13_TOTAL_SIZE_15 0xD23280

#define TH13_INTRO_OFFSET_16 0xC65AE78
#define TH13_INTRO_SIZE_16 0x173180
#define TH13_TOTAL_SIZE_16 0x1175780

#define TH13_INTRO_OFFSET_17 0xD7D05F8
#define TH13_INTRO_SIZE_17 0xB98C0
#define TH13_TOTAL_SIZE_17 0x8BABC0

#define TH13_INTRO_OFFSET_18 0xE08B1B8
#define TH13_INTRO_SIZE_18 0x43430
#define TH13_TOTAL_SIZE_18 0x13A97A0

#define TH13_INTRO_OFFSET_19 0xF434958
#define TH13_INTRO_SIZE_19 0x21A18
#define TH13_TOTAL_SIZE_19 0x9D4BD0

#define TH13_INTRO_OFFSET_20 0xFE09528
#define TH13_INTRO_SIZE_20 0xA1800
#define TH13_TOTAL_SIZE_20 0x198C000

#define TH13_INTRO_OFFSET_21 0x11795528
#define TH13_INTRO_SIZE_21 0x50C00
#define TH13_TOTAL_SIZE_21 0xCC6000

#define TH13_INTRO_OFFSET_22 0x1245B528
#define TH13_INTRO_SIZE_22 0x2B3E40
#define TH13_TOTAL_SIZE_22 0x12ECDA0

#define TH13_INTRO_OFFSET_23 0x137482C8
#define TH13_INTRO_SIZE_23 0x159F20
#define TH13_TOTAL_SIZE_23 0x9766D0

#define TH13_INTRO_OFFSET_24 0x140BE998
#define TH13_INTRO_SIZE_24 0x27B4D8
#define TH13_TOTAL_SIZE_24 0x1F0E1E0

#define TH13_INTRO_OFFSET_25 0x15FCCB78
#define TH13_INTRO_SIZE_25 0x3F600
#define TH13_TOTAL_SIZE_25 0xECF200

#define TH13_INTRO_OFFSET_26 0x16E9BD78
#define TH13_INTRO_SIZE_26 0x170D100
#define TH13_TOTAL_SIZE_26 0x194B400

#define TH13_INTRO_OFFSET_27 0x187E7178
#define TH13_INTRO_SIZE_27 0x163C80
#define TH13_TOTAL_SIZE_27 0x16E8320

#define TH13_INTRO_OFFSET_28 0x19ECF498
#define TH13_INTRO_SIZE_28 0xB1E40
#define TH13_TOTAL_SIZE_28 0xB74190

#define TH13_INTRO_OFFSET_29 0x1AA43628
#define TH13_INTRO_SIZE_29 0x249AA0
#define TH13_TOTAL_SIZE_29 0x185B320

#define TH13_INTRO_OFFSET_30 0x1C29E948
#define TH13_INTRO_SIZE_30 0x124D50
#define TH13_TOTAL_SIZE_30 0xC2D990

#define TH13_INTRO_OFFSET_31 0x1CECC2D8
#define TH13_INTRO_SIZE_31 0x1CACC8
#define TH13_TOTAL_SIZE_31 0x66DCC0
*/

const std::map<int, std::string> nameMap_TH13 = {
    {1, "th13_00.wav"},
    {2, "th13_01.wav"},
    {3, "th13_03.wav"},
    {4, "th13_04.wav"},
    {5, "th13_06.wav"},
    {6, "th13_07.wav"}, 
    {7, "th13_08.wav"},
    {8, "th13_10.wav"},
    {9, "th13_11.wav"},
    {10, "th13_12.wav"},
    {11, "th13_15.wav"},
    {12, "th13_16.wav"},
    {13, "th13_17.wav"},
    {14, "th13_20.wav"},
    {15, "th13_22.wav"},
    {16, "th13_18.wav"},
    {17, "th13_19.wav"}
};

const std::map<std::pair<int, std::string>, unsigned int> trackMap_TH13 = {
    {std::make_pair(1, "INTRO_OFFSET"), 0x10},
    {std::make_pair(1, "INTRO_SIZE"), 0x3ACD80},
    {std::make_pair(1, "TOTAL_SIZE"), 0xA4FE00},

    {std::make_pair(2, "INTRO_OFFSET"), 0xA4FE10},
    {std::make_pair(2, "INTRO_SIZE"), 0x2E72A8},
    {std::make_pair(2, "TOTAL_SIZE"), 0x1248B70},

    {std::make_pair(3, "INTRO_OFFSET"), 0x25BCF38},
    {std::make_pair(3, "INTRO_SIZE"), 0xAED00},
    {std::make_pair(3, "TOTAL_SIZE"), 0xE38900},

    {std::make_pair(4, "INTRO_OFFSET"), 0x3B11CB8},
    {std::make_pair(4, "INTRO_SIZE"), 0x61580},
    {std::make_pair(4, "TOTAL_SIZE"), 0x11FE640},

    {std::make_pair(5, "INTRO_OFFSET"), 0x560F618},
    {std::make_pair(5, "INTRO_SIZE"), 0x53D00},
    {std::make_pair(5, "TOTAL_SIZE"), 0xC202C0},

    {std::make_pair(6, "INTRO_OFFSET"), 0x683FA38},
    {std::make_pair(6, "INTRO_SIZE"), 0x297B20},
    {std::make_pair(6, "TOTAL_SIZE"), 0x11FE640},

    {std::make_pair(7, "INTRO_OFFSET"), 0x8B6A738},
    {std::make_pair(7, "INTRO_SIZE"), 0xACD40},
    {std::make_pair(7, "TOTAL_SIZE"), 0xD04A80},

    {std::make_pair(8, "INTRO_OFFSET"), 0x9EF16F8},
    {std::make_pair(8, "INTRO_SIZE"), 0x188200},
    {std::make_pair(8, "TOTAL_SIZE"), 0x1A46500},

    {std::make_pair(9, "INTRO_OFFSET"), 0xC65AE78},
    {std::make_pair(9, "INTRO_SIZE"), 0x173180},
    {std::make_pair(9, "TOTAL_SIZE"), 0x1175780},

    {std::make_pair(10, "INTRO_OFFSET"), 0xE08B1B8},
    {std::make_pair(10, "INTRO_SIZE"), 0x43430},
    {std::make_pair(10, "TOTAL_SIZE"), 0x13A97A0},

    {std::make_pair(11, "INTRO_OFFSET"), 0xFE09528},
    {std::make_pair(11, "INTRO_SIZE"), 0xA1800},
    {std::make_pair(11, "TOTAL_SIZE"), 0x198C000},

    {std::make_pair(12, "INTRO_OFFSET"), 0x1245B528},
    {std::make_pair(12, "INTRO_SIZE"), 0x2B3E40},
    {std::make_pair(12, "TOTAL_SIZE"), 0x12ECDA0},

    {std::make_pair(13, "INTRO_OFFSET"), 0x140BE998},
    {std::make_pair(13, "INTRO_SIZE"), 0x27B4D8},
    {std::make_pair(13, "TOTAL_SIZE"), 0x1F0E1E0},

    {std::make_pair(14, "INTRO_OFFSET"), 0x187E7178},
    {std::make_pair(14, "INTRO_SIZE"), 0x163C80},
    {std::make_pair(14, "TOTAL_SIZE"), 0x16E8320},

    {std::make_pair(15, "INTRO_OFFSET"), 0x1AA43628},
    {std::make_pair(15, "INTRO_SIZE"), 0x249AA0},
    {std::make_pair(15, "TOTAL_SIZE"), 0x185B320},

    {std::make_pair(16, "INTRO_OFFSET"), 0x15FCCB78},
    {std::make_pair(16, "INTRO_SIZE"), 0x3F600},
    {std::make_pair(16, "TOTAL_SIZE"), 0xECF200},

    {std::make_pair(17, "INTRO_OFFSET"), 0x16E9BD78},
    {std::make_pair(17, "INTRO_SIZE"), 0x170D100},
    {std::make_pair(17, "TOTAL_SIZE"), 0x194B400}
};

#endif