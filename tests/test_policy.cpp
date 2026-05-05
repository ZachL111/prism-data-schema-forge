#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{83, 74, 14, 15, 11};
    assert(score_signal(signal_case_1) == 173);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{90, 78, 18, 19, 7};
    assert(score_signal(signal_case_2) == 131);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{95, 73, 24, 21, 5};
    assert(score_signal(signal_case_3) == 98);
    assert(classify_signal(signal_case_3) == "review");
}
