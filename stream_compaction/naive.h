#pragma once

#include "common.h"

namespace StreamCompaction {
    namespace Naive {
        StreamCompaction::Common::PerformanceTimer& timer();

        void scan(int n, int *odata, const int *idata);
    }



    namespace Naive_Shared {
        StreamCompaction::Common::PerformanceTimer &timer();

        void scan(int n, int *odata, const int *idata, bool timing_on);
    }
}
