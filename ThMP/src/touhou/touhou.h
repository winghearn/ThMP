#pragma once
#ifndef TOUHOU_H
#define TOUHOU_H

#include <map>
#include "th07.h"
#include "th08.h"
#include "th09.h"
#include "th095.h"
#include "th10.h"
#include "th11.h"
#include "th12.h"
#include "th125.h"
#include "th128.h"
#include "th13.h"
#include "th14.h"
#include "th143.h"
#include "th15.h"
#include "th16tr.h"

#ifndef FORMAT
#define FORMAT STEREO16
#endif

#ifndef FREQUENCY
#define FREQUENCY 44100
#endif

#ifndef FREQUENCY_HALF
#define FREQUENCY_HALF 22050
#endif

// Improve this later..
enum Game { 
    TH06 = 30000,
    TH07 = 30001,
    TH08 = 30002,
    TH09 = 30003,
    TH095 = 30004,
    TH10 = 30005,
    TH11 = 30006,
    TH12 = 30007,
    TH125 = 30008,
    TH128 = 30009,
    TH13 = 30010,
    TH14 = 30011,
    TH143 = 30012,
    TH15 = 30013,
    TH16TR = 30014,
    TH16 = 30015
};

const std::map<int, std::map<std::pair<int, std::string>, unsigned int>> gameMap = {
    {TH07, trackMap_TH07},
    {TH08, trackMap_TH08},
    {TH09, trackMap_TH09},
    {TH095, trackMap_TH095},
    {TH10, trackMap_TH10},
    {TH11, trackMap_TH11},
    {TH12, trackMap_TH12},
    {TH125, trackMap_TH125},
    {TH128, trackMap_TH128},
    {TH13, trackMap_TH13},
    {TH14, trackMap_TH14},
    {TH143, trackMap_TH143},
    {TH15, trackMap_TH15},
    {TH16TR, trackMap_TH16TR}
};

#endif
